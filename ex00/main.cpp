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
        std::cout   << "---------------------------------------------------------\n"
                << "TEST 1: incrementing and decrementing Bureaucrat's grades"
                << "\n---------------------------------------------------------"
                << std::endl;
        std::cout << std::endl;

        Bureaucrat jules("Jules", 75);
        std::cout << jules << std::endl;

        jules.incGrade();
        std::cout << std::endl;
        std::cout << "one increment: ";
        std::cout << jules << std::endl;

        std::cout << "one decrement: ";
        jules.decGrade();
        std::cout << jules << std::endl;
        
        std::cout << std::endl;
        
        std::cout   << "---------------------------------------------------------\n"
                << "TEST 2: incrementing beyond bounds of 1 && 150"
                << "\n---------------------------------------------------------"
                << std::endl;
        std::cout << std::endl;

        Bureaucrat peter("Peter", 1);
        std::cout << peter << std::endl;
        std::cout << "one increment: ";
        peter.incGrade();

        std::cout << std::endl;

        Bureaucrat hugo("Hugo", 150);
        std::cout << hugo << std::endl;
        std::cout << "one decrement: ";
        hugo.decGrade();

        
        std::cout << std::endl;

        std::cout   << "---------------------------------------------------------\n"
                << "TEST 3: Instantiating a Bureaucrat with an invalid grade"
                << "\n---------------------------------------------------------"
                << std::endl;
        std::cout << std::endl;
        Bureaucrat bob("Bob", 0);

        std::cout << std::endl;
        std::cout   << "---------------------------------------------------------\n"
                << "Tests finished, destruction will happen now"
                << "\n---------------------------------------------------------"
                << std::endl;
}
