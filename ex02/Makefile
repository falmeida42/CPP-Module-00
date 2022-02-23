FLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = account

SRC = Account.cpp test.cpp

OBJS = $(SRC:.cpp=.o)

.o:.cpp
	g++ $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME) : $(OBJS)
	g++ $(FLAGS) $(OBJS) -o $(NAME)

clean:
	/bin/rm -rf $(OBJS)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all