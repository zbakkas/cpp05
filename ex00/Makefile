CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Bureaucrat
SRCS = main.cpp Bureaucrat.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp Bureaucrat.hpp
	$(CPP) $(CFLAGS)  -c $< -o $@ 

clean: 
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME) $(OBJS)

re: fclean all