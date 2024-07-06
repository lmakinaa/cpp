CC=c++
CFLAGS=-Wall -Wextra -Werror -std=c++98
NAME=polymorphism
SRC=Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp main.cpp
INC=Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp
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
