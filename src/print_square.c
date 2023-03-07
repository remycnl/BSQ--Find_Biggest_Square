/*
** EPITECH PROJECT, 2023
** B-CPE-110-LYN-1-1-BSQ-remy.canal
** File description:
** print_square
*/

#include "../includes/bsq.h"

void extension_one_square_of_one (char **tab_map, int len_line, int i)
{
    for (int j = 0; j < len_line; j++) {
        if (tab_map[i][j] == '.') {
            tab_map[i][j] = 'x';
            break;
        }
    }
}

int one_square_of_one (char**tab_map, int biggest_square,
int nb_lines, int len_line)
{
    if (biggest_square == 1) {
        for (int i = 0; i < nb_lines; i++) {
            extension_one_square_of_one(tab_map, len_line, i);
        }
        return (1);
    } else {
        return (0);
    }
}

void print_x (int i, infos_square_t *infos, char **tab_map)
{
    for (int j = infos->my_j - (infos->biggest_square - 1);
    j <= infos->my_j; j++) {
        tab_map[i][j] = 'x';
    }
}

void tab_resolve (char **tab_map, infos_square_t *infos,
int len_line, int nb_lines)
{
    int square_of_one =
    one_square_of_one(tab_map, infos->biggest_square, nb_lines, len_line);
    if (square_of_one == 0) {
        for (int i = infos->my_i - (infos->biggest_square - 1);
        i <= infos->my_i; i++) {
            print_x(i, infos, tab_map);
        }
    }
}
