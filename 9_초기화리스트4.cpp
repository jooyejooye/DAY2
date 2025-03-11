#include <string>

class Person1
{
	std::string name;
	int age;
public:
	Person1(const std::string& n, int a) 
	{
		// call std::string::string() -> 즉  name에 대해서 디폴트 생성자 호출
		name = n;
		// 대입 > 2번의 함수 호출로 name 에 값을 넣은 것
		// std::string::string
		// name = n 의 의미
		age = a;
	}
};

Person1 p1{ "kim", 20 };

class Person2
{
	std::string name;
	int age;
public:
	Person2(const std::string& n, int a) : name{n}, age{a}
	{
		// call std::string::string(n) : 즉 인자 한개 생성자 호출, 생성자 호출 1회로 초기화 한 것

		// 제어문이 필요하다면 선언 후 사용
	}
};

Person2 p2{ "kim", 20 };

/*
결론 : 생성자에서 멤버 초기화 할 때 : 
	멤버 초기화 리스트에서 하는 것이 빠름
	대입이 아닌 진짜 초기화 ( 생성자로 초기화 한 것)

*/

class Person3
{
	std::string name;
	int age;
public:
	Person3(const std::string& n, int a) : name{ n }, age{ a }
	{
		// call std::string::string(n) : 즉 인자 한개 생성자 호출, 생성자 호출 1회로 초기화 한 것

		// 제어문이 필요하다면 선언 후 사용
		 age = a; 
	}
};


int main() {
	Person3 p3{ "kim", 200 };

}