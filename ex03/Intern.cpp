
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:59:55 by fmarggra          #+#    #+#             */
/*   Updated: 2024/09/09 15:59:56 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {
}

Intern::Intern(const Intern& other) {
    *this = other;
}

Intern& Intern::operator=(const Intern& other) {
    (void)other;
    return *this;
}

Intern::~Intern  () {
}

AForm* createShrubberyForm(const std::string target) {
    return  new ShrubberyCreationForm (target);
}

AForm* createRobotomyForm(const std::string target) {
    return  new RobotomyRequestForm(target);
}

AForm* createPresidentialForm(const std::string target) {
    return new PresidentialPardonForm(target);
}

AForm*    Intern::makeForm(std::string formName, std::string target) {
    AForm*   (*fctnPtr[]) (const std::string) = {
        createShrubberyForm,
        createRobotomyForm,
        createPresidentialForm,
    };
    
    std::string formNames[] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon",
    };

    for (int i = 0; i < 3; i++) {
        if (formNames[i] == formName) {
            AForm* form = (fctnPtr[i]) (target);
            std::cout   << "Intern creates "
                        << formName
                        << std::endl;
            return form;
        }
    }
    std::cout   << "ERROR: Form '"
                << formName
                << "' not found"
                << std::endl;
    return 0;
}