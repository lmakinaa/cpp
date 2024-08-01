#include "Serializer.hpp"

//void f()
//{
//	system("leaks test");
//}

int main()
{
	//atexit(f);
	Data* test = new Data;

	test->x = 15;
	test->y = 25;


	std::cout << "- Before serialize:\n\ntest:\t" << test->x << ", " << test->y << '\n';
	uintptr_t intPtr = Serializer::serialize(test);
	
	Data* otherTest = Serializer::deserialize(intPtr);
	std::cout << "\n- After deserialize:\n\notherTest:\t" << otherTest->x << ", " << otherTest->y << '\n';

	otherTest->x = 35;
	otherTest->y = 55;

	std::cout << "test:\t\t" << test->x << ", " << test->y << '\n';
	std::cout << "otherTest:\t" << otherTest->x << ", " << otherTest->y << '\n';


	delete otherTest;
}
