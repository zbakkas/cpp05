#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
    : AForm("RobotomyRequestForm",  72, 45,false), target("target")
{

}
RobotomyRequestForm::RobotomyRequestForm(const std::string target)
    : AForm("RobotomyRequestForm",  72, 45,false), target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
    : AForm(other), target(other.target)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    (void)other;
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > this->getGradeToExecute())
        throw (AForm::GradeTooLowException());
    else if (!this->getIsSigned())
		throw (this->getName() + " Is Not Signed");
    std::cout << "Drilling noise\n";
    std::srand(std::time(NULL));
    // std::cout << std::rand()<< std::endl;
    // std::cout << std::rand()<< std::endl;
    int random_number = rand() % 2;
    if (random_number)
        std::cout << target << " has been robotomized successfully\n";
    else
        std::cout << target << " has been failed to robotomized\n";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}