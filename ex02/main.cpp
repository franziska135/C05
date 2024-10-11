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
    
    std::cout << std::endl;
            std::cout   << "--------------------------------------------------------------\n"
            << "TEST 1:\tTesting the Presidential Pardon form\n"
            << "\tit should inform that <target> has been pardoned by X"
            << "\n---------------------------------------------------------------"
            << std::endl;
    try {    
        std::cout << "-----\n|";
        std::cout << " 1 | Creating a Bureaucrat and a Presidential Pardon Form" << std::endl;
        std::cout << "-----" << std::endl;
        
        Bureaucrat jules("Jules", 75);
        PresidentialPardonForm  lala("John");

        std::cout << jules << std::endl;
        std::cout << std::endl;
        std::cout << lala << std::endl;
        
        std::cout << "-----\n|";
        std::cout << " 2 | Testing if Jules can execute the form" << std::endl;
        std::cout << "-----" << std::endl;
        jules.execute(lala);
        
        std::cout << "\nJules will now attempt to sign the form:" << std::endl;
        jules.signForm(lala);
        std::cout << std::endl;

        std::cout << lala << std::endl;
        std::cout << "-----\n|";
        std::cout << " 3 | Instantiating a second Bucraucrat with an appropriate grade" << std::endl;
        std::cout << "-----" << std::endl;
        Bureaucrat werner("Werner", 3);
        std::cout << werner << std::endl;
        werner.execute(lala);
        werner.signForm(lala);
        std::cout << std::endl;
        std::cout << lala << std::endl;
        werner.execute(lala);
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout   << "\n\n--------------------------------------------------------------------------\n"
                << "TEST 2:\tTesting the Shrubbery Creation Form\n"
                << "\tform creates a file <x>_shrubbery and writes an ASCII tree inside"
                << "\n--------------------------------------------------------------------------"
                << std::endl;
    try {   
        std::cout << "-----\n|";
        std::cout << " 1 | Creating a Shrubbery Creation Form" << std::endl;
        std::cout << "-----" << std::endl;
        
        Bureaucrat werner2("Werner", 3);
        ShrubberyCreationForm hehe("John");
        std::cout << hehe << std::endl;

        std::cout << "-----\n|";
        std::cout << " 2 | Testing if Werner can execute the form" << std::endl;
        std::cout << "-----" << std::endl;
        werner2.execute(hehe);
        
        std::cout << std::endl;
        std::cout << "-----\n|";
        std::cout << " 3 | Signing the form" << std::endl;
        std::cout << "-----" << std::endl;
        werner2.signForm(hehe);
        std::cout << std::endl;
        std::cout << hehe << std::endl;
        std::cout << "-----\n|";
        std::cout << " 4 | Executing the form" << std::endl;
        std::cout << "-----" << std::endl;
        werner2.execute(hehe);
        std::cout << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
        std::cout   << "\n--------------------------------------------------------------------------\n"
                    << "TEST 3:\tTesting the Robotomy Request Form\n"
                    << "\tmakes drilling noises and informs 50% of <tagets> robotomies were\n\ta success"
                    << "\n--------------------------------------------------------------------------"
                    << std::endl;
    try { 
        Bureaucrat werner3("Werner", 3);
        
        std::cout << "-----\n|";
        std::cout << " 1 | Creating a Robotomy Request Form" << std::endl;
        std::cout << "-----" << std::endl;
        RobotomyRequestForm hui("John");
        std::cout << hui << std::endl;
        std::cout << "-----\n|";
        std::cout << " 2 | Signing the Robotomy Request Form" << std::endl;
        std::cout << "-----" << std::endl;
        // werner.execute(hui);
        // std::cout << std::endl;
        werner3.signForm(hui);
        std::cout << hui << std::endl;
        std::cout << "-----\n|";
        std::cout << " 3 | Executing the Robotomy Request Form" << std::endl;
        std::cout << "-----" << std::endl;
        werner3.execute(hui);
        std::cout << std::endl;
        std::cout << "-----\n|";
        std::cout << " 4 | Executing the Robotomy Request Form a few more times" << std::endl;
        std::cout << "-----" << std::endl;
        werner3.execute(hui);
        std::cout << std::endl;
        werner3.execute(hui);        
        std::cout << std::endl;
        werner3.execute(hui);
        std::cout << std::endl;
        werner3.execute(hui);
        std::cout << std::endl;
        werner3.execute(hui);
        std::cout << std::endl;
        werner3.execute(hui);
        std::cout << std::endl;
        werner3.execute(hui);
        std::cout << std::endl;
        werner3.execute(hui);
        std::cout << std::endl;
        werner3.execute(hui);
        std::cout << std::endl;
        werner3.execute(hui);
        std::cout << std::endl;
        werner3.execute(hui);
        std::cout << std::endl;
        werner3.execute(hui);        
        std::cout << std::endl;
        werner3.execute(hui);
        std::cout << std::endl;
        werner3.execute(hui);
        std::cout << std::endl;
        werner3.execute(hui);
        std::cout << std::endl;
        werner3.execute(hui);
        std::cout << std::endl;
        werner3.execute(hui);
        std::cout << std::endl;
        werner3.execute(hui);
        std::cout << std::endl;
        werner3.execute(hui);

        std::cout << std::endl;
        std::cout   << "-------------------\n"
                << "Tests are finished"
                << "\n-------------------"
                << std::endl;
    }
    
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}
