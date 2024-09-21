/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:26:28 by fmarggra          #+#    #+#             */
/*   Updated: 2024/09/21 16:26:30 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm {
    protected:
        const std::string _name;
        bool        _signed;
        const int   _gradeSign;
        const int   _gradeExec;
        
    public:
        AForm                (void);
        AForm                (const AForm& other);
        AForm&               operator=(const AForm& other);
        AForm                (const std::string name, int gadeSign, int gradeExec);
        virtual ~AForm                (void);

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
        class   FormNotSigned : public std::exception {
            public:
                const char* what () const throw();
        };
        class   NeitherGradeNorSigned : public std::exception {
            public:
                const char* what () const throw();
        };
};

std::ostream&   operator<<(std::ostream& os, const AForm& other);

#endif
