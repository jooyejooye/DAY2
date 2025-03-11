#include <iostream>


class Vector
{
private:
	// 1. 동적 할당 된 메모리를 관리하려면 아래 2개 데이터 필요
	int* ptr;
	int sz;
public:
	Vector(int size, int value)
	{
		sz = size;
		ptr = new int[sz];
		for (int i = 0; i < sz; i++)
		{
			ptr[i] = value;
		}
	}
	~Vector()
	{
		delete[] ptr
	}
};

int main()
{
	// 2. 아래 한줄 실행 시 메모리 모양 생각해보기
	Vector v(4,0); 

}