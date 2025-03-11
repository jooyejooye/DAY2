#include <iostream>

// member field initialization
namespace before
{
	class Point
	{
		// C++ 11 부터는 아래 코드도 가능합니다
		int x = 0;  // 좋은 코드
		int y{ 0 };  // 좋은 코드
	public:
		Point() {}
		Point(int a) : y{ a } {}
	};
}



// 원리 : 컴파일러가 위 코드를 아래 처럼 변경합니다
class Point
{
	// C++ 11 부터는 아래 코드도 가능합니다
	int x; // = 0;  
	int y; //{ 0 };  
public:
	// 위 초기값을 보고 모든 생성자를 아래처럼 변경
	Point(): x(0), y(0) {}
	Point(int a) : x(0), y{ a } {}
};

int main()
{
	Point();
}




