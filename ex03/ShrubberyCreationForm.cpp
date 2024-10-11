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
}

ShrubberyCreationForm::ShrubberyCreationForm (const std::string target) :
    AForm("ShrubberyCreationForm", 145, 137), _target(target) {
}

ShrubberyCreationForm::ShrubberyCreationForm (const ShrubberyCreationForm& other) : AForm(other),
    _target(other._target) {
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    if (this != &other) {
        AForm::operator=(other);
        _target = other._target;
    }
    return *this;
}
        
ShrubberyCreationForm::~ShrubberyCreationForm (void) {
}

const char* ShrubberyCreationForm::FileCreationUnsuccessful::what() const throw () {
    return "<target>_shrubbery file could not be opened";
}

void        ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    if (executor.getGrade() > this->_gradeExec && !this->getSigned()) 
        throw NeitherGradeNorSigned();
    else if (executor.getGrade() > this->_gradeExec)
        throw GradeTooLowException();
    else if (!this->getSigned())
        throw   FormNotSigned();
    std::ofstream oFile;
    oFile.open ((_target + "_shrubbery").c_str(), std::ios::app);
    if (!oFile.is_open())
    {
        throw FileCreationUnsuccessful();
    }    
    oFile   << "      oooooooooo\n"
            << "  oooooooooooooooooo\n"
            << " oooooooooooooooooooo\n"
            << "ooooooooooooooooooooo\n"
            << " ooooooooooooooooooo\n"
            << "  oo\\\\\\||||////oo \n"
            << "      \\\\||||///\n"
            << "      |||||||||        ooooo\n"
            << "      |||||||||      oooooooo\n"
            << "      |||||||||       oooooo\n"    
            << "     //||||||||\\        ||\n"
            << "....///||||||||\\\\.......||..\n"
            << std::endl;
    std::cout   << _target
                    << " has been executed successfully"
                    << std::endl;
    oFile.close();
}
