# include "libft.h"
# include <stdio.h>

// test ft_striteri and ft_strmapi

char    test_fun(unsigned int x, char in)
{
    char    out;

    out = in + x;
    return (out);
}

void    upper_lower(unsigned int x, char *in)
{
    while (*in)
    {
        if (x % 2 == 0)
        {
            if (*in >= 65 && *in <= 90)
                *in += 32;
        }
        else
        {
            if (*in >= 97 && *in <= 122)
                *in -= 32;
        }
        in ++;
    }
}

int main()
{
    char    str[500];
    char    *test;
    
    printf("Enter str (max 500 char): ");
    scanf("%s", str);
    while ((getchar()) != '\n');
    printf("Test ft_strmapi(\"%s\", test_fun)\n", str);
    test = ft_strmapi(str, test_fun);
    printf("output = %s\nstr    = %s\n", test, str);
    printf("Test ft_striteri(\"%s\", test_shift)\n", str);
    ft_striteri(str, upper_lower);
    printf("str    = %s\n", str);
    free(test);
}