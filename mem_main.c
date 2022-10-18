# include <stdio.h>

//prototype in order of menu
void    test_memset();
void    test_memcpy1();
void    test_memcpy2();
void    test_memmove1();
void    test_memmove2();
void    test_memchr();
void    test_memcmp();
// mem_test

char    input()
{
    char    out;

    printf("Select option\n");
    scanf("%c", &out);
    while ((getchar()) != '\n');
    return (out);
}

void    print_test1()
{
    printf("1) Run test\n");
    printf("2) Exit\n");
}
void    print_test2()
{
    printf("1) Use same string\n");
    printf("2) Use different string\n");
    printf("3) Exit\n");
}

int inter1()
{
    char option;

    print_test1();
    option = input();
    while (option != '2')
    {
        if (option == '1')
            return (1);
        else if (option != '2')
        {
            printf("Invalid option\n");
            option = input();
        }
    }
    return (0);
}

int inter2()
{
    char option;

    print_test2();
    option = input();
    while (option != '3')
    {
        if (option == '1')
            return (1);
        else if (option == '2')
        {
            return (2);
        }
        else if (option != '3')
        {
            printf("Invalid option\n");
            option = input();
        }
    }
    return (0);
}

void    print_testmenu()
{
    printf("***Testing menu***\n");
    printf("Test is done with strings (char)\n");
    printf("1) Test memset\n");
    printf("2) Test memcpy\n");
    printf("3) Test memmove\n");
    printf("4) Test memchr\n");
    printf("5) Test memcmp\n");
    printf("6) Exit\n");
}

int main()
{
    int     op;
    char    option;

    print_testmenu();
    option = input();
    while (option != '6')
    {
        if (option == '1')
        {
            op = inter1();
            if (op == 1)
                test_memset();
        }
        else if (option == '2')
        {
            op = inter2();
            if (op == 1)
                test_memcpy1();
            if (op == 2)
                test_memcpy2();
        }
        else if (option == '3')
        {
            op = inter2();
            if (op == 1)
                test_memmove1();
            if (op == 2)
                test_memmove2();
        }
        else if (option == '4')
        {
            op = inter1();
            if (op == 1)
                test_memchr();
        }
        else if (option == '5')
        {
            op = inter1();
            if (op == 1)
                test_memcmp();
        }
        else
        {
            print_testmenu();
            printf("Invalid option\n");
        }
        print_testmenu();
        option = input();
    }
    printf("Test program end\n");
    return (0);
}