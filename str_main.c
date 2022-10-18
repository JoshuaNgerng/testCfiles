# include <stdio.h>

//prototype in order of menu
void    test_strlcpy();
void    test_strlcat();
void    test_strchr();
void    test_strrchr();
void    test_strncmp();
void    test_strnstr();
void    test_atoi();
// str_test

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
    printf("1) Test strlcpy\n");
    printf("2) Test strlcat\n");
    printf("3) Test strchr\n");
    printf("4) Test strrchr\n");
    printf("5) Test strncmp\n");
    printf("6) Test strnstr\n");
    printf("7) Test atoi\n");
    printf("8) Exit\n");
}

int main()
{
    char    option;

    print_testmenu();
    option = input();
    while (option != '8')
    {
        if (option == '1')
            test_strlcpy();
        else if (option == '2')
            test_strlcat();
        else if (option == '3')
            test_strchr();
        else if (option == '4')
            test_strrchr();
        else if (option == '5')
            test_strncmp();
        else if (option == '6')
            test_strnstr();
        else if (option == '7')
            test_atoi();
        else
            printf("Invalid option\n");
        print_testmenu();
        option = input();
    }
    printf("Test program end\n");
    return (0);
}