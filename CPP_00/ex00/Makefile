NAME = megaphone

CPP = c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRC = megaphone.cpp
OBJS = $(SRC:.cpp=.o)

.PHONY:	all clean fclean re

%.o :	%.cpp
		$(CPP) $(CPP_FLAG) -c $< -o $@

$(NAME):	$(OBJS)
		$(CPP) $(CPP_FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean: 
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re:	fclean all
