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
        Bureaucrat jules("Jules", 75);
        std::cout << jules << std::endl;

        Bureaucrat werner("Werner", 3);
        std::cout << werner << std::endl;
        
        std::cout << std::endl;
        
        // AForm formA("Wohnbeihilfe", 5, 10);
        // AForm formB("Antrag auf Anerkennung", 60, 140);

        // std::cout << std::endl;

        // jules.signForm(formA);
        // std::cout << formA << std::endl;

        // werner.signForm(formA);
        // std::cout << formA << std::endl;
        
        // werner.signForm(formB);
        // std::cout << std::endl;
        // std::cout << formB << std::endl;

    }
    
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}
