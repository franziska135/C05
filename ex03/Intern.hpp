#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

class Intern {
    public:
        Intern          (const std::string name, int grade);
        ~Intern         ();
        Intern          (void);
        Intern          (const Intern& other);
        Intern&         operator=(const Intern &other);

        AForm*           makeForm(std::string nameForm, std::string target);
};

#endif