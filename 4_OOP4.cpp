#include <iostream>

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;

	int getArea() { return (right - left) * (bottom - top); }
	void draw() { std::cout << "draw rect" << std::endl; }
};
int main()
{
	// #1. 용어 
	int n = 10;  // n : 변수 : 언제든지 바뀔 수 있음
	n = 20;
	Rect r = { 1,1,10,10 }; // r : 변수가 아닌 객체라고 함
	
	// 객체(object) : 세상에 존재하는 모든 것들 
	// int n의 n도 메모리에 존재 함 > 객체
	// 어떤 언어는 n도 변수가 아닌 객체 라는 용어 사용
	// 
	// C++ 관례
	// primitive 을 메모리에 생성한 것 : 변수
	// user define type을 메모리에 생성한 것 : 객체라고 부릅니다
	// 

	// #2. 메모리 layout
	Rect r1 = { 1,1,10,10 }; 
	Rect r2 = { 1,1,10,10 };
	// stack : 멤버 데이터만 객체당 한개씩 생성됨
	// 멤버 함수는 code 메모리에 한개씩만 존재
	// 
	std::cout << sizeof(Rect) << std::endl;    // 16
	std::cout << sizeof(r1) << std::endl;		// 16
	std::cout << sizeof(r2) << std::endl;		// 16
}
