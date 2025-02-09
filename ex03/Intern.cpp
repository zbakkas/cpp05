#include "Intern.hpp"

Intern::Intern() {}
Intern::~Intern() {}

Intern::Intern(const Intern &copy)
{
	*this = copy;
}

Intern & Intern::operator = (const Intern &object)
{
	(void)object;
	return (*this);
}

AForm *Intern::makeForm(std::string name, const std::string target)
{
	std::string names[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	AForm *objects[] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
	int i=0;
	while (i < 3)
	{
		if (name == names[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			return (objects[i]);
		}
		++i;
	}
	std::cout << "** Intern failed to created object" << name << " **\n";
	return (NULL);
}