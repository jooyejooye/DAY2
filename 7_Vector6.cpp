#include <iostream>

class Vector
{
private:
	// 1. 
	int* ptr;
	int sz;
public:
	Vector(int size, int value)
	{
		sz = size;
		ptr = new int[sz];
		for (int i = 0; i < sz; i++){ptr[i] = value;	}
	}
	~Vector(){ delete[] ptr; }

	int& at(int idx){		return ptr[idx];	}

	void resize(int newsize)
	{
		if (newsize > sz) // 커지는 경우
		{
			int* tmp = new int[newsize];
			memcpy(tmp, ptr, sizeof(int) * sz);
			delete[] ptr; // ptr을 제거하는게 아니라 ptr이 가리키는 메모리 제거
			ptr = tmp;
			sz = newsize;
			std::cout << "resize " << sz << std::endl;
		}
		else // 작아지는 경우 > 복습 할 떄 보세요.
		{
			sz = newsize;


		}
		

	}
};

int main()
{
	Vector v(4, 0);
	v.at(2) = 10;
	std::cout << v.at(2) << std::endl;
	v.resize(8);
}