/*
** EPITECH PROJECT, 2022
** FILLED_BOXES.C
** File description:
** FILLED_BOXES.C file.
*/

#include "../inc/my.h"
#include "../inc/prototypes.h"

int **get_filled_boxes(char **map)
{
    int boxes_nb = count_boxes(map);
    int **filled_boxes = malloc(sizeof(int *) * (boxes_nb + 1));

    for (int i = 0; i < boxes_nb; i++) {
        filled_boxes[i] = malloc(sizeof(int *) * 2);
        filled_boxes[i][0] = -1;
        filled_boxes[i][1] = -1;
    }
    filled_boxes[boxes_nb] = NULL;
    return (filled_boxes);
}

int count_filled_boxes(int **filled_boxes)
{
    int filled_boxes_nb = 0;

    for (int i = 0; filled_boxes[i] != NULL
        && filled_boxes[i][0] != -1 && filled_boxes[i][1] != -1; i++) {
        filled_boxes_nb++;
    }
    return (filled_boxes_nb);
}

void insert_filled_box(int **filled_boxes, int h, int w)
{
    int filled_boxes_nb = count_filled_boxes(filled_boxes);

    filled_boxes[filled_boxes_nb][0] = h;
    filled_boxes[filled_boxes_nb][1] = w;
}

int is_filled_box(int **filled_boxes, int h, int w)
{
    for (int i = 0; filled_boxes[i] != NULL; i++) {
        if (h == filled_boxes[i][0] && w == filled_boxes[i][1]) {
            return (1);
        }
    }
    return (0);
}
