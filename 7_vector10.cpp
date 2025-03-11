#include <iostream>
#include <vector>
// C++ 표준 vector 있음
// 원리는 우리가 만든 것과 유사
// 
// STL : Standard template library
//		  C++ 표준 라이브러리가 대부분 template 이라서 이렇게 부름
// 
// 

int main()
{
	std::vector<int> v1(4, 0);
	v1[0] = 9;
	v1.at(1) = 8;
	v1.resize(8);
	v1.push_back(0); // 이순간 size 는 9개 , 하지만 메모리 자체  크기는 g++ 2배, vc 1.5배

	std::cout << v1.size() << std::endl;

	std::cout << v1.capacity() << std::endl;
}