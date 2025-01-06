
#include "AForm.hpp"

AForm::AForm() : name("Default"), gradeToSign(150), gradeToExecute(150), isSigned(false)
{
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute, bool isSigned) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute), isSigned(isSigned)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &AForm) : name(AForm.name), gradeToSign(AForm.gradeToSign), gradeToExecute(AForm.gradeToExecute), isSigned(AForm.isSigned)
{
}
AForm &AForm::operator =(const AForm &AForm)
{
    if (this == &AForm)
        return (*this);
    this->isSigned = AForm.isSigned;
    return (*this);
}
AForm::~AForm()
{
}
std::string AForm::getName() const
{
    return (this->name);
}
bool AForm::getIsSigned() const
{
    return (this->isSigned);
}
int AForm::getGradeToSign() const
{
    return (this->gradeToSign);
}
int AForm::getGradeToExecute() const
{
    return (this->gradeToExecute);
}
void AForm::beSigned(Bureaucrat &bur)
{
    if(bur.getGrade() <= gradeToSign)
        this->isSigned = true;
    else
        throw AForm::GradeTooLowException();
}
const char *AForm::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}
const char *AForm::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}
std::ostream &operator <<(std::ostream &out, const AForm &AForm)
{
    out << AForm.getName() << ", AForm grade to sign " << AForm.getGradeToSign() << ", AForm grade to execute " << AForm.getGradeToExecute() << ", AForm is signed " << AForm.getIsSigned() << std::endl;
    return (out);
}

