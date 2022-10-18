NAME1 = mem.out
SRC1 = mem_main.c mem_test.c
NAME2 = str.out
SRC2 = str_mem.c str_test.c
NAME3 = ft_str.out
SRC3 = ft_main.c ft_test.c
NAME4 = fd.out
SRC4 = fd_main.c
NAME5 = link.out
CC = gcc
CFLAGS = -Wall -Wextra -Werror
PATH = L.
LIB = lft

mem: $(SRC1) 
	$(CC) $(CFLAGS) $(SRC1) -$(PATH) -$(LIB) -o $(NAME1)

str:
	$(CC) $(CFLAGS) $(SRC2) -$(PATH) -$(LIB) -o $(NAME2)

ft:
	$(CC) $(CFLAGS) $(SRC3) -$(PATH) -$(LIB) -o $(NAME3)

fd:
	$(CC) $(CFLAGS) $(SRC4) -$(PATH) -$(LIB) -o $(NAME4)

all:

clean:
	rm -f $(NAME1) $(NAME2) $(NAME3) $(NAME4) $(NAME5)