/*
** EPITECH PROJECT, 2023
** B-CPE-110-LYN-1-1-BSQ-remy.canal
** File description:
** my_errors
*/

#include "../includes/bsq.h"

void is_one_argument (char **av)
{
    if (av[2][0] == '.') {
        my_putchar('.');
    }
    if (av[2][0] == 'o') {
        my_putchar('o');
    }
}

int errors_generator (char **av, int second_argument)
{
    if (second_argument < 0) {
        my_putstr("Invalid argument: try positives numbers");
        return (84);
    }
    if (second_argument == 0) {
        my_putchar('\n');
        return (1);
    }
    if (second_argument == 1) {
        is_one_argument(av);
        return (1);
    }
    return (0);
}

int extension_if_zero_or_one (int ac, int second_argument,
int width, char *pattern)
{
    if (second_argument == 1 || second_argument == 0 ||
    generate_map(width, width, pattern, ac) == 84) {
        if (second_argument == 1 || second_argument == 0) {
            return (0);
        } else {
            return (84);
        }
    }
    return (0);
}

int if_zero_or_one (int ac, char **av, int width, char *pattern)
{
    int second_argument = my_atoi(av[1]);
    if (errors_generator(av, second_argument) == 84) {
        return (84);
    } else {
        if (extension_if_zero_or_one(ac, second_argument, width, pattern)
        == 84) {
            return (84);
        }
    }
    return (0);
}
