
#include <iostream>

// 객체 지향 프로그래밍의 핵심 #2. 구조체에 함수 넣자
//		type 을 만들 떄 상태를 나타내는 데이터 & 상태 가직 연산 수행하는 함수를 묶어서 type만들자
//		C 구조체     : 구조체 안에 함수 넣을 수 없음
//		C++ 구조체 : 구조체 안에 함수 넣을 수 있음
// 
// 함수를 구조체 안에 넣을 때 장점
//		1. 데이터를 함수 인자로 전달할 필요 없음
//		2. 다양한 구조체(class) 관련 문법을 통해서 사용하기 쉬움
//			안전한 타입 설계 가능
// 

struct Rect
{
	// 멤버 데이터 (field)
	int left;
	int top;
	int right;
	int bottom;

	// 멤버 함수 (method)
	//		특징: 함수 안에서 멤버 데이터에 직접 접근 가능
	// 

	
	int getArea()
	{
		return (right - left) * (bottom - top);
	}

	void draw()
	{
		std::cout << "draw rect" << std::endl;
	}

};



int main()
{
	Rect rc = { 12,14,2,5 };
	//int n1 = getRectArea(rc);
	//drawRect(rc);
	rc.draw(); // 객체지향 스타일 : rc 에게 면적좀 알려달라고 요청
	int n2 = rc.getArea();
}