// 5_생성자1.cpp - 80 page
#include <iostream>
#include <string>


class Person
{
private:
	std::string name;
	int  age;

public:
	Person(const std::string& n, int a)
	{
		name = n;
		age = a;
		std::cout << "생성자1 \n";
	}
	Person()
	{
		name = "no name";
		age = 0;
		std::cout << " 생성자 2 \n";
	}

	~Person() { std::cout << " 소멸자 \n"; }
	// 소멸자
		//	~클래스 이름 의 함수
		// 객체가 파괴될 때 호출
		// 반환값 없고 인자도 가질 수 없다
		// 오직 한개만 만들 수 있다

};

int main()
{

	Person p;
	Person p1("joo",11);
	Person p2;
	// <== p1, p2 파괴, 소멸자 호출됨 
}

