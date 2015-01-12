/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwoodrow <jwoodrow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 16:03:15 by jwoodrow          #+#    #+#             */
/*   Updated: 2015/01/12 19:14:27 by tmignot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::~Intern(void)
{
}

Form			*Intern::makeForm(std::string request, std::string demander)
{
	Form		*form = NULL;

	if (request.find("Robotomy Request") != std::string::npos)
		form = new RobotomyRequestForm(demander);
	else if (request.find("Shrubbery Creation") != std::string::npos)
		form = new ShrubberyCreationForm(demander);
	else if (request.find("Presidential Pardon") != std::string::npos)
		form = new PresidentialPardonForm(demander);
	if (form)
		std::cout << "Intern creates " << *form << std::endl;
	else
		std::cout << "I'm sorry for my incompetence, but this type of form does not seem to exist..." << std::endl;
	return (form);
}
