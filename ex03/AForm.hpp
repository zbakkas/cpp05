#ifndef AForm_HPP
#define AForm_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
private:
    const std::string name;
    bool isSigned;
    const int gradeToSign;
    const int gradeToExecute;
public:
    AForm();
    ~AForm();
    AForm(const AForm &AForm);
    AForm &operator =(const AForm &AForm);
    AForm(std::string name, int gradeToSign, int gradeToExecute , bool isSigned);
    std::string getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    void beSigned(Bureaucrat &bur);
    class GradeTooHighException : public std::exception
    {
        public:
            const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            const char *what() const throw();
    };
    virtual void execute(Bureaucrat const & executor) const = 0;



};

std::ostream &operator <<(std::ostream &out, const AForm &AForm);


#endif