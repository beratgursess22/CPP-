/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:47:53 by igurses           #+#    #+#             */
/*   Updated: 2026/02/03 13:34:40 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExecute;
	protected:
		virtual void executeAction() const = 0;
    public:
        AForm();
        AForm(const std::string &name, int gradeToSign, int gradeToExecute);  
        AForm(const AForm &other);
        AForm &operator=(const AForm &other);
        virtual ~AForm();
        
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
		class FormNotSignedException : public std::exception 
		{
			public:
           		virtual const char* what() const throw();
    	};	
        void beSigned(const Bureaucrat &bureaucrat);
        const std::string &getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
		void execute(const Bureaucrat &executor) const;
};

std::ostream &operator<<(std::ostream &out, const AForm &f);

#endif