#include <iostream>
// step5 : T 뿐만 아니라 다른 타입도 보관 가능하게
//		클래스가 아닌 클래스를 만드는 틀(TEMPLATE)을 설계
//		함수 뿐만 아니라 클래스도 탬플릿으로 만들 수 있음
template<typename T>
class Vector
{
private:
	T* ptr;
	int sz;
public:
	Vector(int size, T value)
	{
		sz = size;
		ptr = new T[sz];
		for (int i = 0; i < sz; i++) { ptr[i] = value; }
	}
	~Vector() { delete[] ptr; }

	T& at(int idx) { return ptr[idx]; }

	void resize(int newsize)
	{
		if (newsize > sz) // 커지는 경우
		{
			T* tmp = new T[newsize];
			memcpy(tmp, ptr, sizeof(T) * sz);
			delete[] ptr; // ptr을 제거하는게 아니라 ptr이 가리키는 메모리 제거
			ptr = tmp;
			sz = newsize;
			std::cout << "resize " << sz <<"\nsize of: "<< sizeof(T) << std::endl;
		}
		else // 작아지는 경우 > 복습 할 떄 보세요.
		{
			sz = newsize;
		}
	}
	int size() { return sz; }
	bool empty() { return sz == 0; }
};

int main()
{
	Vector<double> v(4, 0.8);
	//v.at(2) = 10;
	std::cout << v.at(0) << std::endl;
	v.resize(10);
	std::cout << v.size() << std::endl;

}