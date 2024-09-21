#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm (void) : AForm("RobotomyRequestForm", 72, 45), _target("hw") {
    std::cout   << "RobotomyRequestForm default constructor" << std::endl;
    srand(time(0));    
}

RobotomyRequestForm::RobotomyRequestForm (const std::string target) :
    AForm("RobotomyRequestForm", 72, 45), _target(target) {
    std::cout   << "RobotomyRequestForm constructor" << std::endl;
    srand(time(0));
}

RobotomyRequestForm::RobotomyRequestForm (const RobotomyRequestForm& other) : AForm(other),
    _target(other._target) {
    std::cout   << "RobotomyRequestForm copy constructor" << std::endl;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
    if (this != &other) {
        AForm::operator=(other);
        _target = other._target;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm (void) {
    std::cout   << "RobotomyRequestForm default destructor" << std::endl;
}

void        RobotomyRequestForm::execute(Bureaucrat const &executor) const {
        if (executor.getGrade() > this->_gradeExec && !this->getSigned()) 
            throw NeitherGradeNorSigned();
        else if (executor.getGrade() > this->_gradeExec)
            throw GradeTooLowException();
        else if (!this->getSigned())
            throw   FormNotSigned();
        if (rand() % 2 == 0) {
            std::cout   << "Robotomy on '"
                        << _target
                        << "' was a success!"
                        << std::endl;
        }
        else {
            std::cout   << "Robotomy failed on "
                        <<_target
                        << std::endl;
        }
}