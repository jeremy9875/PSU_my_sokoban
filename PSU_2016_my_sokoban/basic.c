/*
** basic.c for basic in /home/jeremy.elkaim/PSU_2016_my_sokoban
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Sun Dec 18 13:02:47 2016 jeremy elkaim
** Last update Mon Jan 30 15:08:51 2017 jeremy elkaim
*/

#include <termios.h>
#include <unistd.h>
#include <stdlib.h>
#include <ncurses/curses.h>
#include <ncurses.h>
#include <fcntl.h>
#include <string.h>
#include "include/my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}

int	toosmall(char *buffer, int chars, int lines)
{
  int	a;
  int	b;
  
   a = LINES / 2;
  b = COLS / 2 - 8;
  if (COLS < chars || LINES < lines)
    {
      mvprintw(a,b, "window too small");
    }
    else
    mvprintw(0,0, buffer);
}

int	reset(char *temp, int ch)
{
  if (ch == ' ')
    {
      window(temp);
    }
  return (0);
}

int	counto(char *buffer)
{
  int	i;
  int	u;

  u = 0;
  i = 0;
  while (buffer[u] != 'O' && buffer[u] != '\0')
    {
      u = u + 1;
      if (buffer[u] == '\0')
        {
          i = 1;
        }
      if (i == 1)
        {
          return (0);
        }
    }
}
