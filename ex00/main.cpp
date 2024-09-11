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

        jules.incGrade();
        std::cout << jules << std::endl;

        jules.decGrade();
        jules.decGrade();
        std::cout << "Jules after two increments:" << std::endl;
        std::cout << jules << std::endl;

        // Test invalid grade should throw exception
        Bureaucrat bob("Bob", 0);  
    }
    
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}
