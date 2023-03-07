/*
** EPITECH PROJECT, 2023
** B-CPE-110-LYN-1-1-BSQ-remy.canal
** File description:
** create_tab_int
*/

#include "../includes/bsq.h"

void nb_instead_letters (char **tab_map, int **tab_nb, int i, int j)
{
    if (tab_map[i][j] == '.') {
        tab_nb[i][j] = 1;
    } else if (tab_map[i][j] == 'o') {
        tab_nb[i][j] = 0;
    }
}

void tab_map_into_tab_nb (char **tab_map, int **tab_nb,
int nb_lines, int len_line)
{
    for (int i = 0; i < nb_lines; i++) {
        for (int j = 0; j < len_line; j++) {
            nb_instead_letters(tab_map, tab_nb, i, j);
        }
    }
    reverse_minesweeper(tab_nb, nb_lines, len_line, tab_map);
    for (int i = 0; i < nb_lines; i++) {
        free(tab_nb[i]);
    }
    free(tab_nb);
}

void create_nb_tab (char **tab_map, int nb_lines, int len_line)
{
    int **tab_nb = (int **) malloc((nb_lines + 1) * sizeof(int *));
    for (int i = 0; i < nb_lines; i++) {
        tab_nb[i] = (int*) malloc((len_line) * sizeof(int));
    }
    tab_nb[nb_lines] = NULL;
    tab_map_into_tab_nb(tab_map, tab_nb, nb_lines, len_line);
}
