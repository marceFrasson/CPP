#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void )
  : AForm( "ShrubberyCreationForm", 145, 137 ), _target( "Unknown" )
{
  return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string &target )
  : AForm( "ShrubberyCreationForm", 145, 137 ), _target( target )
{
  return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &source )
  : AForm( "ShrubberyCreationForm", 145, 137 )
{
  operator=(source);

  return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
  return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=
                          ( const ShrubberyCreationForm &rightHandSide )
{
  if (this != &rightHandSide)
    _target = rightHandSide._target;

  return (*this);
}

bool ShrubberyCreationForm::execute( const Bureaucrat &executor ) const
{
  if (AForm::execute(executor))
  {
    std::string		fileName = _target + "_shrubbery";
    std::ifstream fileIn("Shrubbery");
    std::ofstream	fileOut(fileName.c_str());

    if (fileIn && fileOut)
    {
      fileOut << fileIn.rdbuf();
      std::cout << executor.getName() << "'s ASCII tree planted! Open file "
      << fileName << " to see it." << std::endl;
    }
    
    fileIn.close();
    fileOut.close();

    return (true);
  }

  return (false);
}
