#include <string>

int main()
{
	// #1. 초기화 vs 대입
	int a = 3;		// 초기화 : 변수 선언문에서 값을 넣는것
	int b;			// 대입 : 선언 후 에 값을 넣는것
	b = 3;

	// 초기화와 대입은 다른 개념이지만
	// primative type 의 경우 컴파일러 최적화를 통해서 거의 동일한 기계어 코드 생성됨


	// #2. user define 타입의 경우는 초기화와 대입은 완전히 다릅니다
	// 
	std::string s1( "hello"); // 초기화
								// 생성자 1회 호출로 값을 넣은 것

	std::string s2;		// 대입 : 디폴트 생성자 호출
	s2 = "hello";		    // s2.operator = ("hello") 라는 함수 호출 (5일차 배우는 함수)
							// 즉 2번의 함수 호출로 값을 넣은것
							// 

	// s1 s3 모두 hello 가지게 되지만 s1 이 더 효율적 > 대입보다 초기화가 좋다

	//3. const 랑 reference는 초기화는 되자만 대입은 안됨
	const int c1 = 10;
//	const int c2; // error 대입 안됨
//	c2 = 10;

}