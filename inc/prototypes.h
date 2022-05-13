/*
** EPITECH PROJECT, 2022
** PROTOTYPES.H
** File description:
** PROTOTYPES.H file.
*/

#ifndef PROTOTYPES_H_

    #define PROTOTYPES_H_

typedef struct player_position_s {
    int h;
    int w;
} player_position_t;

int check_characters(char *);
int check_boxes_number(char *);
int check_player_number(char *);
int check_errors(char *);

int count_boxes_blocked_conditions(char **, int **, int, int);
int count_boxes_blocked(char **, int **);

void detect_keys(int, char **, int **);

void display_help(void);
void display_map(char **);
int display_game(char *);

int **get_filled_boxes(char **);
int count_filled_boxes(int **);
void insert_filled_box(int **, int, int);
int is_filled_box(int **, int, int);

void free_map(char **, int **);

char **get_map(char *);

player_position_t get_player_position(char **);

char *get_str(char *);

int is_game_over(char **, int **, int);

void move_right(char **, int **);
void move_left(char **, int **);
void move_up(char **, int **);
void move_down(char **, int **);

int main(int, char **);

int count_lines(char *);
int get_biggest_line_size(char *);
void clear_game(void);
int count_boxes(char **);

#endif /* !PROTOTYPES_H_ */
