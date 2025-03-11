#include <iostream>

class Point
{
	int x;
	int y;
public:
	// 생성자
	// 1. 클래스 이름과 동일한 멤버 함수
	// 2. 반환 타입을 표기하지 않고, 인자는 없어도 되고 있어도 된다
	// 3. 여러개 만들 수 있다
	// 4. 객체를 생성하면 반드시 생성자가 호출되어야 한다
	// 5. 사용자가 생성자를 한개도 만들지 않으면 컴파일러가 인자 없는 생성자 제공
	//		인자 없는 생성자를 default 생성자 라고 함 
	Point()             { x=0; y=0; std::cout << "Point()"         << std::endl; } // 1
	Point(int a, int b) { x=a; y=b; std::cout << "Point(int, int)" << std::endl; } // 2
	~Point() { std::cout << "bye\n"; }
};
int main()
{
	// 6. C+98 스타일 객체 생성
	Point p1;		
	Point p2(1, 2); 

	// 7. C+11 부터는 {} 도 사용 가능
	Point p3{ 1,2 };   
	Point p4 = { 1,2 }; // 구조체 초기화랑 동일한 코드, 근디 private 인디? > 생성자 호출로 실행 된 것
	// Point에 x,y 가 public 이고 생성자가 없다면 구조체 초기화 구문
	// Point에 생성자가 있다면 생성자 호출

	// 8. 객체가 생성되면 반드시 생성자를 호출해야 합니다
	std::cout << "8th: \n";
	Point arr1[5];								// 1번 생성자 5회 호출
	Point arr2[5] = { {1,2},{2,3} };				// 2번 생성자 2회, 1번 생성자 3번 호출

	std::cout << "9th: \n";
	// 9. malloc vs new
	//		malloc : 메모리 할당
	//		new : 객체 생성 (메모리 할당 + 생성자 호출 )
	// 
	// 파이썬
	// c = Car()  1. car 크기의 메모리 할당후 2. init 메소드 호출
	// Car.__new__
	// c.__init__
 
	Point* p;  // 포인터 변수 만듬, 객체 생성 아님

	p = (Point*)malloc( sizeof(Point) );    // 객체 생성 아님, 메모리 할당, 생성자 호출 안됨
	free(p);										// 메모리 해지, 소멸자 호출 안됨

	p = new Point;   // 생성자 호출됨, 디폴트 생성자
	delete p;				// 소멸자 호출

	p = new Point(1, 1); // 생성자 호출됨, 2번 생성자
	delete p;  // 소멸자 호출


}