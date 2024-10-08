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
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
    try {

        
        std::cout << std::endl;
                std::cout   << "----------------------------------------------------------------------------------------------\n"
                << "TEST 1:\ttesting the Presidential Pardon form\n"
                << "\tit should inform that <target> has been pardoned by X"
                << "\n----------------------------------------------------------------------------------------------"
                << std::endl;
        
        std::cout << "-----\n|";
        std::cout << " 1 | Instantiating a Bureaucrat:*" << std::endl;
        std::cout << "-----" << std::endl;
        
        Bureaucrat jules("Jules", 75);
        std::cout << jules << std::endl;
        
        std::cout << "\n-----\n|";
        std::cout << " 2 | Instantiating a PresidentialPardonForm Class" << std::endl;
        std::cout << "-----" << std::endl;
        PresidentialPardonForm  lala("PPF");
        std::cout << std::endl;
        std::cout << lala << std::endl;
        
        std::cout << "-----\n|";
        std::cout << " 3 | Testing if jules can execute the Form*" << std::endl;
        std::cout << "-----" << std::endl;
        jules.execute(lala);
        std::cout << "Jules will now attempt to sign the form: ";
        jules.signForm(lala);
        std::cout << std::endl;
        std::cout << lala << std::endl;

        std::cout << "-----\n|";
        std::cout << " 4 | Instantiating a Bucraucrat with the matching grade" << std::endl;
        std::cout << "-----" << std::endl;
        Bureaucrat werner("Werner", 3);
        std::cout << werner << std::endl;
        werner.execute(lala);
        werner.signForm(lala);
        std::cout << std::endl;
        std::cout << lala << std::endl;
        werner.execute(lala);
        std::cout << std::endl;

        
        // std::cout << std::endl;
        // std::cout << "------------------------------------------" << std::endl;
        // std::cout << "--------SHRUBBERY TEST----------" << std::endl;
        // std::cout << "------------------------------------------" << std::endl;
        // std::cout << std::endl;
        // ShrubberyCreationForm hehe("SCF");
        // std::cout << std::endl;
        // std::cout << hehe << std::endl;
        // werner.execute(hehe);
        // std::cout << std::endl;
        // werner.signForm(hehe);
        // std::cout << std::endl;
        // std::cout << hehe << std::endl;
        // werner.execute(hehe);
        // std::cout << std::endl;

        // std::cout << "------------------------------------------" << std::endl;
        // std::cout << "--------ROBOTOMYREQUESTFORM TEST----------" << std::endl;
        // std::cout << "------------------------------------------" << std::endl;
        
        // std::cout << std::endl;
        // std::cout << std::endl;
        // RobotomyRequestForm hui("RRF");
        // std::cout << std::endl;
        // std::cout << hui << std::endl;
        // werner.execute(hui);
        // std::cout << std::endl;
        // werner.signForm(hui);
        // std::cout << std::endl;
        // std::cout << hui << std::endl;
        // werner.execute(hui);
        // std::cout << std::endl;
        // werner.execute(hui);
        // std::cout << std::endl;
        // werner.execute(hui);        
        // std::cout << std::endl;
        // werner.execute(hui);
        // std::cout << std::endl;
        // werner.execute(hui);
        // std::cout << std::endl;
        // werner.execute(hui);
        // std::cout << std::endl;
        // werner.execute(hui);
        // std::cout << std::endl;
        // werner.execute(hui);
        // std::cout << std::endl;
        // werner.execute(hui);
        // std::cout << std::endl;
        // werner.execute(hui);
        // std::cout << std::endl;
        // werner.execute(hui);
        // std::cout << std::endl;
        // werner.execute(hui);
        // std::cout << std::endl;
        // werner.execute(hui);        
        // std::cout << std::endl;
        // werner.execute(hui);
        // std::cout << std::endl;
        // werner.execute(hui);
        // std::cout << std::endl;
        // werner.execute(hui);
        // std::cout << std::endl;
        // werner.execute(hui);
        // std::cout << std::endl;
        // werner.execute(hui);
        // std::cout << std::endl;
        // werner.execute(hui);
        // std::cout << std::endl;
        // werner.execute(hui);

        // std::cout << std::endl;
    }
    
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}
