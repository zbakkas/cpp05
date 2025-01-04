#include "Bureaucrat.hpp"

int main(void)
{
	try
   {
		AForm AForm("-_-", 45, 10, false);
		Bureaucrat b1("zouhir", 41);
		AForm.beSigned(b1);
		b1.signAForm(AForm);
		std::cout << b1 << std::endl;
		std::cout << AForm << std::endl;
   }
   catch(const std::exception& e)
   {
	   std::cerr << "execption is : " << e.what() << std::endl;
   }
   return 0;
}