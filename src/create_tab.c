/*
** EPITECH PROJECT, 2023
** TESTS
** File description:
** create_tab
*/

#include "../includes/bsq.h"

void free_data (char **tab_map)
{
    for (unsigned int i = 0; tab_map[i] != NULL; i++) {
        free(tab_map[i]);
    }
    free(tab_map);
}

void disp_tab_map (char **tab_map)
{
    for (unsigned int i = 0; tab_map[i] != NULL; i++) {
        my_putstr(tab_map[i]);
    }
}

void create_data_tab (int file_size, char *str_map, char **tab_map, int ac)
{
    int second_line;
    if (ac == 2) {
        second_line = length_first_line(str_map) - 1;
    }
    if (ac == 3) {
        second_line = 0;
    }
    int row = 0, col = 0;
    for (int i = second_line; i < file_size; i++) {
        char c = str_map[i];
        if (c == '\n') {
            tab_map[row][col] = c;
            tab_map[row][col + 1] = '\0';
            row++;
            col = 0;
        } else {
            tab_map[row][col] = c;
            col++;
        }
    }
}

void create_tab_map (int file_size, char *str_map, int ac)
{
    int nb_lines = number_lines(str_map, ac);
    int len_line = lenght_lines(str_map);

    char **tab_map = (char **) malloc((nb_lines + 1) * sizeof(char *));
    for (int i = 0; i < nb_lines; i++) {
        tab_map[i] = (char*) malloc((len_line + 2) * sizeof(char));
    }
    tab_map[nb_lines] = NULL;
    create_data_tab(file_size, str_map, tab_map, ac);
    create_nb_tab(tab_map, nb_lines, len_line);
    disp_tab_map(tab_map);
    free_data(tab_map);
}
