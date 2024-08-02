#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
T min(T a, T b)
{
	if (a < b)
		return a;
	return b;
}

// the instanciated function from the above template (with int type) will look like this:

//template<>
//int max<int>(int x, int y) // the generated function max<int>(int, int)
//{
//    return (x < y) ? y : x;
//}

template<typename T>
T max(T a, T b)
{
	if (a > b)
		return a;
	return b;
}

template<typename T>
void swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}


#endif