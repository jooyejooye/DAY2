#include <iostream>

// 객체지향 : 필요한 타입을 먼저 설계 하자.!!
// 
// 배열 : 실행 중에 크기 변경 불가
// 
// 크기 변경이 가능한 "타입" 을 만들어 봅시다
//		동적 배열, vector라고 함 (파이썬에서는 list라고 함)
// d

class Vector
{

};

int main()
{
	Vector v(4); // 크기가 4인 동적 배열

	v.resize(8); // 크기를 8으로!
}