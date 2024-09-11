#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form {
    private:
        const std::string _name;
        bool        _signed;
        const int   _gradeSign;
        const int   _gradeExec;
        
    public:
        Form                (void);
        Form                (const Form& other);
        Form&               operator=(const Form& other);
        Form                (const std::string name, int gadeSign, int gradeExec);
        ~Form                (void);

        const std::string   getName() const;
        bool                getSigned() const;
        int                 getGradeSign() const;
        int                 getGradeExec() const;
        
        void                beSigned(Bureaucrat& bureaucrat);

        class   GradeTooHighException : public std::exception {
            public:
                const char * what() const throw();
        };

        class   GradeTooLowException : public std::exception {
            public:
                const char* what () const throw();
        };
};

std::ostream&   operator<<(std::ostream& os, const Form& other);

#endif