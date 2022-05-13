/*
** EPITECH PROJECT, 2022
** COUNT_BOXES_BLOCKED.C
** File description:
** COUNT_BOXES_BLOCKED.C file.
*/

#include "../inc/my.h"
#include "../inc/prototypes.h"

int count_boxes_blocked_conditions(char **map, int **filled_boxes, int h, int w)
{
    int bb[4] = { 0, 0, 0, 0 };

    if (map[h][w] == 'X' && is_filled_box(filled_boxes, h, w) == 0) {
        (map[h + 1] == NULL || map[h + 1][w] == '#' || (map[h + 1][w] == 'X'
            && is_filled_box(filled_boxes, h + 1, w) == 1)) ? (bb[0] = 1) : (0);
        (map[h][w + 1] == '\0' || map[h][w + 1] == '#' || (map[h][w + 1] == 'X'
            && is_filled_box(filled_boxes, h, w + 1) == 1)) ? (bb[1] = 1) : (0);
        ((h - 1) < 0 || map[h - 1][w] == '#' || (map[h - 1][w] == 'X'
            && is_filled_box(filled_boxes, h - 1, w) == 1)) ? (bb[2] = 1) : (0);
        ((w - 1) < 0 || map[h][w - 1] == '#' || (map[h][w - 1] == 'X'
            && is_filled_box(filled_boxes, h, w - 1) == 1)) ? (bb[3] = 1) : (0);
    }
    if ((bb[0] == 1 && bb[1] == 1)
        || (bb[1] == 1 && bb[2] == 1)
        || (bb[2] == 1 && bb[3] == 1)
        || (bb[3] == 1 && bb[0] == 1)) {
        return (1);
    }
    return (0);
}

int count_boxes_blocked(char **map, int **filled_boxes)
{
    int boxes_blocked_nb = 0;

    for (int h = 0; map[h] != NULL; h++) {
        for (int w = 0; map[h][w] != '\0'; w++) {
            boxes_blocked_nb +=
                count_boxes_blocked_conditions(map, filled_boxes, h, w);
        }
    }
    return (boxes_blocked_nb);
}
