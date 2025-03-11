// 1_레퍼런스2
#include <iostream>
// 61 page
// 
// call by reference ( 함수 인자로 reference 사용)은
// call by pointer와 동일하게 원본 수정 가능
// 
// 장점
// 1. 포인터 보다 가독성 좋다
// 2. 포인터 보다 안전 하다
// //

void inc1(int n)  { ++n; }
void inc2(int* p) { ++(*p); }
void inc3(int& r) { ++r; }

int main()
{
	int a = 1, b = 1, c = 1;

	inc1(a); // call by value a=1
	inc2(&b); // call by pointer b = 2 (b 증가)
	inc3(c); // call by reference : 레퍼런스는 변수 이름으로 초기화 한다, c=2

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
}
