#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void)
{
	//PresidentialPardonForm
	//ShrubberyCreationForm
	//RobotomyRequestForm
	try
	{
		Bureaucrat b1("zouhir", 12);
		Intern intern;
		AForm* rrf;
		rrf = intern.makeForm("PresidentialPardonForm", "target_one");
		// rrf =  intern.makeForm("ShrubberyCreationForm", "target_two");
		//rrf = intern.makeForm("RobotomyRequestForm", "target_three");
		//rrf = intern.makeForm("non", "target_four");
		std::cout << *rrf ;
		rrf->beSigned(b1);
		b1.signAForm(*rrf);
		b1.executeForm(*rrf);

	}
	// catch(const std::exception &e)
	catch(const std::string &e)
	{
		std::cout << "Error: " << e << std::endl;
	}
	return (0);
}