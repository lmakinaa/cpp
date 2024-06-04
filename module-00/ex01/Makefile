CC=c++
CFLAGS=-Wall -Wextra -Werror -std=c++98
NAME=samir-layl
SRC=main.cpp PhoneBook.cpp Contact.cpp
INC=PhoneBook.hpp Contact.hpp
OBJ=$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean
