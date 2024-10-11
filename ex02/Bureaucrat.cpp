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
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) {
    *this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if (this != &other) {
        _grade = other.getGrade();
    }
    return *this;
}

Bureaucrat::~Bureaucrat  () {
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
        << " is a bureaucrat of grade "
        << other.getGrade();
    return (os);
}

void    Bureaucrat::signForm(AForm& form) {
    try {
        form.beSigned(*this);
    }
    catch (const std::exception& e) {
        std::cout   << _name << " could not sign Form " << form.getName() << " beacause " << e.what() << std::endl;
    }
}

void    Bureaucrat::execute(AForm const &form) {
    try {
            form.execute(*this); 
            std::cout << "(" << this->getName() << " executed " << form.getName() << ")" << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << _name << " could not execute " << form.getName() << " beacause " << e.what() << std::endl;
    }
}
