/*
** win.c for win in /home/jeremy.elkaim/PSU_2016_my_sokoban
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Sun Dec 18 13:50:46 2016 jeremy elkaim
** Last update Tue Dec 20 16:02:16 2016 jeremy elkaim
*/

#include <termios.h>
#include <unistd.h>
#include <stdlib.h>
#include <ncurses/curses.h>
#include <ncurses.h>
#include <fcntl.h>
#include <string.h>
#include "include/my.h"

int	countchar(char *buffer)
{
  int	i;

  i = 0;
  while (buffer[i] != '\n')
    {
      i = i + 1;
    }
  return (i);
}

void	endofwin()
{
  clear();
  refresh();
  endwin();
  exit (0);
}

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  return (dest);
}
