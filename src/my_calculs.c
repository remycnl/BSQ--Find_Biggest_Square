/*
** EPITECH PROJECT, 2023
** TESTS
** File description:
** my_calculs
*/

#include "../includes/bsq.h"

int number_lines (char *str_map, int ac)
{
    int nb_lines = 0;
    int i = 0;

    while (str_map[i] != '\0') {
        if (str_map[i] == '\n') {
            nb_lines += 1;
        }
        i++;
    }
    if (ac == 2) {
        nb_lines -= 1;
    } else if (ac == 3) {
        nb_lines = nb_lines;
    }
    return (nb_lines);
}

int length_first_line (char *str_map)
{
    int len_first_line = 0;
    int i = 0;

    while (str_map[i] != '\n') {
        len_first_line += 1;
        i++;
    }
    len_first_line += 2;
    return (len_first_line);
}

int lenght_lines (char *str_map)
{
    int len_first_line = length_first_line(str_map);
    int len_lines = 0;
    int i = 0;

    while (str_map[i + len_first_line] != '\n') {
        len_lines += 1;
        i++;
    }
    len_lines += 1;
    return (len_lines);
}
