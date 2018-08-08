/*
** my_sokoban.c for my_sokoban in /home/jeremy.elkaim/PSU_2016_my_sokoban
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Dec  5 08:58:08 2016 jeremy elkaim
** Last update Wed Dec 21 14:01:03 2016 jeremy elkaim
*/

#include <termios.h>
#include <unistd.h>
#include <stdlib.h>
#include <ncurses/curses.h>
#include <ncurses.h>
#include <fcntl.h>
#include <string.h>
#include "include/my.h"

int	countp(char *buffer)
{
  int	i;

  i = 0;
  while (buffer[i] != 'P')
    {
      i = i + 1;
    }
  return (i);
}

int	countline(char *buffer)
{
  int	i;
  int	u;

  i = 0;
  u = 0;
    while (buffer[i] != '\0')
      {
	if (buffer[i] == '\n')
	  {
	    u = u + 1;
	  }
	i = i + 1;
      }
    u = u + 1;
  return (u);
}

int     mvdirectory(char *buffer, int p, int ch, int line)
{
  mvleft(buffer, p, ch);
  mvup(buffer, p, line, ch);
  mvright(buffer, p, ch);
  mvdown(buffer, p, line, ch);
  return (0);
}

int	window(char *buffer)
{
  int	ch;
  int	p;
  int	line;
  int	lines;
  int	chars;
  int	o;
  char	temp[10001];
  char	t;

  my_strcpy(temp, buffer);
  initscr();
  keypad(stdscr, TRUE);
  while (1)
    {
      clear();
      p = countp(buffer);
      lines = countline(buffer);
      chars = countchar(buffer);
      line = countchar(buffer);
      o = counto(buffer);
      toosmall(buffer, chars, lines);
      if (o == 0)
        endofwin();
      ch = getch();
      reset(temp, ch);
      refresh();
      mvdirectory(buffer, p, ch, line);
    }
  endwin();
  return (0);
}

int	main(int ac, char **av, int i, int n)
{
  int	fd;
  char	buffer[10001];

  i = 1;
  while (av[i] != '\0')
    {
      if (av[1][0] == '-')
	{
	  if (av[1][1] == 'h')
	    helpsokoban();
	}
      if (av[1][0] != '-' && av[1][1] != 'h')
	{
	  fd = open(av[i], O_RDONLY);
	  read(fd, buffer, 10000);
	  if (fd == - 1)
	    {
	      my_putstr("Error openning file\n");
	    }
	  window(buffer);
	}
      i = i + 1;
      close(fd);
    }
  return (0);
}
