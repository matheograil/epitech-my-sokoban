/*
** EPITECH PROJECT, 2022
** DETECT_KEYS.C
** File description:
** DETECT_KEYS.C file.
*/

#include "../inc/my.h"
#include "../inc/prototypes.h"

void detect_keys(int key_code, char **map, int **filled_boxes)
{
    if (key_code == KEY_RIGHT) {
        move_right(map, filled_boxes);
    }
    if (key_code == KEY_LEFT) {
        move_left(map, filled_boxes);
    }
    if (key_code == KEY_UP) {
        move_up(map, filled_boxes);
    }
    if (key_code == KEY_DOWN) {
        move_down(map, filled_boxes);
    }
}
