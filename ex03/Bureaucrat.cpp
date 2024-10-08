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

Bureaucrat::~Bureaucrat  () {
    std::cout   << "Bureaucrat Destructor called"
                << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name) {
    try {
        if (grade < 1)
            throw GradeTooHighException();
        if (grade > 150)
            throw GradeTooLowException();
        _grade = grade;
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
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
    try {
        if (getGrade() == 1)
            throw GradeTooHighException ();
        _grade--;
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

void    Bureaucrat::decGrade() {
    try {
        if (getGrade() == 150)
            throw GradeTooLowException ();
        _grade++;
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
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
    catch (const std::exception &e) {
        std::cout   << _name << " could not sign Form '" << form.getName()
                    << "' because " << e.what()         << std::endl;
    }
}

void    Bureaucrat::execute(AForm const &form) {
    try {
        form.execute(*this); 
        std::cout << "(" << this->getName() << " executed " << form.getName() << ")" << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << this->getName() << " couldn't execute " << form.getName()
                  << " because " << e.what() << std::endl;
    }
}
