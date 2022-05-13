/*
** EPITECH PROJECT, 2022
** FREE.C
** File description:
** FREE.C file.
*/

#include "../inc/my.h"
#include "../inc/prototypes.h"

void free_map(char **map, int **filled_boxes)
{
    for (int i = 0; map[i] != NULL; i++) {
        free(map[i]);
    }
    free(map);
    for (int i = 0; filled_boxes[i] != NULL; i++) {
        free(filled_boxes[i]);
    }
    free(filled_boxes);
}
