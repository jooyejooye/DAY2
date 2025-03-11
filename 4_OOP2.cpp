// 3_OOP1 - 72page
#include <iostream>

// 객체 지향 프로그래밍의 핵심 #1. 필요 타입 먼저 설계
struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};

// 복사본에 대한 오버헤드 큼 : const reference
int getRectArea(const Rect& s)
{
	return (s.right - s.left) * (s.bottom - s.top);
}

void drawRect(const Rect& s)
{
	std::cout << "draw rect" << std::endl;

}

int main()
{
	Rect rc = { 1,1,2,5 };
	int n1 = getRectArea(rc);
	drawRect(rc);
}