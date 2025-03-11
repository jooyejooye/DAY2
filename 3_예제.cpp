#include <iostream>

// Swap를 만들어 봅시다.
// 1. C 버전
void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

// 2. C++ 버전
//		call by reference : pointer 대신 reference 사용
//		templete : 함수가 아닌 함수 만드는 틀 ( templete ) 사용
//		 inline : 성능 향상
//		이름 충돌을 막기 위해 namespase 안에서 사용
//		이미 표준에 std::swap 이  있음 : <algorithm>
#include<algorithm>
namespace Utils
{
	template<typename T>
	inline void Swap(T& a, T& b)
	{
		T tmp = a;
		a = b;
		b = tmp;
	}
}


int main()
{
	int x = 3, y = 2;
	Swap(&x, &y);
	std::cout << x << std::endl;
	std::cout << y << std::endl;

	double xx = 2.2, yy = 3.3;
	Utils::Swap(xx, yy);
	std::cout << xx <<"  " << yy << std::endl;

	std::swap(xx, yy);
	std::cout << xx << "  " << yy << std::endl;
}



