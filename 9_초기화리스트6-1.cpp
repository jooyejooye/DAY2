#include <iostream>
int g = 10;
// member field initialization
class Point
{
	int x; 
	int y = ++g;  // 절대 이렇게 쓰지 말 것, =0 와 같이 literal 초기화만 사용
public:
	Point() {}							// x(0) , y(++g)
	Point(int a) :  y{ a } {}         // x(0) , y(a)
};

int main()
{
	Point p1;
	Point p2(3);
};


// Zig 언어 : 보이는 대로 실행 된다
// 컴파일러 추가하거나 변경하지 않음
// 요즘 임베디드에서 뜨는 언어
// ㅇ


