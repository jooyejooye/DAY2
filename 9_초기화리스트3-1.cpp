#include <iostream>

class Point
{
	int x = 0, y = 0;
public:
//	Point() { std::cout << "Point()" << std::endl; }
	Point(int a, int b) { std::cout << "Point(int, int)" << std::endl; }
};

class Rect
{
	Point ptFrom;
	Point ptTo;
public:
	/*
	Rect() // Point에 디폴트 생성자가 없으므로 아래 코드는 에러
	{
		std::cout << "Rect()" << std::endl;
	}
	*/
	// 해결책 : 맴버 초기화 리스트에 위치에 어떤 형태로 생성자를 호출할 지 표기

	Rect() : ptFrom(0,0) , ptTo(1,2) 
	{

		// call Point::Point(0,0) <- ptfrom
		// call Point::Point(1,2) <- ptTO
		std::cout << "Rect()" << std::endl;
	}
};
int main()
{
	Rect r;  // call Rect::Rect() 호출
}




