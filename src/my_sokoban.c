/*
** EPITECH PROJECT, 2022
** MY_SOKOBAN.C
** File description:
** MY_SOKOBAN.C file.
*/

#include "../inc/my.h"
#include "../inc/prototypes.h"

int main(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
        display_help();
        return (0);
    }
    if (ac != 2 || check_errors(av[1]) == 84) {
        my_putstr("Error : please enter a valid map\n");
        return (84);
    }
    initscr();
    keypad(stdscr, TRUE);
    return (display_game(av[1]));
}
