/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-bssokoban-remy.canal
** File description:
** bsq
*/

#ifndef BSQ_H_
    #define BSQ_H_

    #include "struct.h"
    #include <unistd.h>
    #include <stdio.h>
    #include <stdarg.h>
    #include <stdlib.h>
    #include <fcntl.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <time.h>

    int main (int ac, char **av);
    int read_map (const char *filepath, int ac);
    int errors (const char *filepath, int fd);
    void create_tab_map (int file_size, char *str_map, int ac);
    void create_data_tab (int file_size, char *str_map, char **tab_map, int ac);
    void disp_tab_map (char **tab_map);
    void free_data (char **tab_map);
    int size_file (char **av);
    void my_putchar (char c);
    void my_putstr (char const *str);
    int number_lines (char *str_map, int ac);
    int check_file_sizes (int file_size, char *str_map, int fd);
    int length_first_line (char *str_map);
    int lenght_lines (char *str_map);
    void create_nb_tab (char **tab_map, int nb_lines, int len_line);
    void nb_instead_letters (char **tab_map, int **tab_nb, int i, int j);
    void tab_map_into_tab_nb (char **tab_map, int **tab_nb,
    int nb_lines, int len_line);
    void reverse_minesweeper (int **tab_nb, int nb_lines,
    int len_line, char **tab_map);
    void extension_reverse_minesweeper (infos_square_t *infos, int i,
    int j, int **tab_nb);
    void find_minimum (int **tab_nb, int i, int j);
    void tab_resolve (char **tab_map, infos_square_t *infos,
    int len_line, int nb_lines);
    void extension_one_square_of_one (char **tab_map, int len_line, int i);
    int my_strlen (char const *str);
    int my_atoi (const char *str);
    int generate_map (int width, int height, char *pattern, int ac);
    int one_square_of_one (char**tab_map, int biggest_square,
    int nb_lines, int len_line);
    void print_x (int i, infos_square_t *infos, char **tab_map);
    int test_read_map (char **av, int ac);
    int test_generate_map (char **av, int ac);
    void is_one_argument (char **av);
    int errors_generator (char **av, int second_argument);
    int extension_if_zero_or_one (int ac, int second_argument,
    int width, char *pattern);
    int if_zero_or_one (int ac, char **av, int width, char *pattern);
    int extension_test_generate_map (int ac, char **av, int width,
    char *pattern);
    int test_good_policy (char *str);

#endif /* !BSQ_H_ */
