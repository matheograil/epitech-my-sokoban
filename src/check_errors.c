/*
** EPITECH PROJECT, 2022
** CHECK_ERRORS.C
** File description:
** CHECK_ERRORS.C file.
*/

#include "../inc/my.h"
#include "../inc/prototypes.h"

int check_characters(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '#' && str[i] != 'O' && str[i] != 'P' && str[i] != 'X'
            && str[i] != ' ' && str[i] != '\n') {
            return (84);
        }
    }
    return (0);
}

int check_boxes_number(char *str)
{
    int boxes_nb = 0;
    int storage_locations_nb = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'X') {
            boxes_nb++;
        }
        if (str[i] == 'O') {
            storage_locations_nb++;
        }
    }
    if (boxes_nb != storage_locations_nb) {
        return (84);
    }
    return (0);
}

int check_player_number(char *str)
{
    int players_nb = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'P') {
            players_nb++;
        }
    }
    if (players_nb != 1) {
        return (84);
    }
    return (0);
}

int check_errors(char *filename)
{
    char *str = get_str(filename);

    if (my_strcmp(str, "84") == 0 || my_strlen(str) == 0
        || check_characters(str) == 84 || check_boxes_number(str) == 84
        || check_player_number(str) == 84) {
        return (84);
    }
    free(str);
    return (0);
}
