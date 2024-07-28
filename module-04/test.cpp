#include <iostream>

class B
{
	public:
	int d;
	B() { d = 5;}
};

class D : public B
{
	public:
	int d;
	D() { d = 3;}
};

int main()
{
	B* as = new D;
	std::cout << D::as->d;
}
