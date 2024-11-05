#include "RPN.hpp"

static int doOperation(int operand1, int operand2, char op) {
    switch (op)
    {
        case '+':
            return operand1 + operand2;
        case '-':
            return operand1 - operand2;
        case '*':
            return operand1 * operand2;
        case '/':
            if (operand2 == 0)
                throw std::runtime_error("Invalid RPN expression: division by 0");
            return operand1 / operand2;
        default:
            throw std::runtime_error("Invalid RPN expression: invalid operator");
    }
}

static void sanitize(const std::string& s)
{
    std::string validCharacters = "+-/* ";
    for (std::string::const_iterator beg = s.begin(); beg != s.end(); beg++) {
        if (!std::isdigit(*beg) && validCharacters.find(*beg) == std::string::npos)
            throw std::runtime_error("Invalid RPN expression: sanitize failed");
    }
}

int RPN::evaluate(std::string expression)
{
    sanitize(expression);

    std::stack<int> buff;
    std::stringstream ss(expression);

    char tmp;
    ss >> tmp;

    if (!std::isdigit(tmp))
        throw std::runtime_error("Invalid RPN expression: first number isn't a digit");

    if (ss.peek() != ' ')
        throw std::runtime_error("Invalid RPN expression: first number isn't a digit");

    buff.push(tmp - '0');
    while (ss >> tmp) {

        if (ss.peek() != ' ' && ss.peek() != EOF)
            throw std::runtime_error("Invalid RPN expression: first number isn't a digit");

        if (std::isdigit(tmp)) {
            buff.push(tmp - '0');
        } else {
            if (buff.size() < 2)
                throw std::runtime_error("Invalid RPN expression: not enough operands for an operation");
            int n2 = buff.top();
            buff.pop();
            int n1 = buff.top();
            buff.pop();

            buff.push(doOperation(n1, n2, tmp));
        }
    }
    if (buff.size() != 1)
        throw std::runtime_error("Invalid RPN expression: remaining result invalide");
    
    return buff.top();
}

RPN::RPN() {}

RPN::RPN(const RPN&) {}

RPN& RPN::operator=(const RPN&) {}

RPN::~RPN() {}