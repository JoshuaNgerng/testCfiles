// # include "libft.h"
# include <stdio.h>
# include <string.h>

void	print_array(int *ptr, int n)
{
	int	i;

	i = -1;
	printf("{ ");
	while (++i < n)
		printf("%d, ", ptr[i]);
	printf("}\n");
}

void	print_start(char *str1, char *str2, int *ptr1, int *ptr2, int n)
{
	if (str1 == NULL && str2 == NULL)
		printf("Have not initialize string\n");
	else
	{
		printf("string1 and string2 are\n");
		printf("%s\n", str1);
		printf("%s\n", str2);
	}
	if (ptr1 == NULL && ptr2 == NULL)
		printf("Have not initialize string\n");
	else
	{
		printf("array1 and array2 are\n");
		print_array(ptr1, n);
		print_array(ptr2, n);
	}
}

void	do_test_mem(char *str1, char *str2, int *ptr1, int *ptr2, int n)
{
	print_start(str1, str2, ptr1, ptr2);
}

void	print_mainmenu()
{
	printf("1) designate strings\n");
	printf("2) designate int arrays\n");
	printf("3) choose which test to do\n");
	printf("4) exit program\n");
}

char	input(char *str)
{
	char out;

	printf("Please enter %s of your choice\n", str);
	scanf("%c", &out);
	return (out);
}

void	set_str(char *str)
{
	printf("Enter string:\n");
	scanf("%s", str);
}

int	set_num()
{
	int	out;
	
	printf("Enter number:\n");
	scanf("%d", &out);
	return (out);
}

int	main()
{
	int		s1 = 2;
	char	str1[100];
	char	str2[100];
	int		n;
	int		i;
	int		ptr1[n];
	int		ptr2[n];
	char	option;
	
	print_mainmenu();
	option = input("option");
	while (option != '4')
	{
		if (option == '1')
		{
			set_str(&str1[0]);
			set_str(&str2[0]);
		}
		else if (option == '2')
		{
			printf("Enter int array size \n");
			n = set_num();
			printf("Enter number for 1st array\n");
			i = -1;
			while (++ i < n)
				ptr1[i] = set_num();
			printf("Enter number for 2nd array\n");
			i = -1;
			while (++ i < n)
				ptr2[i] = set_num();
		}
		else if (option == '3')
			do_test_mem(&str1[0], &str2[0], ptr1, ptr2, n);
		else
			printf("Invalid option\n");
		print_mainmenu();
		option = input("option");
	}
	printf("program end, have a nice day\n");
	return (0);
}
