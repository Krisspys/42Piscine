#include <unistd.h>

void    ft_print_numbers(void)
{
    char    c;

    c = '0';
    while (c <= '9')
    {
        write(1, &c, 1);
        c++;
    }
}

//Versión sin bucle
void    ft_print_numbers2(void)
{
    write(1, "0123456789", 10);
}

//No olvides comentar/borrar el main
int main(void)
{
    ft_print_numbers ();
    write (1, "\n", 1);
    ft_print_numbers2 ();
    return (0);
}