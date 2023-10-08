#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
    if(ac == 4)
    {
        int n1 = atoi(av[1]);
        int n2 = atoi(av[3]);
        if(*av[2] == '+')
            printf("%d\n", n1 + n2);
        else if(*av[2] == '-')
            printf("%d\n", n1 - n2);
        else if(*av[2] == '*')
            printf("%d\n", n1 * n2);
        else if(*av[2] == '/')
            printf("%d\n", n1 / n2);
        else if(*av[2] == '%')
            printf("%d\n", n1 % n2);
    }
    else
        write(1, "\n", 1);
}