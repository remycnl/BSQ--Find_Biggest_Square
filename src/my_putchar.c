/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday00-remy.canal
** File description:
** my_putchar
*/

#include "../includes/bsq.h"

void my_putchar (char c)
{
    write(1, &c, 1);
}
