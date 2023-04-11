#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <iomanip>
#include <map>

struct BitcoinExchange
{

  std::map<std::string, double> _map;
};

void          bitcoinExchange( std::string csvFileName, std::string txtFileName );
void          readBitcoinData( BitcoinExchange &bitcoinData, std::string fileName );
void          readInputDataAndExchange( BitcoinExchange &bitcoinData, std::string fileName );
double        exchangeRate( BitcoinExchange bitcoinData, std::string date );
std::string   pastDate( std::string date );
bool          isValidDate( const std::string &date );

#endif
