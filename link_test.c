# include "libft.h"
# include <stdio.h>

// global
int n;
struct s_list *start;

int get_number()
{
    int out;
    
    printf("Enter a number: ");
    scanf("%d", &out);
    while ((getchar()) != '\n');
    return (out);
}

void    *shift(void *content)
{
    *(int *)(content) += 1;
    return (content);
}

void    fun(void *content)
{
    *(int *)(content) *= 2;
}

void    clear(void *content)
{
    *(unsigned char *)content = '\0';
}

void    printout_link_list(t_list *node)
{
    int     i;
    int     test;
    t_list  *curr;
    
    if (start == NULL)
        printf("there is nothing in the linked list\n");
    curr = node;
    i = 0;
    while (curr)
    {
        printf("%d node = address: %p , address content: %p, value is %d\n", i, curr, curr -> content, *(int *)(curr -> content));
        curr = curr -> next;
        i ++;
    }
}

void    test_ft_lstadd_front(int *address)
{
    t_list  *new;

    n = get_number();
    *address = n;
    new = ft_lstnew(address);
    printf("Testing ft_lstadd_front\n");
    ft_lstadd_front(&start, new);
    printout_link_list(start);
}

void    test_ft_lstsize()
{
    printf("Testing ft_lstsize\n");
    n = ft_lstsize(start);
    printf("they are %d no of nodes in the link list\n", n);
}

void    test_ft_lstlast()
{
    t_list  *last;

    printf("Testing ft_lstlast\n");
    last = ft_lstlast(start);
    printf("last node is %d\n", *(int *)(last -> content));
}

void    test_ft_lstadd_back(int *address)
{
    t_list  *new;

    n = get_number();
    *address = n;
    new = ft_lstnew(address);
    printf("Testing ft_lstadd_back\n");
    ft_lstadd_back(&start, new);
    printout_link_list(start);
}

void    test_ft_lstclear()
{
    int max;
    t_list *curr;

    printf("Select a starting node\n");
    n = get_number();
    curr = start;
    max = ft_lstsize(start);
    if (n > max)
    {
        printf("Index out of range\n");
        return ;
    }
    while (n > 0)
    {
        n --;
        curr = curr -> next;
    }
    printf("Testing lstclear\n");
    ft_lstclear(&curr, clear);
    printout_link_list(start);
}

void    test_ft_lstiter()
{
    ft_lstiter(start, fun);
    printout_link_list(start);
}

void    test_ft_lstmap()
{
    t_list  *temp;
    t_list  *output;

    output = ft_lstmap(start, shift, clear);
    printf("Output linked list is\n");
    printout_link_list(output);
    printf("Original linked list is\n");
    printout_link_list(start);
    n = ft_lstsize(start);
    while (n > 0)
    {
        temp = output -> next;
        free(output);
        output = temp;
        n --;
    }
}

void    printout_link_list_start()
{
    printout_link_list(start);
}