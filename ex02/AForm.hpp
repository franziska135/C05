#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm {
    private:
        const std::string _name;
        bool        _signed;
        const int   _gradeSign;
        const int   _gradeExec;
        
    public:
        AForm                (void);
        AForm                (const AForm& other);
        AForm&               operator=(const AForm& other);
        AForm                (const std::string name, int gadeSign, int gradeExec);
        ~AForm                (void);

        const std::string   getName() const;
        bool                getSigned() const;
        int                 getGradeSign() const;
        int                 getGradeExec() const;
        
        void                beSigned(Bureaucrat& bureaucrat);

        //pure virtual function for abstract class
        virtual void        execute(Bureaucrat const &executor) const = 0;

        class   GradeTooHighException : public std::exception {
            public:
                const char * what() const throw();
        };

        class   GradeTooLowException : public std::exception {
            public:
                const char* what () const throw();
        };
};

std::ostream&   operator<<(std::ostream& os, const AForm& other);

#endif