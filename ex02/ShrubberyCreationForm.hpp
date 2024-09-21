#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>

class Bureaucrat;

class ShrubberyCreationForm : public AForm {
    private:
        std::string _target;
    public:
        ShrubberyCreationForm                (void);
        ShrubberyCreationForm                (const ShrubberyCreationForm& other);
        ShrubberyCreationForm&               operator=(const ShrubberyCreationForm& other);
        ShrubberyCreationForm                (const std::string target);
        ~ShrubberyCreationForm               (void);
        void        execute(Bureaucrat const &executor) const;
};

#endif