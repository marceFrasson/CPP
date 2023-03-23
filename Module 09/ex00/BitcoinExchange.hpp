#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <cstdlib>

struct BitcoinExchange
{
  std::string   date;
  float         value;

  BitcoinExchange( std::string &date, float value ) : date(  date ), value( value ) {};
};

struct InputValues
{
  std::string   date;
  float         value;
  float         exchangedValue;

  bool          tooLarge;
  bool          notPositive;
  bool          badInput;

  InputValues(std::string &date, float value, bool tooLarge, bool notPositive, bool badInput) : date(date), value(value), exchangedValue( 0 ), tooLarge( tooLarge ), notPositive( notPositive ), badInput( badInput ) {};
};

void readBitcoinData( std::vector<BitcoinExchange> &bitcoinData, std::string fileName );
void readInputData( std::vector<InputValues> &inputData, std::string fileName );
void exchange( const std::vector<BitcoinExchange> bitcoinData, std::vector<InputValues> &inputData );
void bitcoinExchange( std::string csvFileName, std::string txtFileName );
void printBitcoinExchange( const std::vector<InputValues> inputData );
bool isValidDate( const std::string &date );

#endif
