/*
** EPITECH PROJECT, 2023
** TESTS
** File description:
** read_map
*/

#include "../includes/bsq.h"

int errors (const char *filepath, int fd)
{
    if (filepath == NULL) {
        my_putstr("Filepath is empty.\n");
        return (84);
    }
    if (fd == -1) {
        my_putstr("Cannot open the file.\n");
        return (84);
    }
    return (0);
}

int check_file_sizes (int file_size, char *str_map, int fd)
{
    if (file_size == -1) {
        my_putstr("Cannot read the file.\n");
        close(fd);
        free(str_map);
        return (84);
    }
    if (file_size == 0) {
        my_putstr("File is empty.\n");
        close(fd);
        free(str_map);
        return (84);
    }
    return (0);
}

int read_map (const char *filepath, int ac)
{
    int fd = open(filepath, O_RDONLY);
    int error = errors(filepath, fd);
    if (error == 84) {
        return (84);
    }
    struct stat buff;
    stat(filepath, &buff);
    int file_size = buff.st_size;

    char *str_map = malloc(file_size + 1);
    str_map[file_size] = '\0';
    read(fd, str_map, file_size);
    int check_file_size = check_file_sizes(file_size, str_map, fd);
    if (check_file_size == 84) {
        return (84);
    }
    create_tab_map(file_size, str_map, ac);
    close(fd);
    free(str_map);
    return (0);
}
