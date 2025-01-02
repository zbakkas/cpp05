
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(150)
{
}
Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade = grade;
}
Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : name(bureaucrat.name), grade(bureaucrat.grade)
{
}
Bureaucrat &Bureaucrat::operator =(const Bureaucrat &bureaucrat)
{
    if (this == &bureaucrat)
        return (*this);
    this->grade = bureaucrat.grade;
    return (*this);
}
Bureaucrat::~Bureaucrat()
{
}
std::string Bureaucrat::getName() const
{
    return (this->name);
}
int Bureaucrat::getGrade() const
{
    return (this->grade);
}
void Bureaucrat::incrementGrade()
{
    if (this->grade == 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade--;
}
void Bureaucrat::decrementGrade()
{
    if (this->grade == 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade++;
}
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}
std::ostream &operator <<(std::ostream &out, const Bureaucrat &bureaucrat)
{
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return (out);
}

