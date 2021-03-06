#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat {

	private :

		std::string const	_name;
		unsigned int		_grade;

		Bureaucrat();
		Bureaucrat& operator=(Bureaucrat const&);

	public	:

		Bureaucrat(std::string const&, unsigned int);
		Bureaucrat(Bureaucrat const&);
		~Bureaucrat();


		std::string			getName() const;
		unsigned int		getGrade() const;

		void				incGrade();
		void				decGrade();

		class GradeTooHighException : public std::exception {

			private :
				GradeTooHighException& operator=(GradeTooHighException const&);

			public :
				GradeTooHighException();
				GradeTooHighException(GradeTooHighException const&);
				~GradeTooHighException() throw();

				virtual const char 	*what() const throw();
		};

		class GradeTooLowException : public std::exception {

			private :
				GradeTooLowException& operator=(GradeTooLowException const&);

			public :
				GradeTooLowException();
				GradeTooLowException(GradeTooLowException const&);
				~GradeTooLowException() throw();

				virtual const char 	*what() const throw();
		};
};

std::ostream& operator<<(std::ostream&, Bureaucrat const&);

#endif
