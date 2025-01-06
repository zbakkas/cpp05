#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("Shrubbery", 145, 137, false), target("target")
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
	: AForm("Shrubbery", 145, 137, false), target(target)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
	: AForm(other), target(other.target)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	(void)other;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const 
{
	std::string fileName = target + "_shrubbery";
	if (executor.getGrade() > getGradeToExecute())
		throw (AForm::GradeTooLowException());
	else if (!this->getIsSigned())
		throw (this->getName() + " Is Not Signed");
	std::fstream  outFile;
	outFile.open(fileName,std::fstream::out);
	if (!outFile.is_open())
		throw ("File is not open");
	
	outFile << "            e88o\n";
	outFile << "          ccee88oo\n";
    outFile << "  C8O8O8Q8PoOb o8oo\n";
    outFile << " dOB69QO8PdUOpugoO9bD\n";
    outFile << "CgggbU8OU qOp qOdoUOdcb\n";
    outFile << "    6OuU  /p u gcoUodpP\n";
    outFile << "      \\\\//  /douUP\n";
    outFile << "        \\\\////\n";
    outFile << "         |||/\\\n";
    outFile << "         |||\\/\n";
    outFile << "         |||||\n";
    outFile << "   .....//||||\\....\n";
	outFile.close();
	// std::cout << "Created " << fileName << " Successfully\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
