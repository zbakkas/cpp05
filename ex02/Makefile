GPP = c++
CFLAGS = -Wall -Wextra -Werror
VFLAG = -std=c++98
NAME = Bureaucrat
CPPF = main.cpp Bureaucrat.cpp Form.cpp

SRCS = $(CPPF:.cpp=.o)

all: $(NAME)

$(NAME): $(SRCS)
	$(GPP) $(VFLAG) $(CFLAGS) $^ -o $@

%.o : %.cpp Bureaucrat.hpp Form.hpp
	$(GPP) $(CFLAGS) $(VFLAG) -c $^

clean: 
	rm -rf $(SRCS)

fclean: clean
	rm -rf $(NAME) $(SRCS)


re: fclean all