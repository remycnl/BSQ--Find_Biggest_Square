/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday04-remy.canal
** File description:
** my_strlen.c
*/

#include "../includes/bsq.h"

void my_putchar (char c);

int my_strlen (char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
