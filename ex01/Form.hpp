#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Form
{
private:
    const std::string name;
    bool isSigned;
    const int gradeToSign;
    const int gradeToExecute;
public:
    Form();
    ~Form();
    Form(const Form &form);
    Form &operator =(const Form &form);
    Form(std::string name, int gradeToSign, int gradeToExecute , bool isSigned);
    std::string getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    void beSigned();
    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };




};

std::ostream &operator <<(std::ostream &out, const Form &form);


#endif