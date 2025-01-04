CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = AForm
SRCS = main.cpp Bureaucrat.cpp AForm.cpp presidentialPardonForm.cpp robotomyRequestForm.cpp shrubberyCreationForm.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp Bureaucrat.hpp AForm.hpp presidentialPardonForm.hpp robotomyRequestForm.hpp shrubberyCreationForm.hpp
	$(CPP) $(CFLAGS)  -c $< -o $@ 

clean: 
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME) $(OBJS)

re: fclean all