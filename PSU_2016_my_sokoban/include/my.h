/*
** my.h for my in /home/jeremy.elkaim/PSU_2016_my_sokoban
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Tue Dec 20 14:10:40 2016 jeremy elkaim
** Last update Mon Jan  9 08:33:05 2017 jeremy elkaim
*/

#include <termios.h>
#include <unistd.h>
#include <stdlib.h>
#include <ncurses/curses.h>
#include <ncurses.h>
#include <fcntl.h>
#include <string.h>

#ifndef MY_H_
#define MY_H_

void	my_putchar(char c);
int	my_putstr(char *str);
int	toosmall(char *buffer, int chars, int lines);
int	reset(char *temp, int ch);
int	counto(char *buffer);
void	helpsokoban();
void	mvleft(char *buffer, int	p, int ch);
void	mvup(char *buffer, int p, int line, int ch);
void	mvright(char *buffer, int p, int ch);
void	mvdown(char *buffer, int p,int line ,int ch);
int	countp(char *buffer);
int	countline(char *buffer);
int	mvdirectory(char *buffer, int p, int ch, int line);
int	window(char *buffer);
int	countchar(char *buffer);
void	endofwin();
char	*my_strcpy(char *dest, char *src);

#endif /* !MY_H_ */
