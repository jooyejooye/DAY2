#include <iostream>

class Point
{
public:
	int x, y;

	// member initializer list 는 대입이 아니라 초기화
	// 초기화는 멤버 데이터가 놓인 순서대로 수행됨
	// 즉 뒤에 코드 순서가 아님
	//         (2)    (1)  <- 이순서로 실행
	Point() : y(0), x(y)  // 이부분 적을 떄 member 가 놓인 순서대로 작성
	{
	}
};
int main()
{
	Point pt;

	std::cout << pt.x << std::endl; // ?
	std::cout << pt.y << std::endl; // ?
}




