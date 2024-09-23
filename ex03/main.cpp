/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:00:03 by fmarggra          #+#    #+#             */
/*   Updated: 2024/09/09 16:00:05 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
    try {
        Intern someRandomIntern;
        AForm* rrf;
        std::cout << std::endl;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        std::cout << std::endl;
        AForm* gibberish;
        gibberish = someRandomIntern.makeForm("gibberish", "Yelly");
        std::cout << std::endl;
        if (gibberish)
            delete gibberish;
        if (rrf)
            delete rrf;
        std::cout << std::endl;
    }
    
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}
