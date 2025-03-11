// 4_접근지정자1 - 76page
#include <iostream>
#include <string>

// struct : 접근 지정자 default : public
// class  : 접근 지정자 default : private
// 
// C++ : Class & struct 차이점 오직 하나 > 접근지정자 default 값이 다름
//		C#, Java : class struct 매우 다름
//		Rust : C++ 대체 한다고 주장, Class 없음, struct 만으로 모든 것을 만듬
// 

class Person
{
//private:					
	std::string name;	
	int  age;

public: // 이영역의 멤버는 어디에서도 접근 가능
	void set_age(int a)
	{
		if (a > 0 && a < 150)
			age = a;
	}

};

int main()
{
	Person p;

	p.set_age(-10);
	


}
