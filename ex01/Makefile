NAME =	phonebook

SRC =	phonebook.cpp contact.cpp main.cpp

CC =	g++ -std=c++98 -Wall -Wextra -Werror

$(NAME) : $(SRC)
	$(CC) $(SRC) -o $(NAME)

all: $(NAME)

clean: 
	/bin/rm -rf

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all