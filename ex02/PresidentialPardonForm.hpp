#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private :
        std::string target;
    public :
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &other);
        PresidentialPardonForm & operator=(const PresidentialPardonForm &other);
        void execute(Bureaucrat const & executor) const;
        ~PresidentialPardonForm();

};

#endif