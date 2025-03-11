#include <iostream>

// #1. 변수의 주소를 다른 타입 포인터로 캐스팅 하는 이유

int main()
{
	int ip = 0x64646464; // 100.100.100.100
	std::cout <<std::hex<< ip << std::endl;

	// 변수 ip 에서 마지막 바이트만 0x30 으로 하고 싶다.
	// # 1. 비트 연산자 사용
	// # ip 변수 주소를 char* 로 캐스팅 해서 접근
	//ip = 0x30;

	// c style casting 
	// char* p = (char*)&ip;
	
	// C++ 스타일 캐스팅
	// char* p = static_cast<char*>(&ip); // error. C++ 스타일 캐스팅
	// 이런 용도로 사용할때 
	char* p = reinterpret_cast<char*>(&ip);

	*p = 0x30;
	*(p + 2) = 0x10;
	std::cout << std::hex << ip << std::endl;

}

