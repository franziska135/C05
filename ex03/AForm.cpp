/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:26:20 by fmarggra          #+#    #+#             */
/*   Updated: 2024/09/21 16:26:22 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

//constructors
AForm::AForm() : _name("default"), _signed (false) , _gradeSign(150), _gradeExec(150) {
    std::cout   << "AForm default constructor" << std::endl;
}

AForm::AForm (const AForm &other) : _name(other._name), _signed(other._signed), 
    _gradeSign(other._gradeSign), _gradeExec(other._gradeExec) {
    std::cout   << "AForm copy constructor" << std::endl;
    *this = other;
}

AForm& AForm::operator=(const AForm& other) {
    std::cout   << "AForm copy assignment operator" << std::endl;
    if (this != &other) 
        _signed = other.getSigned();
    return *this;
}

AForm::AForm (const std::string name, int gradeSign, int gradeExec) : _name(name),
            _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec) {
    std::cout   << "AForm construcor is called" << std::endl;
    if (gradeSign < 1 || gradeExec < 1)
        throw GradeTooHighException();
    if (gradeSign > 150 || gradeExec > 150)
        throw GradeTooLowException();
}

//destructor
AForm::~AForm() {
    std::cout   << "AForm destructor" << std::endl;
}

const std::string   AForm::getName(void) const {
    return _name;
}

bool    AForm::getSigned(void) const {
    return _signed;
}

int   AForm::getGradeSign(void) const {
    return _gradeSign;
}

int   AForm::getGradeExec(void) const {
    return _gradeExec;
}

void    AForm::beSigned(Bureaucrat& Bureaucrat) {
    if (Bureaucrat.getGrade() <= this->_gradeSign) {
        this->_signed = true;
        std::cout   << Bureaucrat.getName() << " signed the Form" << std::endl;
    }
    else
        throw GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw () {
    return "Grade is too high.";
}

const char* AForm::GradeTooLowException::what() const throw () {
    return "Grade is too low.";
}

const char* AForm::FormNotSigned::what() const throw () {
    return "Form is not signed";
}

const char* AForm::NeitherGradeNorSigned::what() const throw () {
    return "Form is not signed and grade is too low";
}

std::ostream&  operator<<(std::ostream& os, const AForm& other) {
    os  << "*********************************************\n"
        << "Form '" << other.getName() << "'" << " is " << (other.getSigned() ? "signed\n" : "not signed\n")
        << "Grade required to sign:\t\t" << other.getGradeSign()
        << "\nGrade required to execute:\t" << other.getGradeExec()
        << "\n*********************************************"
        << std::endl;
    return (os);
}
