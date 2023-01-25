#include "includes.hpp"

void writeOutputFile( std::ofstream &fileOut, std::string text )
{
  fileOut << text;
  fileOut.close();
}

void replaceStrings( std::string &text, std::string stringToBeReplaced,
                          std::string stringToReplace )
{
  size_t i = 0;

  while ((i = text.find( stringToBeReplaced, i )) != std::string::npos)
  {
    text.erase(i, stringToBeReplaced.length());
    text.insert(i, stringToReplace);
    i += stringToReplace.length();
  }
}

void readFile( std::ifstream &fileIn, std::string &text )
{
  std::stringstream buffer;

	buffer << fileIn.rdbuf();
	text = buffer.str();

	fileIn.close();
}

int openFiles( const char *fileName, std::ifstream &fileIn,
                     std::ofstream &fileOut )
{
  std::string   outFileName;

  outFileName = (std::string)fileName + ".replace";
  
  fileIn.open(fileName);

  if (!fileIn)
  {
      std::cout << "\nError opening input file.\n" << std::endl;

      return (1);
  }

  fileOut.open(outFileName.c_str());
  if (!fileOut)
  {
      std::cout << "\nError opening output file.\n" << std::endl;

      return (1);
  }

  return (0);
}

int checkArgs( int argc, char *argv[] )
{
  if (argc != 4)
  {
    std::cout << "\nInvalid number of arguments." << std::endl;
    std::cout << "Usage: ./replace <filename> ";
    std::cout << "<stringToBeReplaced> <stringToReplace>\n" << std::endl;

    return (1);
  }

  if (argv[2] == argv[3])
  {
    std::cout << "\nBoth strings are equal. Nothing to replace.\n" << std::endl;

    return (1);
  }

  return (0);
}

int main( int argc, char *argv[] )
{

  std::ifstream fileIn;
  std::ofstream fileOut;
  std::string   stringToBeReplaced;
  std::string   stringToReplace;
  std::string   text;

  if (checkArgs( argc, argv ))
    return (1);

  stringToBeReplaced = argv[2];
  stringToReplace = argv[3];

  if (openFiles( argv[1], fileIn, fileOut ))
    return (1);

  readFile( fileIn, text );
  replaceStrings( text, stringToBeReplaced, stringToReplace );
  writeOutputFile( fileOut, text );

  return (0);

}
