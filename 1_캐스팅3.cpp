#include <iostream>

// reinterpret_cast 
// 1. 서로 다른 타입의 주소 변환
// 2. 정수 <=> 포인터 변환

int main()
{
	double d = 3.4;
	
	// double* -> int* 변환 : c casting 은 문제 없음, c는 방법이 1개라 그냥 허용
	int* p1 = (int*)&d;

	// c++ style
	// int* p2 = static_cast<int*>(&d); error

	int* p3 = reinterpret_cast<int*>(&d); //ok

	// 2. 정수를 포인터로
	// int* p4 = 1000; // error
	int* p4 = (int*)1000; // c style casting
	//int* p5 = static_cast<int*>(1000); // error > C++ Style
	int* p5 = reinterpret_cast< int*>(1000);

	//3. reinterpret_cast 는 위 용도 외에는 사용 불가
	// double > int
	int n1 = d; //ok 하지만 경고
	//int n2 = reinterpret_cast<int>(d); // error
	int n2 = static_cast<int>(d);


}

