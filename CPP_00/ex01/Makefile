NAME = phonebook

SRC = main.cpp Contact.cpp PhoneBook.cpp

OBJ = $(SRC:.cpp=.o)

INCLUDE = PhoneBook.hpp Contact.hpp

FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAG) $(SRC) -o $(NAME)

.cpp.o:
	c++ $(FLAG) -c $< -o $@

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all
.PHONY: all re fclean clean