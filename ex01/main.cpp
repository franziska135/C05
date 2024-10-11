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
        try {
                std::cout   << "--------------------------------------------------------------------------------------------\n"
                        << "TEST 1: signing a form ('Wohnbeihilfe') for which the Bureaucrats grade is too low"
                        << "\n--------------------------------------------------------------------------------------------"
                        << std::endl;
                std::cout << std::endl;
                Bureaucrat jules("Jules", 75);
                std::cout << jules << std::endl;
                std::cout << std::endl;
                
                Form formA("Wohnbeihilfe", 1, 10);
                jules.signForm(formA);
                std::cout << formA << std::endl;
        }
                catch (const std::exception& e) {
                std::cerr << e.what() << std::endl;
        }

        try {
                std::cout   << "--------------------------------------------------------------------------------------------\n"
                        << "TEST 2: signing a form ('Antrag auf Anerkennung') for which the Bureaucrats grade is a match"
                        << "\n--------------------------------------------------------------------------------------------"
                        << std::endl;
                std::cout << std::endl;
                Form formB("Antrag auf Anerkennung", 60, 140);
                Bureaucrat werner("Werner", 3);
                std::cout << werner << std::endl;
                std::cout << formB << std::endl;

                werner.signForm(formB);
                std::cout << formB << std::endl;

        }
                catch (const std::exception& e) {
                std::cerr << e.what() << std::endl;
        }

        std::cout   << "-------------------\n"
                << "Tests are finished"
                << "\n-------------------"
                << std::endl;
}