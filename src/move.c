/*
** EPITECH PROJECT, 2022
** MOVE.C
** File description:
** MOVE.C file.
*/

#include "../inc/my.h"
#include "../inc/prototypes.h"

void move_right(char **map, int **filled_boxes)
{
    player_position_t pp = get_player_position(map);

    if (map[pp.h][pp.w + 1] != '\0' && map[pp.h][pp.w + 1] != '#'
        && map[pp.h][pp.w + 1] != 'X' && map[pp.h][pp.w + 1] != 'O') {
        map[pp.h][pp.w] = ' ';
        map[pp.h][pp.w + 1] = 'P';
    }
    if (map[pp.h][pp.w + 2] != '\0' && map[pp.h][pp.w + 1] == 'X'
        && map[pp.h][pp.w + 2] == ' '
        && is_filled_box(filled_boxes, pp.h, pp.w + 1) == 0) {
        map[pp.h][pp.w] = ' ';
        (1) ? (map[pp.h][pp.w + 1] = 'P', map[pp.h][pp.w + 2] = 'X') : (0);
    }
    if (map[pp.h][pp.w + 2] != '\0' && map[pp.h][pp.w + 1] == 'X'
        && map[pp.h][pp.w + 2] == 'O'
        && is_filled_box(filled_boxes, pp.h, pp.w + 1) == 0) {
        map[pp.h][pp.w] = ' ';
        (1) ? (map[pp.h][pp.w + 1] = 'P', map[pp.h][pp.w + 2] = 'X') : (0);
        insert_filled_box(filled_boxes, pp.h, pp.w + 2);
    }
}

void move_left(char **map, int **filled_boxes)
{
    player_position_t pp = get_player_position(map);

    if ((pp.w - 1) >= 0 && map[pp.h][pp.w - 1] != '#'
        && map[pp.h][pp.w - 1] != 'X' && map[pp.h][pp.w - 1] != 'O') {
        map[pp.h][pp.w] = ' ';
        map[pp.h][pp.w - 1] = 'P';
    }
    if ((pp.w - 2) >= 0 && map[pp.h][pp.w - 1] == 'X'
        && map[pp.h][pp.w - 2] == ' '
        && is_filled_box(filled_boxes, pp.h, pp.w - 1) == 0) {
        map[pp.h][pp.w] = ' ';
        (1) ? (map[pp.h][pp.w - 1] = 'P', map[pp.h][pp.w - 2] = 'X') : (0);
    }
    if ((pp.w - 2) >= 0 && map[pp.h][pp.w - 1] == 'X'
        && map[pp.h][pp.w - 2] == 'O'
        && is_filled_box(filled_boxes, pp.h, pp.w - 1) == 0) {
        map[pp.h][pp.w] = ' ';
        (1) ? (map[pp.h][pp.w - 1] = 'P', map[pp.h][pp.w - 2] = 'X') : (0);
        insert_filled_box(filled_boxes, pp.h, pp.w - 2);
    }
}

void move_up(char **map, int **filled_boxes)
{
    player_position_t pp = get_player_position(map);

    if ((pp.h - 1) >= 0 && map[pp.h - 1][pp.w] != '#'
        && map[pp.h - 1][pp.w] != 'X' && map[pp.h - 1][pp.w] != 'O') {
        map[pp.h][pp.w] = ' ';
        map[pp.h - 1][pp.w] = 'P';
    }
    if ((pp.h - 2) >= 0 && map[pp.h - 1][pp.w] == 'X'
        && map[pp.h - 2][pp.w] == ' '
        && is_filled_box(filled_boxes, pp.h - 1, pp.w) == 0) {
        map[pp.h][pp.w] = ' ';
        (1) ? (map[pp.h - 1][pp.w] = 'P', map[pp.h - 2][pp.w] = 'X') : (0);
    }
    if ((pp.h - 2) >= 0 && map[pp.h - 1][pp.w] == 'X'
        && map[pp.h - 2][pp.w] == 'O'
        && is_filled_box(filled_boxes, pp.h - 1, pp.w) == 0) {
        map[pp.h][pp.w] = ' ';
        (1) ? (map[pp.h - 1][pp.w] = 'P', map[pp.h - 2][pp.w] = 'X') : (0);
        insert_filled_box(filled_boxes, pp.h - 2, pp.w);
    }
}

void move_down(char **map, int **filled_boxes)
{
    player_position_t pp = get_player_position(map);

    if (map[pp.h + 1] != NULL && map[pp.h + 1][pp.w] != '#'
        && map[pp.h + 1][pp.w] != 'X' && map[pp.h + 1][pp.w] != 'O') {
        map[pp.h][pp.w] = ' ';
        map[pp.h + 1][pp.w] = 'P';
    }
    if (map[pp.h + 2] != NULL && map[pp.h + 1][pp.w] == 'X'
        && map[pp.h + 2][pp.w] == ' '
        && is_filled_box(filled_boxes, pp.h + 1, pp.w) == 0) {
        map[pp.h][pp.w] = ' ';
        (1) ? (map[pp.h + 1][pp.w] = 'P', map[pp.h + 2][pp.w] = 'X') : (0);
    }
    if (map[pp.h + 2] != NULL && map[pp.h + 1][pp.w] == 'X'
        && map[pp.h + 2][pp.w] == 'O'
        && is_filled_box(filled_boxes, pp.h + 1, pp.w) == 0) {
        map[pp.h][pp.w] = ' ';
        (1) ? (map[pp.h + 1][pp.w] = 'P', map[pp.h + 2][pp.w] = 'X') : (0);
        insert_filled_box(filled_boxes, pp.h + 2, pp.w);
    }
}
