#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main(int argc, char **argv)
{
    int ff, ft, n, w;
    char *buf[1024];
    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }
    ff = open(argv[1], O_RDONLY);
    if (ff == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }
    ft = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0644);
    if (ft == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        exit(99);
    }
    n = read(ff, buf, 1024);
    if (n == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
        exit(98);
    }
    while (n != 0)
    {
        w = write(ft, buf, n);
        if (w == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            exit(99);
        }
        n = read(ff, buf, 1024);
        if (n == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
            exit(98);
        }
    }
    ff = close(ff);
    if (ff == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff);
        exit(100);
    }
    ft = close(ft);
    if (ft == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ft);
        exit(100);
    }
    return (0);
}
