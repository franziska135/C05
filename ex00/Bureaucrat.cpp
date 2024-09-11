/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:59:55 by fmarggra          #+#    #+#             */
/*   Updated: 2024/09/09 15:59:56 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("default") {
    _grade = 0;
    std::cout   << "Bureaucrat default constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) {
    *this = other;
    std::cout   << "Bureaucrat copy constructor" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if (this != &other) {
        _grade = other.getGrade();
    }
    std::cout   << "Bureaucrat copy assignment constructor" << std::endl;
    return *this;
}

//desctructor
Bureaucrat::~Bureaucrat  () {
    std::cout   << "Destructor called"
                << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name) {
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    _grade = grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw () {
    return "Grade is too high. Should be b/w 1 and 150";
}

const char* Bureaucrat::GradeTooLowException::what() const throw () {
    return "Grade is too low. Should be b/w 1 and 150";
}

int Bureaucrat::getGrade() const {
    return _grade;
}

const std::string Bureaucrat::getName() const {
    return _name;
}

void    Bureaucrat::incGrade() {
    if (getGrade() == 1)
        throw GradeTooHighException ();
    _grade--;
}

void    Bureaucrat::decGrade() {
    if (getGrade() == 150)
        throw GradeTooLowException ();
    _grade++;
}

std::ostream&  operator<<(std::ostream& os, const Bureaucrat& other) {
    os  << other.getName()
        << ", bureaucrat grade "
        << other.getGrade();
    return (os);
}
