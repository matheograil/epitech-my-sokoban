##
## EPITECH PROJECT, 2022
## MAKEFILE
## File description:
## MAKEFILE file.
##

PROJECT_FILES = src/*.c

LIBRARY_FILES = lib/*.c

BINARY_FILE = my_sokoban

FLAGS = -lncurses

all:
	gcc $(PROJECT_FILES) $(LIBRARY_FILES) -o $(BINARY_FILE) $(FLAGS)

clean:
	rm -f $(BINARY_FILE)

fclean: clean

re: fclean all
