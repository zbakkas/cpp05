#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
    const std::string name;
    const int gradeToSign;
    const int gradeToExecute;
    bool isSigned;
public:
    Form();
    ~Form();
    Form(const Form &Form);
    Form &operator =(const Form &Form);
    Form(std::string name, int gradeToSign, int gradeToExecute , bool isSigned);
    std::string getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    void beSigned(Bureaucrat &bur);
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




};

std::ostream &operator <<(std::ostream &out, const Form &Form);


#endif