CC=c++
CFLAGS=-Wall -Wextra -Werror -std=c++98
NAME=convert
SRC=ScalarConverter.cpp main.cpp
INC=ScalarConverter.hpp 
OBJ=$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean
