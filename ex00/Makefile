CFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = megaphone

SRC = megaphone.cpp

OBJS = $(SRC:.c=.o)

$(NAME) : $(OBJS)
	g++ $(OBJS) $(FLAGS) -o $(NAME) 

all: $(NAME)

clean:
	/bin/rm -rf $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all