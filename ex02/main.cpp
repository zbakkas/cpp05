#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try
	{
		Form *aform;
		Bureaucrat bureaucrat("Bureaucrat", 2);
		ShrubberyCreationForm shrubberycreationform;
		RobotomyRequestForm robotomyrequestform;
		PresidentialPardonForm presidentialpardonform;
		
		aform = &shrubberycreationform;
		aform->beSigned(bureaucrat);
		aform->execute(bureaucrat);

		aform = &robotomyrequestform;
		aform->beSigned(bureaucrat);
		aform->execute(bureaucrat);

		aform = &presidentialpardonform;
		aform->beSigned(bureaucrat);
		aform->execute(bureaucrat);
		bureaucrat.executeForm(shrubberycreationform);
		bureaucrat.executeForm(robotomyrequestform);
		bureaucrat.executeForm(presidentialpardonform);

		std::cout << shrubberycreationform << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}