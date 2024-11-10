#include "PmergeMe.hpp"

std::vector<int> jacobsthalGen(int vecSize) {
    int size = vecSize + 1;
    std::vector<int> jacob(2);

    if (size == 3)
        return (jacob[0] = 3, jacob[1] = 2, jacob);

    // Generating the jacobsthal sequence
    jacob[0] = 0, jacob[1] = 1;
    for (int i = 2; jacob[i - 1] < size; i++)
        jacob.push_back(jacob[i - 1] + (2 * jacob[i - 2]));

    // Filling the remaining indexes
    std::vector<int> newJabocSeq;
    for (size_t i = 3; i < jacob.size(); i++) {
        newJabocSeq.push_back(jacob[i]);
        for (int beg = jacob[i] - 1, end = jacob[i - 1]; beg > end; beg--)
            newJabocSeq.push_back(beg);
    }
    return newJabocSeq;
}

void PmergeMe::sortVector(std::vector<int>& v)
{
    if (v.size() < 3) {
        if (v.size() == 1) return;
        if (v.size() == 2){
            if (v[0] > v[1]) std::swap(v[0], v[1]);
        }
        return ;
    };

    std::vector<int>::iterator it;
    std::vector<int>::iterator j;
    int solo = -1;
    if (v.size() % 2) {
        solo = v.back();
        v.pop_back();
    }

    std::vector<int> mainVec((v.size() / 2) + 1);
    std::vector<int> pendVec((v.size() / 2) - 1);

    // merge sort
    for (it = v.begin(); it < v.end(); it += 2) {
        if (*it < *(it + 1))
            std::swap(*it, *(it + 1));
    }

    //insertion sort
    for (it = v.begin() + 2; it < v.end(); it += 2) {
        int k = *it;
        int kp = *(it + 1);
        std::vector<int>::iterator j = it - 2;

        for (; j >= v.begin() && k < *j; j -= 2) {
                *(j + 2) = *j;
                *(j + 3) = *(j + 1);
        }
        *(j + 2) = k;
        *(j + 3) = kp;
    }

    int tmp1 = 0, tmp2 = 0;
    for (it = v.begin(); it < v.end(); it += 2) {
        
        if (it == v.begin())
            mainVec[tmp1] = (*(it + 1)), tmp1++;
        else
            pendVec[tmp2] = (*(it + 1)), tmp2++;
        mainVec[tmp1] = (*it), tmp1++;
    }

    std::vector<int> jacob = jacobsthalGen(pendVec.size());

    // Inserting the pend vec elements into the main vec
    for (it = jacob.begin(); it != jacob.end(); it++) {
        if (*it > (int)pendVec.size() + 1)
            continue ;
        j = std::lower_bound(mainVec.begin(), mainVec.end(), pendVec[*it - 2]);
        if (j == mainVec.end())
            mainVec.push_back(pendVec[*it - 1]);
        else if (j == mainVec.begin()) {
            std::vector<int> tmp;
            tmp.push_back(pendVec[*it - 2]);
            tmp[0] = pendVec[*it - 2];
            tmp.insert(tmp.begin() + 1, mainVec.begin(), mainVec.end());
            mainVec = std::move(tmp);
        } else {
            mainVec.insert(j, pendVec[*it - 2]);
        }
    }
    if (solo != -1) {
        j = std::lower_bound(mainVec.begin(), mainVec.end(), solo);
        mainVec.insert(j, solo);
    }
    
    v = std::move(mainVec);
}

bool PmergeMe::isValidNumber(std::string str)
{
    std::string::iterator it = str.begin();
    while (it != str.end() && std::isdigit(*it))
        it++;
    return (!str.empty() && it == str.end());
}

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe&) {}

PmergeMe& PmergeMe::operator=(const PmergeMe&) {return *this;}

PmergeMe::~PmergeMe() {}
