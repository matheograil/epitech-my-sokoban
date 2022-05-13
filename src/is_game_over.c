/*
** EPITECH PROJECT, 2022
** IS_GAME_OVER.C
** File description:
** IS_GAME_OVER.C file.
*/

#include "../inc/my.h"
#include "../inc/prototypes.h"

int is_game_over(char **map, int **filled_boxes, int boxes_nb)
{
    int filled_boxes_nb = count_filled_boxes(filled_boxes);
    int boxes_blocked_nb = count_boxes_blocked(map, filled_boxes);

    if (filled_boxes_nb == boxes_nb) {
        return (0);
    } else if (boxes_blocked_nb > 0) {
        return (1);
    }
    return (-1);
}
