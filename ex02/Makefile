OBJ = \
		Animal.o \
		Cat.o \
		Dog.o \
		Brain.o \
		main.o \


all: animals

animals: $(OBJ)
	c++ $^ -o $@

%.o: %.cpp
	c++ -std=c++98 -Wall -Werror -Wextra -c $^ -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f animals

re: fclean all

.PHONY: clean fclean re
