/*
** function.c for function in /home/jeremy.elkaim/PSU_2016_my_sokoban
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Sun Dec 18 12:40:13 2016 jeremy elkaim
** Last update Wed Feb 22 13:22:44 2017 jeremy elkaim
*/

#include <termios.h>
#include <unistd.h>
#include <stdlib.h>
#include <ncurses/curses.h>
#include <ncurses.h>
#include <fcntl.h>
#include <string.h>

void	helpsokoban()
{
  my_putstr("USAGE");
  my_putstr("\n");
  my_putstr("\t./my_sokoban map");
  my_putstr("\n\n");
  my_putstr("DESCRIPTION");
  my_putstr("\n\t");
  my_putstr("map");
  my_putstr("\t");
  my_putstr("file representing the ");
  my_putstr("warehouse map, containing");
  my_putstr(" '#' for walls,\n");
  my_putstr("\t\t'P' for the player,");
  my_putstr(" 'X' for boxes and 'O' for storage");
  my_putstr(" locations.\n");
}

void	mvleft(char *buffer, int p, int ch)
{
  if (ch == KEY_LEFT)
    {
      if (buffer[p - 1] == ' ')
	{
	  buffer[p] = ' ';
	  buffer[p - 1] = 'P';
        }
      else if (buffer[p - 1] == 'X' && buffer[p - 2] != '#'
	       && buffer[p - 2] != 'X')
	{
	  buffer[p] = ' ';
	  buffer[p - 1] = 'P';
	  buffer[p - 2] = 'X';
	}
    }
}

void	mvup(char *buffer, int p, int line, int ch)
{

  if (ch == KEY_UP)
    {
      if (buffer[p - line - 1] == ' ')
	{
	  buffer[p] = ' ';
	  buffer[p - line - 1] = 'P';
	}
      else if (buffer[p - line - 1] == 'X' && buffer[p - line - line - 2]
	       != '#' && buffer[p - line - line - 2] != 'X')
	{
	  buffer[p] = ' ';
	  buffer[p - line - 1] = 'P';
	  buffer[p - line - line - 2] = 'X';
	}
    }
}

void	mvright(char *buffer, int p, int ch)
{
  if (ch == KEY_RIGHT)
    {
      if (buffer[p + 1] == ' ' && buffer[p - 1] == ' ')
	{
	  buffer[p] = ' ';
	  buffer[p + 1] = ' ';
	}
      else
	my_putstr("Error");
    }
}

void	mvdown(char *buffer, int p, int line, int ch)
{
  if (ch == KEY_DOWN)
    {
      if (buffer[p + line + 1] == ' ')
	{
	  buffer[p] = ' ';
	  buffer[p + line + 1] = 'P';
	}
      else if (buffer[p + line + 1] == 'X' && buffer[p + line + line + 2]
	       != '#' && buffer[p + line + line + 2] != 'X')
	{
	  buffer[p] = ' ';
	  buffer[p + line + 1] = 'P';
	  buffer[p + line + line + 2] = 'X';
	}
    }
}
