/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:41:28 by igurses           #+#    #+#             */
/*   Updated: 2026/01/19 23:06:34 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(): name("Default"), grade(150)
{  
}

Bureaucrat::Bureaucrat(const std::string &name, int grade): name(name), grade(grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}
Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade)
{
    if (other.grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (other.grade > 150)
        throw Bureaucrat::GradeTooLowException();
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
    {
        if (other.grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else if (other.grade > 150)
            throw Bureaucrat::GradeTooLowException();
        this->grade = other.grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat(){}

const  std::string &Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

void Bureaucrat::incrementGrade()
{
    if (this->grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade--;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b)
{
    out << b.getName() << ", bureaucrat grade: " << b.getGrade() << std::endl;
    return out;
}

void Bureaucrat::decrementGrade()
{
    if (this->grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high!";
}
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low!";
}

void Bureaucrat::signForm(Form &form)
{
    try {
        form.beSigned(*this);
        std::cout << this->name << " signed " << form.getName() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << this->name << " couldn't sign " << form.getName() 
                  << " because " << e.what() << std::endl;
    }
}