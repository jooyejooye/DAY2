// 4_접근지정자1 - 76page
#include <iostream>
#include <string>

// 캡슐화( Encapsulation)
//		객체의 상태(멤버데이터) 를 private 에 놓고
//		외부에 잘못된 사용으로 부터 객체가 불안해 지는 것을 막는다
//		객체의 상태는 잘 정의된 멤버 함수를 사용해서만 변경 가능
// 
// 접근 지정자 : private, public
//		대부분 객체지향 언어가 지원하는데, 파이썬이 지원 안함
// ㅇ

struct Person
{
private:					// private 접근 지정자
	std::string name;	// 이 영역에 멤버는 멤버 함수에서만 접근 가능
	int  age;		

public: // 이영역의 멤버는 어디에서도 접근 가능
	void set_age(int a)
	{
		if(a>0 && a<150)
			age = a;
	}

};

int main()
{
	Person p;

	p.set_age(-10) ; 

				 
}
