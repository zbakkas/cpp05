#include "Bureaucrat.hpp"

int main(void)
{
	try
   {
		Form form("-_-", 45, 10, false);
		Bureaucrat b1("zouhir", 41);
		form.beSigned(b1);
		b1.signForm(form);
		std::cout << b1 << std::endl;
		std::cout << form << std::endl;
   }
   catch(const std::exception& e)
   {
	   std::cerr << "execption is : " << e.what() << std::endl;
   }
   return 0;
}