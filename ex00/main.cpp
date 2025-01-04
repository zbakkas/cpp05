#include "Bureaucrat.hpp"
int main(void)
{
	std::cout << "-------> Bureaucrat a <-------\n";
	try
	{
		Bureaucrat a("Student a", 148);
		std::cout << a << std::endl;
		std::cout << "Grade -> " << a.getGrade() << std::endl;
		a.decrementGrade();
		a.decrementGrade();
		std::cout << "Grade -> " << a << std::endl;
		a.decrementGrade();
	}
	catch(const std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << "-------> Bureaucrat b <-------\n";
	try
	{
		Bureaucrat b("student b",5);
		std::cout << b << std::endl;
		b.decrementGrade();
		std::cout << "Grade -> " << b.getGrade() << std::endl;
		b.incrementGrade();
		b.incrementGrade();
		b.incrementGrade();
		b.incrementGrade();
		b.incrementGrade();
		b.incrementGrade();
		std::cout << "Grade -> " << b.getGrade() << std::endl;
	}
	catch(const std::exception  &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);


	
}