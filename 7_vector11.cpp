#include <iostream>
// C언어
//		Vector라는 타입 없음
//		동적 배열 필요하면 vector3.cpp 처럼 매번 만들어야함
// 
// C++, java, C# : 모두 Vector 있음
// python : list 있음
//

#include<vector>

int main()
{
	std::vector<int> v; // 크기가 0 인 vector
	int n = 0;

	while (1)
	{
		std::cin >> n;
		if (n == -1)
			break;
		v.push_back(n);
	}
	std::cout << "count: " << v.size() << std::endl;
	std::cout << "size: " << v.capacity();
}
/*
위 코드가 vector3.cpp 와 동일한 기능 수행
std::vector 타입이 있으므로 vector3.cpp 보다 훨씬 간결
*/