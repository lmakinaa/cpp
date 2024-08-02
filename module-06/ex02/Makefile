CC=c++
CFLAGS=-Wall -Wextra -Werror -std=c++98 #-g -fsanitize=address
NAME=test
SRC=utils.cpp Base.cpp main.cpp
INC=Base.hpp A.hpp B.hpp C.hpp utils.hpp
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
