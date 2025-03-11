// 5_생성자1.cpp - 80 page
#include <iostream>
#include <string>

// 1. 모든 멤버 데이터가 public에 있으면
//		C의 구조체와 동일
//		따라서 아래처럼 구조체 조기화 구문으로 초기화 가능
// 
class Person
{
public:
	std::string name;
	int  age;
};

class Person2
{
private:
	std::string name;
	int  age;
public:
	void init(const std::string& n, int a)
	{
		name = n;
		age = a;
	}
};

class Person3
{
private:
	std::string name;
	int  age;
public:
	Person3(const std::string& n, int a)
	{
		name = n;
		age = a;
	}

};

int main()
{
	
// 1. 모든 멤버 데이터가 public에 있으면
//		C의 구조체와 동일
//		따라서 아래처럼 구조체 조기화 구문으로 초기화 가능
	Person p = { "kim", 28 };
// 2. 멤버 데이터가 private에 있다면 위처럼 초기화 안됨
//		멤머 함수로 초기화 필요

	Person2 p2; // 초기화 되지 않은 객체를 먼저 만들고 
	p2.init("jooye", 22); // 초기화 함수 호출


	// 3. 위 코드 보다는 객체를 생성하면서 초기화 하는 것이 좋음
	Person3 p3("kim", 33);  // 생성자 라는 함수가 호출됩니다.

}



