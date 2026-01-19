AForm::AForm(): name("Default Form"),isSigned(false), gradeToSign(150), gradeToExecute(150)
{
}

AForm::AForm(const std::string &name, int gradeToSign, int gradeToExecute): name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw AForm::GradeTooLowException();
    this->isSigned = false;
}

AForm::AForm(const AForm &other) : name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
    if (gradeToExecute < 1 || gradeToSign < 1)
        throw AForm::GradeTooHighException();
    else if (gradeToExecute > 150 || gradeToSign > 150)
        throw AForm::GradeTooLowException();
}

AForm &AForm::operator=(const AForm &other)
{
        if(this != &other)
    {
        if (other.gradeToSign < 1 || other.gradeToExecute < 1)
            throw AForm::GradeTooHighException();
        else if (other.gradeToSign > 150 || other.gradeToExecute > 150)
            throw AForm::GradeTooLowException();
    }
    return *this;
}
    
AForm::~AForm(){}

const std::string &AForm::getName() const
{
    return this->name;
}
bool AForm::getIsSigned() const
{
    return this->isSigned;
}
int AForm::getGradeToSign() const
{
    return this->gradeToSign;
}
int AForm::getGradeToExecute() const
{
    return this->gradeToExecute;
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->gradeToSign)
        throw AForm::GradeTooLowException();
    this->isSigned = true;
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return "Form Exception: Grade is too high.";
}
const char* AForm::GradeTooLowException::what() const throw()
{
    return "Form Exception: Grade is too low.";
}
const char* AForm::FormNotSignedException::what() const throw()
{
	return "Form Exception: Form is not signed.";
}

std::ostream &operator<<(std::ostream &out, const AForm &form)
{
    out << "Form Name: " << form.getName() << ", Is Signed: " << form.getIsSigned() << ", Grade to Sign: " << form.getGradeToSign() << ", Grade to Execute: " << form.getGradeToExecute() << std::endl;
    return out;
}

void AForm::execute(const Bureaucrat &executor) const
{
	if (!this->getIsSigned())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	this->executeAction();
}