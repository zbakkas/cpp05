#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

#include "Form.hpp"
class Form;
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
        void signForm(Form &Form);    

        
        
};

std::ostream &operator <<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif