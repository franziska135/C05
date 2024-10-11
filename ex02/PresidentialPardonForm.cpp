/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:27:42 by fmarggra          #+#    #+#             */
/*   Updated: 2024/09/21 16:27:47 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm (void) : AForm("PresidentialPardonForm", 25, 5), _target("hw") {
}

PresidentialPardonForm::PresidentialPardonForm (const std::string target) :
    AForm("PresidentialPardonForm", 25, 5), _target(target) {
}

PresidentialPardonForm::PresidentialPardonForm (const PresidentialPardonForm& other) : AForm(other),
    _target(other._target) {
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
    if (this != &other) {
        AForm::operator=(other);
        _target = other._target;
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm (void) {
}

void        PresidentialPardonForm::execute(Bureaucrat const &executor) const {
        if (executor.getGrade() > this->_gradeExec && !this->getSigned()) 
            throw NeitherGradeNorSigned();
        else if (executor.getGrade() > this->_gradeExec)
            throw GradeTooLowException();
        else if (!this->getSigned())
            throw   FormNotSigned();
        std::cout   << _target
                    << " has been pardoned by Zaphod Beeblebrox"
                    << std::endl;
}

