CC=c++
CFLAGS=-Wall -Wextra -Werror -std=c++98
NAME=btc
SRC=BitcoinExchange.cpp main.cpp
INC=BitcoinExchange.hpp 
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
