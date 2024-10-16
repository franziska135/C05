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

AForm::AForm() : _name("default"), _signed (false) , _gradeSign(150), _gradeExec(150) {
}

AForm::AForm (const AForm &other) : _name(other._name), _signed(other._signed), 
    _gradeSign(other._gradeSign), _gradeExec(other._gradeExec) {
    *this = other;
}

AForm& AForm::operator=(const AForm& other) {
    if (this != &other) 
        _signed = other.getSigned();
    return *this;
}

AForm::AForm (const std::string name, int gradeSign, int gradeExec) : _name(name),
            _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec) {
    try {
        if (gradeSign < 1 || gradeExec < 1)
            throw GradeTooHighException();
        if (gradeSign > 150 || gradeExec > 150)
            throw GradeTooLowException();
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

AForm::~AForm() {
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
        std::cout   << Bureaucrat.getName() << " signed the " << this->getName() << std::endl;
    }
    else
        throw GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw () {
    return "Grade is too high. Should be b/w 1 and 150";
}

const char* AForm::GradeTooLowException::what() const throw () {
    return "Grade is too low. Should be b/w 1 and 150";
}

const char* AForm::FormNotSigned::what() const throw () {
    return "Form is not signed";
}

const char* AForm::NeitherGradeNorSigned::what() const throw () {
    return "Form is not signed and grade is too low";
}

std::ostream&  operator<<(std::ostream& os, const AForm& other) {
    os  << "*******************************************\n"
        << "Form '" << other.getName() << "'" << " is " << (other.getSigned() ? "signed\n" : "not signed\n")
        << "Grade required to sign:\t\t" << other.getGradeSign()
        << "\nGrade required to execute:\t" << other.getGradeExec()
        << "\n*******************************************"
        << std::endl;
    return (os);
}
