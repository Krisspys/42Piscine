#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

//No olvides comentar/borrar el main
int main(void)
{
    write(1, "H", 1);
    return (0);
}