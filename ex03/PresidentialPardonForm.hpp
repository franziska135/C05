/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:27:28 by fmarggra          #+#    #+#             */
/*   Updated: 2024/09/21 16:27:29 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

//canonical void constructor with concrete forms?

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm {
    private:
        std::string _target;
    public:
        PresidentialPardonForm                (void);
        PresidentialPardonForm                (const PresidentialPardonForm& other);
        PresidentialPardonForm&               operator=(const PresidentialPardonForm& other);
        PresidentialPardonForm                (const std::string target);
        ~PresidentialPardonForm               (void);
        void        execute(Bureaucrat const &executor) const;
};

#endif
