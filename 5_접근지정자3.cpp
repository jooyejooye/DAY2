// 4_접근지정자1 - 76page
#include <iostream>
#include <string>

// C++ 의 접근지정자

class Person
{
private:					
	std::string name;
	int  age;

public: // 이영역의 멤버는 어디에서도 접근 가능
	void set_age(int a)
	{
		if (a > 0 && a < 150)
			age = a;
	}
private:
};


// C++ 제외 다른 언어들은 멤버 마다 접근 지정자 표기
class Person
{
private std::string name;
private int  age;

public void set_age(int a)
	{
		if (a > 0 && a < 150)
			age = a;
	}
private:
};
