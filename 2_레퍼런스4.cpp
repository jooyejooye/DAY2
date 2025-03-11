// 1_레퍼런스4.   65 page
#include<iostream>
int x = 0;
int foo()  { return x; } // x 가 아닌 x값 0 return
int& goo() { return x; } // x값이 아닌 x의 별명 return

int main()
{
	int v1 = 10, v2 = 20;
	v1 = 20;	 // ok ;		 v1 : lvalue : 등호 왼쪽 올 수 있는 표현식
	//20= v1	 //errror		 20 : rvalue : lvalue 가 될 수 없는 것

//	foo() = 20;		// "0 = 20" 의 의미
	goo() = 20;		// "x = 20" 의 의미
	std::cout << x << std::endl; //20
}
