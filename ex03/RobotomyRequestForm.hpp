/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:27:16 by fmarggra          #+#    #+#             */
/*   Updated: 2024/09/21 16:27:18 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm {
    private:
        std::string _target;
    public:
        RobotomyRequestForm                (void);
        RobotomyRequestForm                (const RobotomyRequestForm& other);
        RobotomyRequestForm&               operator=(const RobotomyRequestForm& other);
        RobotomyRequestForm                (const std::string target);
        ~RobotomyRequestForm               (void);
        void        execute(Bureaucrat const &executor) const;
};

#endif
