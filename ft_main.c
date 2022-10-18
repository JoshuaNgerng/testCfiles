# include <stdio.h>
# include <fcntl.h>

//prototype in order of menu
void    test_substr();
void    test_strjoin();
void    test_strtrim();
void    test_split();
void    test_itoa();
// ft_str_test

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
    printf("1) Test substr\n");
    printf("2) Test strjoin\n");
    printf("3) Test strtrim\n");
    printf("4) Test split\n");
    printf("5) Test itoa\n");
    printf("6) Exit\n");
}

int main()
{
    char    option;

    print_testmenu();
    option = input();
    while (option != '6')
    {
        if (option == '1')
            test_substr();
        else if (option == '2')
            test_strjoin();
        else if (option == '3')
            test_strtrim();
        else if (option == '4')
            test_split();
        else if (option == '5')
            test_itoa();
        else
            printf("Invalid option\n");
        print_testmenu();
        option = input();
    }
    printf("Test program end\n");
    return (0);
}