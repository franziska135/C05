/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:27:52 by fmarggra          #+#    #+#             */
/*   Updated: 2024/09/21 16:27:53 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm (void) : AForm("ShrubberyCreationForm", 145, 137), _target("hw") {
    std::cout   << "ShrubberyCreationForm default constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm (const std::string target) :
    AForm("ShrubberyCreationForm", 145, 137), _target(target) {
    std::cout   << "ShrubberyCreationForm constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm (const ShrubberyCreationForm& other) : AForm(other),
    _target(other._target) {
    std::cout   << "ShrubberyCreationForm copy constructor" << std::endl;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    if (this != &other) {
        AForm::operator=(other);
        _target = other._target;
    }
    return *this;
}
        

ShrubberyCreationForm::~ShrubberyCreationForm (void) {
    std::cout   << "ShrubberyCreationForm default destructor" << std::endl;
}

void        ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    if (executor.getGrade() > this->_gradeExec && !this->getSigned()) 
        throw NeitherGradeNorSigned();
    else if (executor.getGrade() > this->_gradeExec)
        throw GradeTooLowException();
    else if (!this->getSigned())
        throw   FormNotSigned();
    std::ofstream oFile;
    oFile.open ((_target + "_shrubbery").c_str());
    if (!oFile.is_open())
    {
        std::cerr   << "Error: "
                    << _target
                    << "_shrubbery could not be created"
                    << std::endl;
        return ;
    }    
    oFile   << "      oooooooooo\n"
            << "  000000000000000000\n"
            << " 00000000000000000000\n"
            << "ooooooooooooooooooooo\n"
            << " ooooooooooooooooooo\n"
            << "  oo\\\\\\||||////oo \n"
            << "      \\\\||||///\n"
            << "      |||||||||\n"
            << "      |||||||||\n"
            << "      |||||||||\n"         
            << " ....//||||||||\\.......\n"
            << "....///||||||||\\\\.......\n"
            << std::endl;
    std::cout   << _target
                    << " has been executed successfully"
                    << std::endl;
    oFile.close();
}
