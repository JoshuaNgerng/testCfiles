# include "libft.h"
# include <stdio.h>

// prototype in order of menu
// ft_lstnew and ft_lstdelone is already in other functions
void    test_ft_lstadd_front(int *address);
void    test_ft_lstsize();
void    test_ft_lstlast();
void    test_ft_lstadd_back(int *address);
void    test_ft_lstclear();
void    test_ft_lstiter();
void    test_ft_lstmap();
void    printout_link_list_start();
// linked_test

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
    printf("limit of linked list is 100\n");
    printf("1) Add new node at the start\n");
    printf("2) Get the number of nodes in the link list\n");
    printf("3) Call last node\n");
    printf("4) Add new node at the back\n");
    printf("5) Clear list from the nth node\n");
    printf("6) Iterate list with a function\n");
    printf("7) Make new list with a function\n");
    printf("8) Print out current linked list\n");
    printf("9) Exit\n");
}

int main()
{
    int     i;
    int     address[100];
    char    option;

    print_testmenu();
    option = input();
    i = 0;
    while (option != '9')
    {
        if (option == '1')
        {
            test_ft_lstadd_front(&address[i]);
            i ++;
        }
        else if (option == '2')
            test_ft_lstsize();
        else if (option == '3')
            test_ft_lstlast();
        else if (option == '4')
        {
            test_ft_lstadd_back(&address[i]);
            i ++;
        }
        else if (option == '5')
            test_ft_lstclear();
        else if (option == '6')
            test_ft_lstiter();
        else if (option == '7')
            test_ft_lstmap();
        else if (option == '8')
            printout_link_list_start();
        else
            printf("Invalid option\n");
        print_testmenu();
        option = input();
    }
    printf("Test program end\n");
    return (0);
}