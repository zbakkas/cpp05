#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

#include "AForm.hpp"
class AForm;
class Bureaucrat
{
    private:
        const std::string name;
        int grade;

    public:
    
        class GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                 const char *what() const throw();
        };
        Bureaucrat();
        Bureaucrat(const Bureaucrat& bureaucrat);
        Bureaucrat &operator =(const Bureaucrat &bureaucrat);
        ~Bureaucrat();

        Bureaucrat(std::string name, int grade);
        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        void signAForm(AForm &AForm);    
        void executeForm(AForm const & form);
        
        
};

std::ostream &operator <<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif