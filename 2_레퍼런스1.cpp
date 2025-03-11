// 1_레퍼런스.cpp    57 page
// 기존 변수의 별명을 만드는 문법 > 일반적으로 레퍼런스변수가 아닌 레퍼런스라고 표현
#include <iostream>

int main()
{
	int n1 = 10;

	int& r1 = n1;

	r1 = 30;

	std::cout << n1  << std::endl; // ?
	
	std::cout << &r1 << std::endl;
	std::cout << &n1 << std::endl;

	// & 연산자의 3가지 용도
	int n = 3 & 4; // 비트 연산자
	int* p = &n;   // 주소 연산자
	int& r = n;     // 레퍼런스 연산자

	// 포인터 변수 초기화 vs 레퍼런스 초기화
	int* p = &n; // 포인터는 주소로 초기화
	int& r = n;  // 레퍼런스는 변수 이름으로 초기화
}



