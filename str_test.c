# include "libft.h"
# include <stdio.h>
# include <string.h>

// global
char    *c_str1;
char    *c_str2;
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

    printf("Enter a characther: ");
    scanf("%c", &out);
    while ((getchar()) != '\n');
    return (out);
}

void    test_strlcpy()
{
    FILE    *fptr = fopen("test_str.txt", "a");

    get_str(str1);
    c_str1 = strdup(str1);
    get_str(str2);
    c_str2 = strdup(str2);
    n = get_number();
    fprintf(fptr, "\\************************\\\n");
    fprintf(fptr, "Test strlcpy(\"%s\",\"%s\", %d)\n", str1, str2, n);
    fprintf(fptr, "Library function\n");
    //fprintf(fptr, "lib = %d", strlcpy(str1, str2, n));
    //fprintf(fptr, "str1 = %s\nstr2 = %s\n", str1, str2);
    fprintf(fptr, "Own function\n");
    fprintf(fptr, "own = %ld\n", ft_strlcpy(c_str1, c_str2, n));
    fprintf(fptr, "str1 = %s\nstr2 = %s\n", c_str1, c_str2);
    fprintf(fptr, "\\************************\\\n");
    free(c_str1);
    free(c_str2);
    fclose(fptr);
}
void    test_strlcat()
{
    FILE    *fptr = fopen("test_str.txt", "a");

    get_str(str1);
    c_str1 = strdup(str1);
    get_str(str2);
    c_str2 = strdup(str2);
    n = get_number();
    fprintf(fptr, "\\************************\\\n");
    fprintf(fptr, "Test strlcat(\"%s\",\"%s\", %d)\n", str1, str2, n);
    fprintf(fptr, "Library function\n");
    //fprintf(fptr, "lib = %d\n", strlcat(str1, str2, n));
    //fprintf(fptr, "str1 = %s\nstr2 = %s\n", str1, str2);
    fprintf(fptr, "Own function\n");
    fprintf(fptr, "own = %ld\n", ft_strlcat(c_str1, c_str2, n));
    fprintf(fptr, "str1 = %s\nstr2 = %s\n", c_str1, c_str2);
    fprintf(fptr, "\\************************\\\n");
    free(c_str1);
    free(c_str2);
    fclose(fptr);
}
void    test_strchr()
{
    FILE    *fptr = fopen("test_str.txt", "a");
    char    c;

    get_str(str1);
    c_str1 = strdup(str1);
    c = get_char();
    fprintf(fptr, "\\************************\\\n");
    fprintf(fptr, "Test strchr(\"%s\", %d)\n", str1, c);
    fprintf(fptr, "Library function\n");
    fprintf(fptr, "lib = %s\n", strchr(str1, c));
    fprintf(fptr, "str1 = %s\n", str1);
    fprintf(fptr, "Own function\n");
    fprintf(fptr, "own = %s\n", ft_strchr(c_str1, c));
    fprintf(fptr, "str1 = %s\n", c_str1);
    fprintf(fptr, "\\************************\\\n");
    free(c_str1);
    fclose(fptr);
}
void    test_strrchr()
{
    FILE    *fptr = fopen("test_str.txt", "a");
    char    c;

    get_str(str1);
    c_str1 = strdup(str1);
    c = get_char();
    fprintf(fptr, "\\************************\\\n");
    fprintf(fptr, "Test strrchr(\"%s\", %d)\n", str1, c);
    fprintf(fptr, "Library function\n");
    fprintf(fptr, "lib = %s\n", strrchr(str1, c));
    fprintf(fptr, "str1 = %s\n", str1);
    fprintf(fptr, "Own function\n");
    fprintf(fptr, "own = %s\n", ft_strrchr(c_str1, c));
    fprintf(fptr, "str1 = %s\n", c_str1);
    fprintf(fptr, "\\************************\\\n");
    free(c_str1);
    fclose(fptr);
}

void    test_strncmp()
{
    FILE    *fptr = fopen("test_str.txt", "a");

    get_str(str1);
    c_str1 = strdup(str1);
    get_str(str2);
    c_str2 = strdup(str2);
    n = get_number();
    fprintf(fptr, "\\************************\\\n");
    fprintf(fptr, "Test strncmp(\"%s\",\"%s\", %d)\n", str1, str2, n);
    fprintf(fptr, "Library function\n");
    fprintf(fptr, "lib = %d\n", strncmp(str1, str2, n));
    fprintf(fptr, "str1 = %s\nstr2 = %s\n", str1, str2);
    fprintf(fptr, "Own function\n");
    fprintf(fptr, "own = %d\n", ft_strncmp(c_str1, c_str2, n));
    fprintf(fptr, "str1 = %s\nstr2 = %s\n", c_str1, c_str2);
    fprintf(fptr, "\\************************\\\n");
    free(c_str1);
    free(c_str2);
    fclose(fptr);
}
void    test_strnstr()
{
    FILE    *fptr = fopen("test_str.txt", "a");

    get_str(str1);
    c_str1 = strdup(str1);
    get_str(str2);
    c_str2 = strdup(str2);
    n = get_number();
    fprintf(fptr, "\\************************\\\n");
    fprintf(fptr, "Test strnstr(\"%s\",\"%s\", %d)\n", str1, str2, n);
    //fprintf(fptr, "Library function\n");
    //fprintf(fptr, "lib = %s", strnstr(str1, str2, n));
    //fprintf(fptr, "str1 = %s\nstr2 = %s\n", str1, str2);
    fprintf(fptr, "Own function\n");
    fprintf(fptr, "own = %s\n", ft_strnstr(c_str1, c_str2, n));
    fprintf(fptr, "str1 = %s\nstr2 = %s\n", c_str1, c_str2);
    fprintf(fptr, "\\************************\\\n");
    free(c_str1);
    free(c_str2);
    fclose(fptr);
}
void    test_atoi()
{
    FILE    *fptr = fopen("test_str.txt", "a");

    get_str(str1);
    fprintf(fptr, "\\************************\\\n");
    fprintf(fptr, "Test atoi(\"%s\")\n", str1);
    fprintf(fptr, "Library function\n");
    fprintf(fptr, "lib = %d\n", atoi(str1));
    fprintf(fptr, "Own function\n");
    fprintf(fptr, "own = %d\n", ft_atoi(str1));
    fprintf(fptr, "\\************************\\\n");
    fclose(fptr);
}