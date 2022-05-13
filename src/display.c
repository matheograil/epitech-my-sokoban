/*
** EPITECH PROJECT, 2022
** DISPLAY.C
** File description:
** DISPLAY.C file.
*/

#include "../inc/my.h"
#include "../inc/prototypes.h"

void display_help(void)
{
    my_putstr("USAGE\n"
        "\t./my_sokoban\tmap\n"
        "DESCRIPTION\n"
        "\tmap\t\tfile representing the warehouse map, containing '#' for walls"
        ", 'P' for the player, 'X' for boxes and 'O' for storage locations.\n"
    );
}

void display_map(char **map)
{
    for (int i = 0; map[i] != NULL; i++) {
        printw(map[i]);
        printw("\n");
    }
    refresh();
}

int display_game(char *filename)
{
    char **map = get_map(get_str(filename));
    int exit_code;
    int **filled_boxes = get_filled_boxes(map);

    for (int key_code, boxes_nb = count_boxes(map); 1; clear_game()) {
        display_map(map);
        if ((exit_code = is_game_over(map, filled_boxes, boxes_nb)) >= 0)
            break;
        key_code = getch();
        if (key_code == ' ') {
            free_map(map, filled_boxes);
            map = get_map(get_str(filename));
            filled_boxes = get_filled_boxes(map);
        } else {
            detect_keys(key_code, map, filled_boxes);
        }
    }
    endwin();
    free_map(map, filled_boxes);
    return (exit_code);
}
