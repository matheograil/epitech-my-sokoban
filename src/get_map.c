/*
** EPITECH PROJECT, 2022
** GET_MAP.C
** File description:
** GET_MAP.C file.
*/

#include "../inc/my.h"
#include "../inc/prototypes.h"

char **get_map(char *str)
{
    int height = count_lines(str);
    int width = get_biggest_line_size(str);
    char **map = malloc(sizeof(char *) * (height + 1));

    for (int i = 0; i < height; i++)
        map[i] = malloc(sizeof(char *) * (width + 1));
    for (int i = 0, h = 0, w = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            h++;
            w = 0;
            continue;
        }
        map[h][w++] = str[i];
        if (str[i + 1] == '\n' || str[i + 1] == '\0') {
            map[h][w + 1] = '\0';
        }
    }
    map[height] = NULL;
    return (map);
}
