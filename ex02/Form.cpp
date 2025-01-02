
#include "Form.hpp"

Form::Form() : name("Default"), isSigned(false), gradeToSign(150), gradeToExecute(150)
{
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute, bool isSigned) : name(name), isSigned(isSigned), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form &form) : name(form.name), isSigned(form.isSigned), gradeToSign(form.gradeToSign), gradeToExecute(form.gradeToExecute)
{
}
Form &Form::operator =(const Form &form)
{
    if (this == &form)
        return (*this);
    this->isSigned = form.isSigned;
    return (*this);
}
Form::~Form()
{
}
std::string Form::getName() const
{
    return (this->name);
}
bool Form::getIsSigned() const
{
    return (this->isSigned);
}
int Form::getGradeToSign() const
{
    return (this->gradeToSign);
}
int Form::getGradeToExecute() const
{
    return (this->gradeToExecute);
}
void Form::beSigned()
{
    this->isSigned = true;
}
const char *Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}
const char *Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}
std::ostream &operator <<(std::ostream &out, const Form &form)
{
    out << form.getName() << ", form grade to sign " << form.getGradeToSign() << ", form grade to execute " << form.getGradeToExecute() << ", form is signed " << form.getIsSigned();
    return (out);
}

