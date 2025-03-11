#include <iostream>
#include <string> // 이거 있어야지 string 사용 가능

int main()
{
	// #1. C 언어의 문자열
	// C 언어는 문자타입(char) 만 있고, 문자열 타입 없음
	// 문자 타입의 배열이나 포인터 사용
	char cs1[] = "hello";
	char cs2[] = "hello";


	// 단점 : 문자열 관련 코드가 직관적이지 않음
	if (cs1 == cs2) {} // 문자열 비교가 아닌 배열 주소 비교 
	if (strcmp(cs1, cs2)==0) {} // 이코드가 문자열 비교

	// #2. C++ 언어의 문자열 타입
	// std::string 이라는 타입 이미 있음

	std::string s1 = "hello";
	std::string s2 = "hello";

	auto s3 = s1 + s2;

	if(s1==s2){ std::cout << "same"; }

	if (s2 > s1) {
		std::cout << "big";
	}

	auto n = s1.size(); //5
}