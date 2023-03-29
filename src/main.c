/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-bssokoban-remy.canal
** File description:
** bsq
*/

#include "../includes/bsq.h"

int test_read_map (char **av, int ac)
{
    if (ac == 2) {
        if (read_map(av[1], ac) == 84) {
            return (84);
        }
    }
    return (0);
}

int test_good_policy (char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '.' && str[i] != 'o') {
            my_putstr("Use only '.' or 'o'");
            return (84);
        }
    }
    return (0);
}

int extension_test_generate_map (int ac, char **av, int width, char *pattern)
{
    if (test_good_policy(av[2]) == 84) {
        return (84);
    } else {
        if (if_zero_or_one (ac, av, width, pattern) == 84) {
            return (84);
        }
    }
    return (0);
}

int test_generate_map (char **av, int ac)
{
    if (ac == 3) {
        int width = my_atoi(av[1]);
        char* pattern = av[2];
        if (extension_test_generate_map (ac, av, width, pattern) == 84) {
            return (84);
        }
    }
    return (0);
}

int main (int ac, char **av)
{

    if (ac == 2 || ac == 3) {
        if (test_read_map(av, ac) == 84) {
            return (84);
        }
        if (test_generate_map(av, ac) == 84) {
            return (84);
        }
    } else {
        my_putstr("Incorrect number of arguments : ");
        my_putstr("2 or 3 arguments expected\n");
        return (84);
    }
    return (0);
}
