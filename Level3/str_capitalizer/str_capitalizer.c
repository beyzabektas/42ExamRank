#include <unistd.h>
int main(int ac, char **av)
{
    if(ac > 1)
    {
        int j = 0;
        while(av[j])
        {
            str_capitalizer(av[j]);
        }
    }
    write(1, "\n", 1);
}