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
        Bureaucrat jules("Jules", 75);
        std::cout << jules << std::endl;

        Bureaucrat werner("Werner", 3);
        std::cout << werner << std::endl;
        
        std::cout << std::endl;
        
        std::cout << "------------------------------------------" << std::endl;
        std::cout << "--------PRESIDENTIALPARDON TEST----------" << std::endl;
        std::cout << "------------------------------------------" << std::endl;

        std::cout << std::endl;
        PresidentialPardonForm  lala("PPF");
        std::cout << std::endl;
        std::cout << lala << std::endl;
        jules.execute(lala);
        werner.execute(lala);
        std::cout << std::endl;
        jules.signForm(lala);
        werner.signForm(lala);
        std::cout << std::endl;
        std::cout << lala << std::endl;
        werner.execute(lala);
        std::cout << std::endl;
        std::cout << "------------------------------------------" << std::endl;
        std::cout << "--------SHRUBBERY TEST----------" << std::endl;
        std::cout << "------------------------------------------" << std::endl;
        std::cout << std::endl;
        ShrubberyCreationForm hehe("SCF");
        std::cout << std::endl;
        std::cout << hehe << std::endl;
        werner.execute(hehe);
        std::cout << std::endl;
        werner.signForm(hehe);
        std::cout << std::endl;
        std::cout << hehe << std::endl;
        werner.execute(hehe);
        std::cout << std::endl;

        std::cout << "------------------------------------------" << std::endl;
        std::cout << "--------ROBOTOMYREQUESTFORM TEST----------" << std::endl;
        std::cout << "------------------------------------------" << std::endl;
        
        std::cout << std::endl;
        std::cout << std::endl;
        RobotomyRequestForm hui("RRF");
        std::cout << std::endl;
        std::cout << hui << std::endl;
        werner.execute(hui);
        std::cout << std::endl;
        werner.signForm(hui);
        std::cout << std::endl;
        std::cout << hui << std::endl;
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
        werner.execute(hui);

        std::cout << std::endl;
    }
    
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}
