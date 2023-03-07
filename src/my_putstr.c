/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday04-remy.canal
** File description:
** my_putstr.c
*/

#include "../includes/bsq.h"

void my_putstr (char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        write(1, &str[i], 1);
        i++;
    }
}
