NAME = scavtrap

SRCS = $(wildcard src/*.cpp)
INC = $(wildcard includes/*.hpp)

all: $(NAME)

$(NAME): $(SRCS) $(INC)
	c++ -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address -Iincludes $(SRCS) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all