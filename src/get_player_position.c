/*
** EPITECH PROJECT, 2022
** GET_PLAYER_POSITION.C
** File description:
** GET_PLAYER_POSITION.C file.
*/

#include "../inc/my.h"
#include "../inc/prototypes.h"

player_position_t get_player_position(char **map)
{
    player_position_t pp;

    for (int h = 0; map[h] != NULL; h++) {
        for (int w = 0; map[h][w] != '\0'; w++) {
            (map[h][w] == 'P') ? (pp.h = h, pp.w = w) : (0);
        }
    }
    return (pp);
}
