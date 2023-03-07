/*
** EPITECH PROJECT, 2023
** swap
** File description:
** my_atoi
*/

#include "../includes/bsq.h"

int my_atoi (const char *str)
{
    int res = 0;
    int sign = 1;
    int i = 0;

    if (str[0] == '-') {
        sign = -1;
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9') {
        res = res * 10 + str[i] - '0';
        i++;
    }

    return sign * res;
}
