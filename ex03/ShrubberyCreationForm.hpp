/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:27:56 by fmarggra          #+#    #+#             */
/*   Updated: 2024/09/21 16:27:58 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>

class Bureaucrat;

class ShrubberyCreationForm : public AForm {
    private:
        std::string _target;
    public:
        ShrubberyCreationForm                (void);
        ShrubberyCreationForm                (const ShrubberyCreationForm& other);
        ShrubberyCreationForm&               operator=(const ShrubberyCreationForm& other);
        ShrubberyCreationForm                (const std::string target);
        ~ShrubberyCreationForm               (void);
        void        execute(Bureaucrat const &executor) const;
};

#endif
