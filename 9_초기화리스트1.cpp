// 6_초기화리스트1    89page ~
#include <iostream>

//다른 언어에는 없는 c++ 만의 문법, 98부터 있음
// 

class Point
{
	int x, y;
public:
	// 생성자에서 멤버 데이터를 초기화 하는 2가지 방법
	Point(int a, int b) : x(a), y(b) // 1. member initializer list, 좋은 방법
	{
		// 2. {} 안에서 = 연산자 사용 , 나쁜 방법
		x = a; 
		y = b; 
	}
};
int main()
{
	Point pt{ 0, 0 };
}




