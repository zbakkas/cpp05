#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(const std::string target)
    : AForm("PresidentialPardonForm", false, 25, 5), target(target)
{
   
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
    : AForm(other), target(other.target)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    (void)other;
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > this->getGradeToExecute())
        throw (AForm::GradeTooLowException());
    else if (!this->getIsSigned())
		throw (this->getName() + " Is Not Signed");
    std::cout << target << " has been pardoned by Zafod Beeblebrox\n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}