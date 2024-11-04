#include "BitcoinExchange.hpp"

static int integerLen(int n)
{
    if (n == 0)
        return 1;
    if (n < 10 && n > 0)
        return 2;

    int len = 0;
    
    if (n < 0)
        throw std::runtime_error("Invalide input file.");
    
    while (n) {
        len++;
        n /= 10;
    }

    return len;
}

static int dateToInt(std::string& s)
{
    int res = 0;
    int buff = 0;
    std::stringstream ss(s);

    ss >> buff;
    if (integerLen(buff) != 4)
        throw std::runtime_error("Invalide input file.");
    res = (buff * 10000);
    if (ss.peek() != '-')
        throw std::runtime_error("Invalide input file.");
    ss.get();
    ss >> buff;
    if (integerLen(buff) != 2)
        throw std::runtime_error("Invalide input file.");
    res += (buff * 100);
    if (ss.peek() != '-')
        throw std::runtime_error("Invalide input file.");
    ss.get();
    ss >> buff;
    if (integerLen(buff) != 2)
        throw std::runtime_error("Invalide input file.");
    res += buff;

    return res;
}


BitcoinExchange::BitcoinExchange(std::string databaseFileName)
{
    std::ifstream databaseFile(databaseFileName);
    if (!databaseFile)
        throw std::runtime_error("Error: could not open file.");

    std::string tmp;
    std::stringstream ss;
    std::string key;
    float val = -1;
    if (std::getline(databaseFile, tmp)) {
        if (tmp != "date,exchange_rate")
            throw std::runtime_error("Error: Invalide database file.");
    }
    while (std::getline(databaseFile, tmp))
    {
        key="", val=-1, ss.clear(), ss.str("");

        ss << tmp;
        std::getline(ss, key, ',');
        if (key.size() != 10)
            throw std::runtime_error("Error: Invalide database file.");
        
        ss >> val;
        if (val < 0)
            throw std::runtime_error("Error: Invalide database file.");
        m_database[dateToInt(key)] = val;
    }
    if (m_database.size() < 1)
        throw std::runtime_error("Error: Invalide database file.");

}

void BitcoinExchange::evaluateInput(std::string inputFileName)
{
    std::string tmp;
    std::stringstream ss;
    std::string key;
    float val = -1;

    std::ifstream inputFile(inputFileName);
    if (!inputFile)
        throw std::runtime_error("Error: could not open file.");

    if (std::getline(inputFile, tmp)) {
        if (tmp != "date | value")
            throw std::runtime_error("Error: Invalide input file.");
    }
    else { // empty file
        throw std::runtime_error("Error: Invalide input file.");
    }

    while (std::getline(inputFile, tmp))
    {
        key="", val=-1, ss.clear(), ss.str("");

        ss << tmp;
        std::getline(ss, key, '|');

        if (key.size() != 11) {
            std::cerr << "Error: bad input => " << key << std::endl;
            continue ;
        }

        try {dateToInt(key);} catch(std::exception&) {
            std::cerr << "Error: bad input => " << key << std::endl;
            continue ;
        }

        ss >> val;
        if (val < 0 || val > 1000) {
            if (val < 0)
                std::cerr << "Error: not a positive number." << std::endl;
            else
                std::cerr << "Error: too large a number." << std::endl;
            continue ;
        }
    
        std::map<int, float>::iterator pos = m_database.lower_bound(dateToInt(key));
        if (pos != m_database.begin() && pos->first != dateToInt(key))
            pos--;

        std::cout << key << " => " << val << " = " << val * pos->second << std::endl;
    }

}


// Canonical Form
BitcoinExchange::BitcoinExchange() // init members here
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& src)
{
    *this = src;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& src)
{
    if (this == &src)
        return *this;

    std::map<int, float>::const_iterator itBegin = src.m_database.begin();
    std::map<int, float>::const_iterator itEnd = src.m_database.end();

    for (; itBegin != itEnd; itBegin++)
        m_database[itBegin->first] = itBegin->second;
    return *this;
}

BitcoinExchange::~BitcoinExchange()
{
}

