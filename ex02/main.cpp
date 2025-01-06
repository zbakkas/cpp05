#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
   try
   {
		Bureaucrat b1("zouhir", 12);

		RobotomyRequestForm	robot("robot");
		std::cout << robot;
		robot.beSigned(b1);
		std::cout << robot;
		b1.executeForm(robot);

		std::cout << "-------------------------------\n";

		ShrubberyCreationForm shrubbery("chajra");
		std::cout << shrubbery;
		shrubbery.beSigned(b1);
		std::cout << shrubbery;
		b1.executeForm(shrubbery);
		std::cout << "-------------------------------\n";
		PresidentialPardonForm president("president");
		std::cout << president;
		president.beSigned(b1);
		std::cout << president;
		b1.executeForm(president);
   }
//    catch(const std::exception& e)
//    {
// 	   std::cout << "execption is : " << e.what() << std::endl;
//    }
//    catch(const char *e)
//    {
// 	   std::cout << "execption is : " << e << std::endl;
//    }
   catch(const std::string &e)
   {
	   std::cout << "execption is : " << e << std::endl;
   }
}