/*
** EPITECH PROJECT, 2022
** GET_STR.C
** File description:
** GET_STR.C file.
*/

#include "../inc/my.h"
#include "../inc/prototypes.h"

char *get_str(char *filename)
{
    struct stat st;
    int file = open(filename, O_RDONLY);
    int size;
    char *str;

    if (file == -1) {
        return ("84");
    }
    stat(filename, &st);
    size = st.st_size;
    str = malloc(sizeof(char) * (size + 1));
    read(file, str, size);
    str[size + 1] = '\0';
    close(file);
    return (str);
}
