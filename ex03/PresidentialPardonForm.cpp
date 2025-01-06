#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
    : AForm("PresidentialPardonForm", 25, 5, false), target("target")
{
   
}
PresidentialPardonForm::PresidentialPardonForm(const std::string target)
    : AForm("PresidentialPardonForm", 25, 5, false), target(target)
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