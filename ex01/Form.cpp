
#include "Form.hpp"

Form::Form() : name("Default"), gradeToSign(150), gradeToExecute(150), isSigned(false)
{
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute, bool isSigned) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute), isSigned(isSigned)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form &Form) : name(Form.name), gradeToSign(Form.gradeToSign), gradeToExecute(Form.gradeToExecute), isSigned(Form.isSigned)
{
}
Form &Form::operator =(const Form &Form)
{
    if (this == &Form)
        return (*this);
    this->isSigned = Form.isSigned;
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
void Form::beSigned(Bureaucrat &bur)
{
    if(bur.getGrade() <= gradeToSign)
        this->isSigned = true;
    else
        throw Form::GradeTooLowException();
}
const char *Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}
const char *Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}
std::ostream &operator <<(std::ostream &out, const Form &Form)
{
    out << Form.getName() << ", Form grade to sign " << Form.getGradeToSign() << ", Form grade to execute " << Form.getGradeToExecute() << ", Form is signed " << Form.getIsSigned();
    return (out);
}

