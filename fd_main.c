# include "libft.h"
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>

// global
char    str[500];
char    in;
int     n;

char    *get_str(char *str)
{
    printf("Enter str (limit 500 char): ");
    scanf("%s", str);
    while ((getchar()) != '\n');
    return (str);
}

int get_number()
{
    int out;
    
    printf("Enter a number: ");
    scanf("%d", &out);
    while ((getchar()) != '\n');
    return (out);
}

char    get_char()
{
    char    out;

    printf("Enter a character: ");
    scanf("%c", &out);
    while ((getchar()) != '\n');
    return (out);
}

char    input()
{
    char    out;

    printf("Select option\n");
    scanf("%c", &out);
    while ((getchar()) != '\n');
    return (out);
}

void    print_testmenu()
{
    printf("***Testing menu***\n");
    printf("1) Test ft_putchar_fd\n");
    printf("2) Test ft_putstr_fd\n");
    printf("3) Test ft_putendl_fd\n");
    printf("4) Test ft_putnbr_fd\n");
    printf("5) Exit\n");
}

int main()
{
    int     fd = open("test.txt", O_WRONLY | O_CREAT); 
    char    option;

    print_testmenu();
    option = input();
    while (option != '5')
    {
        if (option == '1')
        {
            in = get_char();
            ft_putchar_fd(in, fd);
        }
        else if (option == '2')
        {
            get_str(str);
            ft_putstr_fd(str, fd);
        }
        else if (option == '3')
        {
            get_str(str);
            ft_putendl_fd(str, fd);
        }
        else if (option == '4')
        {
            n = get_number();
            ft_putnbr_fd(n, fd);
        }
        else
            printf("Invalid option\n");
        print_testmenu();
        option = input();
    }
    printf("Test program end\n");
    close(fd);
    return (0);
}