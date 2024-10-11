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
        std::cout   << "\n\n--------------------------------------------------------------------------\n"
                    << "TEST 1:\tTesting the intern's capabilitiy to create a from\n"
                    << "\tIf successful, message should inform about the creation\n\tif not, error message should be printed"
                    << "\n--------------------------------------------------------------------------"
                    << std::endl;
        std::cout << "-----\n|";
        std::cout << " 1 | Instantiating an Intern class and a form" << std::endl;
        std::cout << "-----" << std::endl;
        Intern someRandomIntern;
        AForm* rrf;
        std::cout << std::endl;
        std::cout << "-----\n|";
        std::cout << " 2 | Prompting the Intern to make a form" << std::endl;
        std::cout << "-----" << std::endl;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        std::cout << std::endl;

        std::cout << "-----\n|";
        std::cout << " 3 | Prompting the Intern to make a form that doesnt exist" << std::endl;
        std::cout << "-----" << std::endl;
        AForm* gibberish;
        gibberish = someRandomIntern.makeForm("gibberish", "Yelly");
        std::cout << std::endl;
        std::cout   << "------------------------------------------------\n"
                << "Tests finished, destruction will take place now"
                << "\n------------------------------------------------"
                << std::endl;
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
