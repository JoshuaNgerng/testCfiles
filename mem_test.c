# include "libft.h"
# include <string.h>
# include <stdio.h>

char    input_t()
{
    char    out;

    printf("Select option\n");
    scanf("%c", &out);
    while ((getchar()) != '\n');
    return (out);
}

int inter()
{
    char option;

    printf("1) Use int input\n2) Use char input\n");
    while (option != '1' && option != '2')
    {
        option = input_t();
        if (option == '1')
            return (1);
        else if (option == '2')
            return (2);
        else
        {
            printf("Invalid option\n");
            printf("1) Use int input\n2) Use char input\n");
            option = input_t();
        }
    }
    return (0);
}

int input_int_para()
{
    int     out;
    char    op;

    op = inter();
    if (op == 1)
    {
       printf("Enter parameter\n");
       scanf("%d", &out);
    }
    if (op == 2)
    {
        printf("Enter parameter\n");
        scanf("%c", (char *)(&out));
    }
    while ((getchar()) != '\n');
    return (out);
}

int input_int_index()
{
    int out;

    printf("Enter index of str: ");
    scanf("%d", &out);
    while ((getchar()) != '\n');
    return (out);
}

int input_int_byte()
{
    int out;

    printf("Enter no of bytes: ");
    scanf("%d", &out);
    while ((getchar()) != '\n');
    return (out);
}

void    test_memset()
{ 
    int     c;
    char    str[500];
    char    *c_str;
    int     n;

    printf("Enter str (limit 500 char): ");
    scanf("%s", str);
    while ((getchar()) != '\n');
    c_str = strdup(str);
    c = input_int_para();
    n = input_int_byte();
    printf("Function is memset(\"%s\", %d, %d)\n", str, c, n);
    printf("lib = %s\n", (char *)memset(str, c, n));
    printf("own = %s\n", (char *)ft_memset(c_str, c, n));
    free(c_str);
}

void    test_memcpy1()
{
    char    str[500];
    char    *c_str;
    int     in1;
    int     in2;
    int     n;

    printf("Enter str (limit 500 char): ");
    scanf("%s", str);
    while ((getchar()) != '\n');
    c_str = strdup(str);
    printf("Index for str dest\n");
    in1 = input_int_index();
    printf("Index for str dest\n");
    in2 = input_int_index();
    n = input_int_byte();
    printf("Function is memcpy(str[%d], str[%d], %d)\n", in1, in2, n);
    printf("lib = %s\n", (char *)memcpy(&str[in1], &str[in2], n));
    printf("own = %s\n", (char *)ft_memcpy(&c_str[in1], &c_str[in2], n));
    free(c_str);
}

void    test_memcpy2()
{
    char    str2[500];
    char    *c_str2;
    char    str1[500];
    char    *c_str1;
    int     n;

    printf("Enter str (limit 500 char): ");
    scanf("%s", str1);
    c_str1 = strdup(str1);
    printf("Enter str (limit 500 char): ");
    scanf(" %s", str2);
    while ((getchar()) != '\n');
    c_str2 = strdup(str2);
    n = input_int_byte();
    printf("Function is memcpy(\"%s\", \"%s\", %d)\n", str1, str2, n);
    printf("lib = %s\n", (char *)memcpy(str1, str2, n));
    printf("own = %s\n", (char *)ft_memcpy(c_str1, c_str2, n));
    free(c_str1);
    free(c_str2);
}

void    test_memmove1()
{
    char    str[500];
    char    *c_str;
    int     in1;
    int     in2;
    int     n;

    printf("Enter str (limit 500 char): ");
    scanf("%s", str);
    while ((getchar()) != '\n');
    c_str = strdup(str);
    printf("Index for str dest\n");
    in1 = input_int_index();
    printf("Index for str dest\n");
    in2 = input_int_index();
    n = input_int_byte();
    printf("Function is memmove(str[%d], str[%d], %d)\n", in1, in2, n);
    printf("lib = %s\n", (char *)memmove(&str[in1], &str[in2], n));
    printf("own = %s\n", (char *)ft_memmove(&c_str[in1], &c_str[in2], n));
    free(c_str);
}

void    test_memmove2()
{
    char    str2[500];
    char    *c_str2;
    char    str1[500];
    char    *c_str1;
    int     n;

    printf("Enter str (limit 500 char): ");
    scanf("%s", str1);
    c_str1 = strdup(str1);
    printf("Enter str (limit 500 char): ");
    scanf(" %s", str2);
    while ((getchar()) != '\n');
    c_str2 = strdup(str2);
    n = input_int_byte();
    printf("Function is memmove(\"%s\", \"%s\", %d)\n", str1, str2, n);
    printf("lib = %s\n", (char *)memmove(str1, str2, n));
    printf("own = %s\n", (char *)ft_memmove(c_str1, c_str2, n));
    free(c_str1);
    free(c_str2);
}

void    test_memchr()
{
    int     c;
    char    str[500];
    char    *c_str;
    int     n;

    printf("Enter str (limit 500 char): ");
    scanf("%s", str);
    while ((getchar()) != '\n');
    c_str = strdup(str);
    c = input_int_para();
    n = input_int_byte();
    printf("Function is memchr(\"%s\", %d, %d)\n", str, c, n);
    printf("lib = %s\n", (char *)memchr(str, c, n));
    printf("own = %s\n", (char *)ft_memchr(c_str, c, n));
    free(c_str);
}
void    test_memcmp()
{
    char    str2[500];
    char    str1[500];
    int     n;

    printf("Enter str (limit 500 char): ");
    scanf("%s", str1);
    printf("Enter str (limit 500 char): ");
    scanf(" %s", str2);
    while ((getchar()) != '\n');
    n = input_int_byte();
    printf("Function is memcmp(\"%s\", \"%s\", %d)\n", str1, str2, n);
    printf("lib = %d\n", memcmp(str1, str2, n));
    printf("own = %d\n", ft_memcmp(str1, str2, n));  
}