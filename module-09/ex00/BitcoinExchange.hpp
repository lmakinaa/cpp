#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <sstream>
#include <algorithm>

class BitcoinExchange
{

public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange& src);
    ~BitcoinExchange();
    BitcoinExchange& operator=(const BitcoinExchange& src);

    BitcoinExchange(std::string databaseFileName);
    void evaluateInput(std::string inputFileName);

private:
    std::map<int, float> m_database;

};

#endif
