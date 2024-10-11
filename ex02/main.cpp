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
                std::cout   << "--------------------------------------------------------------\n"
                << "TEST 1:\tTesting the Presidential Pardon form\n"
                << "\tit should inform that <target> has been pardoned by X"
                << "\n---------------------------------------------------------------"
                << std::endl;
        
        std::cout << "-----\n|";
        std::cout << " 1 | Instantiating a Bureaucrat" << std::endl;
        std::cout << "-----" << std::endl;
        
        Bureaucrat jules("Jules", 75);
        std::cout << jules << std::endl;
        
        std::cout << "\n-----\n|";
        std::cout << " 2 | Instantiating a PresidentialPardonForm Class" << std::endl;
        std::cout << "-----" << std::endl;
        PresidentialPardonForm  lala("John");
        std::cout << std::endl;
        std::cout << lala << std::endl;
        
        std::cout << "-----\n|";
        std::cout << " 3 | Testing if Jules can execute the form" << std::endl;
        std::cout << "-----" << std::endl;
        jules.execute(lala);
        std::cout << "\nJules will now attempt to sign the form:" << std::endl;
        jules.signForm(lala);
        std::cout << std::endl;
        std::cout << lala << std::endl;

        std::cout << "-----\n|";
        std::cout << " 4 | Instantiating a second Bucraucrat with the matching grade" << std::endl;
        std::cout << "-----" << std::endl;
        Bureaucrat werner("Werner", 3);
        std::cout << werner << std::endl;
        werner.execute(lala);
        werner.signForm(lala);
        std::cout << std::endl;
        std::cout << lala << std::endl;
        werner.execute(lala);

        std::cout   << "\n\n--------------------------------------------------------------------------\n"
                    << "TEST 2:\tTesting the Shrubbery Creation Form\n"
                    << "\tform creates a file <x>_shrubbery and writes an ASCII tree inside"
                    << "\n--------------------------------------------------------------------------"
                    << std::endl;
        
        std::cout << "-----\n|";
        std::cout << " 1 | Instantiating a Shrubbery Creation Form" << std::endl;
        std::cout << "-----" << std::endl;
        
        ShrubberyCreationForm hehe("John");
        std::cout << std::endl;
        std::cout << hehe << std::endl;

        std::cout << "-----\n|";
        std::cout << " 2 | Testing if Werner can execute the form" << std::endl;
        std::cout << "-----" << std::endl;
        werner.execute(hehe);
        
        std::cout << std::endl;
        std::cout << "-----\n|";
        std::cout << " 3 | Signing the form" << std::endl;
        std::cout << "-----" << std::endl;
        werner.signForm(hehe);
        std::cout << std::endl;
        std::cout << hehe << std::endl;
        std::cout << "-----\n|";
        std::cout << " 4 | Executing the form" << std::endl;
        std::cout << "-----" << std::endl;
        werner.execute(hehe);
        std::cout << std::endl;

        std::cout   << "\n--------------------------------------------------------------------------\n"
                    << "TEST 3:\tTesting the Robotomy Request Form\n"
                    << "\tmakes drilling noises and informs 50% of <tagets> robotomies were\n\ta success"
                    << "\n--------------------------------------------------------------------------"
                    << std::endl;

        std::cout << "-----\n|";
        std::cout << " 1 | Instantiating a Robotomy Request Form" << std::endl;
        std::cout << "-----" << std::endl;
        RobotomyRequestForm hui("John");
        std::cout << std::endl;
        std::cout << "-----\n|";
        std::cout << " 2 | Signing the Robotomy Request Form" << std::endl;
        std::cout << "-----" << std::endl;
        // werner.execute(hui);
        // std::cout << std::endl;
        werner.signForm(hui);
        std::cout << hui << std::endl;
        std::cout << "-----\n|";
        std::cout << " 3 | Executing the Robotomy Request Form" << std::endl;
        std::cout << "-----" << std::endl;
        werner.execute(hui);

        std::cout << std::endl;
        std::cout << "-----\n|";
        std::cout << " 4 | Executing the Robotomy Request Form a few more times" << std::endl;
        std::cout << "-----" << std::endl;
        werner.execute(hui);
        std::cout << std::endl;
        werner.execute(hui);        
        std::cout << std::endl;
        werner.execute(hui);
        std::cout << std::endl;
        werner.execute(hui);
        std::cout << std::endl;
        werner.execute(hui);
        std::cout << std::endl;
        werner.execute(hui);
        std::cout << std::endl;
        werner.execute(hui);
        std::cout << std::endl;
        werner.execute(hui);
        std::cout << std::endl;
        werner.execute(hui);
        std::cout << std::endl;
        werner.execute(hui);
        std::cout << std::endl;
        werner.execute(hui);
        std::cout << std::endl;
        werner.execute(hui);        
        std::cout << std::endl;
        werner.execute(hui);
        std::cout << std::endl;
        werner.execute(hui);
        std::cout << std::endl;
        werner.execute(hui);
        std::cout << std::endl;
        werner.execute(hui);
        std::cout << std::endl;
        werner.execute(hui);
        std::cout << std::endl;
        werner.execute(hui);
        std::cout << std::endl;
        werner.execute(hui);

        std::cout << std::endl;
        std::cout   << "------------------------------------------------\n"
                << "Tests finished, destruction will take place now"
                << "\n------------------------------------------------"
                << std::endl;
        std::cout << std::endl;
    }
    
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}
