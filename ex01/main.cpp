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

int main() {
        std::cout   << "----------------------------------------------------------------------------------------------\n"
                << "TEST 1: signing a form ('Wohnbeihilfe') for which the Bureaucrats grade is too low"
                << "\n----------------------------------------------------------------------------------------------"
                << std::endl;
        std::cout << std::endl;
        Bureaucrat jules("Jules", 75);
        std::cout << jules << std::endl;

        
        std::cout << std::endl;
        
        Form formA("Wohnbeihilfe", 1, 10);
        Form formB("Antrag auf Anerkennung", 60, 140);

        std::cout << std::endl;

        jules.signForm(formA);
        std::cout << std::endl;
        std::cout << formA << std::endl;

        std::cout   << "----------------------------------------------------------------------------------------------\n"
                << "TEST 2: signing a form ('Antrag auf Anerkennung') for which the Bureaucrats grade is a match"
                << "\n----------------------------------------------------------------------------------------------"
                << std::endl;
        std::cout << std::endl;
        
        Bureaucrat werner("Werner", 3);
        std::cout << werner << std::endl;
        std::cout << std::endl;
        std::cout << formB << std::endl;
        
        werner.signForm(formB);
        std::cout << std::endl;
        std::cout << formB << std::endl;

        std::cout   << "----------------------------------------------------------------------------------------------\n"
                << "Tests finished, destruction will happen now"
                << "\n----------------------------------------------------------------------------------------------"
                << std::endl;
        std::cout << std::endl;
}