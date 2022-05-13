/*
** EPITECH PROJECT, 2022
** MY.H
** File description:
** MY.H file.
*/

#ifndef MY_H_

    #define MY_H_
    #include <unistd.h>
    #include <stdlib.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <ncurses.h>

void my_put_nbr(int);
void my_putchar(char);
void my_putstr(char *);
int my_strcmp(char *, char *);
int my_strlen(char *);

#endif /* !MY_H_ */
