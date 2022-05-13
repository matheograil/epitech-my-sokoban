/*
** EPITECH PROJECT, 2022
** UTILS.C
** File description:
** UTILS.C file.
*/

#include "../inc/my.h"
#include "../inc/prototypes.h"

int count_lines(char *str)
{
    int lines_nb = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            lines_nb++;
        }
    }
    return (lines_nb);
}

int get_biggest_line_size(char *str)
{
    int temp = 0;
    int biggest_line_size = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            temp = 0;
            continue;
        }
        temp++;
        if ((str[i + 1] == '\0' || str[i + 1] == '\n')
            && temp > biggest_line_size) {
            biggest_line_size = temp;
        }
    }
    return (biggest_line_size);
}

void clear_game(void)
{
    clear();
    refresh();
}

int count_boxes(char **map)
{
    int boxes_nb = 0;

    for (int h = 0; map[h] != NULL; h++) {
        for (int w = 0; map[h][w] != '\0'; w++) {
            (map[h][w] == 'O') ? (boxes_nb++) : (0);
        }
    }
    return (boxes_nb);
}
