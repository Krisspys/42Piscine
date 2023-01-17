#include <unistd.h>

void    ft_is_negative(int n)
{
    if (n < 0)
        write(1, "N", 1);
    else
        write(1, "P", 1);
}

//No olvides comentar/borrar el main
int main(void)
{
    write(1, "1 es: ", 6);
    ft_is_negative(1);
    write(1, "\n0 es: ", 7);
    ft_is_negative(0);
    write(1, "\n-1 es: ", 8);
    ft_is_negative(-1);
    return (0);
}