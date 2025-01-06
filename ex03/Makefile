CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Intern
SRCS = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp Bureaucrat.hpp AForm.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp Intern.hpp
	$(CPP) $(CFLAGS)  -c $< -o $@ 

clean: 
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME) $(OBJS)

re: fclean all