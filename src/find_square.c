/*
** EPITECH PROJECT, 2023
** B-CPE-110-LYN-1-1-BSQ-remy.canal
** File description:
** find_square
*/

#include "../includes/bsq.h"

void find_minimum (int **tab_nb, int i, int j)
{
    int minimum = tab_nb[i][j - 1];

    if (tab_nb[i][j] == 1) {
        if (tab_nb[i - 1][j] < minimum)
            minimum = tab_nb[i - 1][j];
        if (tab_nb[i - 1][j - 1] < minimum)
            minimum = tab_nb[i - 1][j - 1];
        if (minimum != 0)
            tab_nb[i][j] = minimum + 1;
    } else if (tab_nb[i][j] == 0) {
        tab_nb[i][j] = tab_nb[i][j];
    }
}

void extension_reverse_minesweeper (infos_square_t *infos, int i, int j,
int **tab_nb)
{
    if (tab_nb[i][j] > infos->biggest_square) {
        infos->my_i = i;
        infos->my_j = j;
        infos->biggest_square = tab_nb[i][j];
    }
}

void reverse_minesweeper (int **tab_nb, int nb_lines,
int len_line, char **tab_map)
{
    infos_square_t infos;
    infos.biggest_square = 1;
    infos.my_i = 0;
    infos.my_j = 0;
    for (int i = 1; i < nb_lines; ++i) {
        for (int j = 1; j < len_line; j++) {
            find_minimum(tab_nb, i, j);
            extension_reverse_minesweeper(&infos, i, j, tab_nb);
        }
    }
    tab_resolve(tab_map, &infos, len_line, nb_lines);
}
