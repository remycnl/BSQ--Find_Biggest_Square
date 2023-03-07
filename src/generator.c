/*
** EPITECH PROJECT, 2023
** B-CPE-110-LYN-1-1-BSQ-remy.canal
** File description:
** generator
*/

#include "../includes/bsq.h"

int generate_map (int width, int height, char *pattern, int ac)
{
    int i, j;
    int pattern_len = my_strlen(pattern);
    int file_size = width * height + height;

    char *str_map = malloc(((width * height + height) + 1) * sizeof(char));
    str_map[width * height + height] = '\0';

    for (i = 0; i < height; i++) {
        for (j = 0; j < width + 1; j++) {
            str_map[i * (width + 1) + j] = pattern[(i + j) % pattern_len];
        }
        str_map[i * (width + 1) + width] = '\n';
    }
    create_tab_map(file_size, str_map, ac);
    free(str_map);
    return (0);
}
