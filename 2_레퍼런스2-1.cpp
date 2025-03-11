// 1_레퍼런스2-1
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


int main()
{
	int* p2; // ok 초기화 생략 가능
	int* p3 = nullptr; // null 초기 가능

	//int& r2; // reference 초기값 필요
	//int& r3 = nullptr; // error 포인터 아님

}

void f1(int* p)
{
	if (p != nullptr)
		*p = 10;
}
f1(nullptr); // 이코드 가능함로 위의 if 문 필요

void f2(int& r)
{
	r = 10;
}
f2(nullptr); // error : 반드시 인자로 유호한 변수만 가능합니다.