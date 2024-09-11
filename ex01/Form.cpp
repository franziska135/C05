#include "Form.hpp"

//constructors
Form::Form() : _name("default"), _signed (false) , _gradeSign(150), _gradeExec(150) {
    std::cout   << "Form default constructor" << std::endl;
}

Form::Form (const Form &other) : _name(other._name), _signed(other._signed), 
    _gradeSign(other._gradeSign), _gradeExec(other._gradeExec) {
    std::cout   << "Form copy constructor" << std::endl;
    *this = other;
}

Form& Form::operator=(const Form& other) {
    std::cout   << "Form copy assignment operator" << std::endl;
    if (this != &other) 
        _signed = other.getSigned();
    return *this;
}

Form::Form (const std::string name, int gradeSign, int gradeExec) : _name(name),
            _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec) {
    std::cout   << "Form construcor is called" << std::endl;
    if (gradeSign < 1 || gradeExec < 1)
        throw GradeTooHighException();
    if (gradeSign > 150 || gradeExec > 150)
        throw GradeTooLowException();
}

//destructor
Form::~Form() {
    std::cout   << "Form destructor" << std::endl;
}

const std::string   Form::getName(void) const {
    return _name;
}

bool    Form::getSigned(void) const {
    return _signed;
}

int   Form::getGradeSign(void) const {
    return _gradeSign;
}

int   Form::getGradeExec(void) const {
    return _gradeExec;
}

void    Form::beSigned(Bureaucrat& Bureaucrat) {
    if (Bureaucrat.getGrade() <= this->_gradeSign)
        this->_signed = true;
    else
        throw GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw () {
    return "Grade is too high.";
}

const char* Form::GradeTooLowException::what() const throw () {
    return "Gradeis too low.";
}

std::ostream&  operator<<(std::ostream& os, const Form& other) {
    os  << "*********************************************\n"
        << "Form '" << other.getName() << "'" << " is " << (other.getSigned() ? "signed\n" : "not signed\n")
        << "Grade required to sign:\t\t" << other.getGradeSign()
        << "\nGrade required to execute:\t" << other.getGradeExec()
        << "\n*********************************************"
        << std::endl;
    return (os);
}