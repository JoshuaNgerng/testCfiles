# include "libft.h"
# include <stdio.h>

// global
char    str1[500];
char    str2[500];
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

void    test_substr()
{
    int     i;
    char    *test;
    FILE    *fptr = fopen("test_ft.txt", "a"); 

    get_str(str1);
    printf("For starting index, ");
    n = get_number();
    printf("For no of char to search, ");
    i = get_number();
    printf("Test ft_substr(\"%s\", %d, %d)\n", str1, n, i);
    fprintf(fptr, "\\************************\\\n");
    fprintf(fptr, "Test ft_substr(\"%s\", %d, %d)\n", str1, n, i);
    test = ft_substr(str1, n, i);
    fprintf(fptr, "output = %s\n", test);
    fprintf(fptr, "str    = %s\n", str1);
    fprintf(fptr, "\\************************\\\n");
    free(test);
    fclose(fptr);
}
void    test_strjoin()
{   
    char    *test;
    FILE    *fptr = fopen("test_ft.txt", "a");

    get_str(str1);
    get_str(str2);
    printf("Test ft_strjoin(\"%s\", \"%s\")\n", str1, str2);
    fprintf(fptr, "\\************************\\\n");
    fprintf(fptr, "Test ft_strjoin(\"%s\", \"%s\")\n", str1, str2);
    test = ft_strjoin(str1, str2);
    fprintf(fptr, "output = %s\n", test);
    fprintf(fptr, "str1   = %s\nstr2   = %s\n", str1, str2);
    fprintf(fptr, "\\************************\\\n");
    free(test);
    fclose(fptr);
}

void    test_strtrim()
{
    char    *test;
    FILE    *fptr = fopen("test_ft.txt", "a");

    get_str(str1);
    get_str(str2);
    printf("Test ft_strtrim(\"%s\", \"%s\")\n", str1, str2);
    fprintf(fptr, "\\************************\\\n");
    fprintf(fptr, "Test ft_strtrim(\"%s\", \"%s\")\n", str1, str2);
    test = ft_strtrim(str1, str2);
    fprintf(fptr, "output = %s\n", test);
    fprintf(fptr, "str1   = %s\nstr2   = %s\n", str1, str2);
    fprintf(fptr, "\\************************\\\n");
    free(test);
    fclose(fptr);
}

void    test_split()
{
    int     i;
    char    in;
    char    **out;
    FILE    *fptr = fopen("test_ft.txt", "a");

    get_str(str1);
    printf("Enter char for separator, ");
    in = get_char();
    printf("Test ft_split(\"%s\", \"%c\")\n", str1, in);
    fprintf(fptr, "\\************************\\\n");
    fprintf(fptr, "Test ft_split(\"%s\", \"%c\")\n", str1, in);
    out = ft_split(str1, in);
    i = 0;
    while (out[i])
    {
        fprintf(fptr, "str[%d]: %s\n", i, out[i]);
        i ++;
    }
    while (i >= 0)
    {
        free(out[i]);
        i --;
    }
    free(out);
    fprintf(fptr, "\\************************\\\n");
    fclose(fptr);
}

void    test_itoa()
{
    char    *out;
    FILE    *fptr = fopen("test_ft.txt", "a");

    n = get_number();
    out = ft_itoa(n);
    printf("Test ft_itoa(%d)\n", n);
    fprintf(fptr, "\\************************\\\n");
    fprintf(fptr, "Test ft_itoa(%d)\n", n);
    fprintf(fptr, "str is %s\n", out);
    fprintf(fptr, "\\************************\\\n");
    free(out);
    fclose(fptr);
}