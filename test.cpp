#include <iostream>

class Point3d
{
private:
	int m_x;
	int m_y;
	int m_z;
	
public:
	void setValues(int x, int y, int z)
	{
		m_x = x;
		m_y = y;
		m_z = z;
	}

	void formatedPrint()
	{
		std::cout << '<' << m_x << ", " << m_y << ", " << m_z << '>';
	}
	
	bool isEqual(Point3d& p)
	{
		return (m_x == p.m_x && m_y == p.m_y && m_z == p.m_z);
	}
	const int& getX()
	{
		const int& res = m_x;
		return (res);
	}
};

class Tdd
{

public:
    Tdd() {};
    Tdd(const Tdd& src);
    Tdd& operator=(const Tdd& src);

};

    Tdd::Tdd(const Tdd& src)
    {
        std::cout << "copy called\n";
        *this = src;
    }
    Tdd& Tdd::operator=(const Tdd& src)
    {
        std::cout << "assignement called\n";
        if (this == &src)
            return (*this);
    return *this;    
    }


//int main()
//{
//	Point3d point1;
//	point1.setValues(1, 2, 3);
//	const int& d = point1.getX();
//	std::cout << point1.getX() << d << std::endl;

//	return 0;
//}

#include <iostream>
#include <iomanip>
#include <string>

int main() {
	Tdd sdf;

    return 0;
}
