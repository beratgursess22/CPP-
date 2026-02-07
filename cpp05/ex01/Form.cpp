/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:58:48 by igurses           #+#    #+#             */
/*   Updated: 2026/02/07 18:17:21 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(): name("Default Form"),isSigned(false), gradeToSign(150), gradeToExecute(150)
{
}

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute): name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
    this->isSigned = false;
}

Form::Form(const Form &other) : name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
    if (gradeToExecute < 1 || gradeToSign < 1)
        throw Form::GradeTooHighException();
    else if (gradeToExecute > 150 || gradeToSign > 150)
        throw Form::GradeTooLowException();
}

Form &Form::operator=(const Form &other)
{
        if(this != &other)
    {
        if (other.gradeToSign < 1 || other.gradeToExecute < 1)
            throw Form::GradeTooHighException();
        else if (other.gradeToSign > 150 || other.gradeToExecute > 150)
            throw Form::GradeTooLowException();
    }
    return *this;
}
    
Form::~Form(){}

const std::string &Form::getName() const
{
    return this->name;
}
bool Form::getIsSigned() const
{
    return this->isSigned;
}
int Form::getGradeToSign() const
{
    return this->gradeToSign;
}
int Form::getGradeToExecute() const
{
    return this->gradeToExecute;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
    if (this->isSigned)
        throw Form::AlreadySignedException();
    if (bureaucrat.getGrade() > this->gradeToSign)
        throw Form::GradeTooLowException();
    this->isSigned = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Form Exception: Grade is too high.";
}
const char* Form::GradeTooLowException::what() const throw()
{
    return "Form Exception: Grade is too low.";
}
const char* Form::AlreadySignedException::what() const throw()
{
    return "Form Exception: Form is already signed.";
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
    out << "Form Name: " << form.getName() << ", Is Signed: " << form.getIsSigned() << ", Grade to Sign: " << form.getGradeToSign() << ", Grade to Execute: " << form.getGradeToExecute() << std::endl;
    return out;
}