#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{

public:
    Brain();
    Brain(const Brain& src);
    ~Brain();
    Brain& operator=(const Brain& src);

    void setIdea(std::string idea, int index);
    void showIdeas();

private:
    std::string m_ideas[100];

};

#endif
