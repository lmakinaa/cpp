#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>


template<typename T>
class Array
{

public:
    Array();
    ~Array();
    Array(unsigned int n);
    Array(const Array& src);
    Array& operator=(const Array& src);

    T& operator[](unsigned int i) const;
    unsigned int size() const;

private:
    T* m_array;
    unsigned int m_size;

};


template<typename T>
Array<T>::Array()
    : m_array (NULL)
    , m_size (0)
{
    try {
        m_array = new T[m_size];
    }
    catch (std::bad_alloc& e) {
        throw -1;
    }
}

template<typename T>
Array<T>::Array(unsigned int n)
    : m_array (NULL)
    , m_size (n)
{
    try {
        m_array = new T[m_size];
    } catch (std::bad_alloc& e) {
        throw -1;
    }
}

template<typename T>
Array<T>::Array(const Array& src)
    : m_array (NULL)
    , m_size (src.m_size)
{
    try {
        m_array = new T[m_size];
    } catch (std::bad_alloc& e) {
        throw -1;
    }

    *this = src;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& src)
{
    if (this == &src)
        return *this;
    m_size = src.m_size;
    for (unsigned int i = 0; i < src.m_size; i++) {
        m_array[i] = src.m_array[i];
    }

    return *this;
}

template<typename T>
T& Array<T>::operator[](unsigned int i) const
{
    if (i >= m_size)
        throw std::out_of_range("index out of bound of the array");
    return m_array[i];
}

template<typename T>
unsigned int Array<T>::size() const
{
    return m_size;
}

template<typename T>
Array<T>::~Array()
{
    delete[] m_array;
}

#endif
