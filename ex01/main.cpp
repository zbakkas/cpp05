#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try
	{
		Bureaucrat a("Student", 148);
		std::cout << a << std::endl;
		std::cout << "Grade -> " << a.getGrade() << std::endl;
		a.decrementGrade();
		a.decrementGrade();
		std::cout << "Grade -> " << a.getGrade() << std::endl;
		a.decrementGrade();
	}
	catch(const std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b;
		std::cout << b << std::endl;
		b.decrementGrade();
		b.decrementGrade();
		b.decrementGrade();
		std::cout << "Grade -> " << b.getGrade() << std::endl;
		b.incrementGrade();
		b.incrementGrade();
		b.incrementGrade();
		std::cout << "Grade -> " << b.getGrade() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	Bureaucrat x("Copy", 115);
	Bureaucrat y = x;
	std::cout << y << std::endl;
	Form form("Form", 100, 100, false);
	std::cout << form << std::endl;
	form.beSigned();
	std::cout << form << std::endl;
	return (0);
}