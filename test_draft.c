# include "libft.h"
# include <stdio.h>

void	print_mainmenu()
{
	printf("1) designate strings\n");
	printf("2) designate int arrays\n");
	printf("3) choose which test to do\n");
	printf("4) exit program\n");
}

char	*input(char *str)
{
	char *out;

	printf("Please enter %s of your choice\n");
	scanf("%s", out);
	return (out);
}

char	*set_str()
{
	char	*out;

	printf("Enter string:\n");
	scanf("%s", out);
	return (out);
}

int	set_num()
{
	int	out;
	
	printf("Enter number:\n");
	scanf("%d", out);
	return (out);
}

int	main()
{
	char	*str1;
	char	*str2;
	int		n;
	int		i;
	int		*ptr1;
	int		*ptr2;
	char	*option;
	
	print_mainmenu();
	option = input("option");
	while (option != "4")
	{
		if (option == "1")
		{
			str1 = set_str();
			str2 = set_str();
		}
		else if (option == "2")
		{
			n = set_num();
			i = -1;
			while (++ i < n)
				ptr1[i] = set_num();
			i = -1;
			while (++ i < n)
				ptr2[i] = set_num();
		}
		else if (option == "3")
			do_test_mem(str1, str2, ptr1, ptr2);
		else
			printf("Invalid option\n");
	}
	return (0);
}
