NAME = megaphone

CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

CC = c++

SRCS := megaphone.cpp

OBJS := $(SRCS:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
%.o: %.cpp
			$(CC) $(CFLAGS) -c $< -o $@
clean:
		@rm -rf $(OBJS)

fclean:
		rm -rf $(OBJS)
		rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re