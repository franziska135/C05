/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:59:59 by fmarggra          #+#    #+#             */
/*   Updated: 2024/09/09 16:00:01 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
    private:
        const std::string   _name;
        int                 _grade;
    public:
        Bureaucrat          (const std::string name, int grade);
        ~Bureaucrat         ();
        //other constructors//
        Bureaucrat          (void);
        Bureaucrat          (const Bureaucrat& other);
        Bureaucrat&         operator=(const Bureaucrat &other);
        const std::string   getName() const ;
        int                 getGrade() const ;
        void                incGrade();
        void                decGrade();
        void                signForm(Form &form);
        
        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw();
        };
        
        class GradeTooLowException : public std::exception {
            public:
                const char *what() const throw();
        };
};

std::ostream&  operator<<(std::ostream& os, const Bureaucrat& otherObject);

#endif
