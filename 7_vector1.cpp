// 6_vector1
#include <iostream>

int main()
{
	// 1. 사용자 에게 2개의 정수를 입력 받고 싶습니다.
	//    그런데 입력된 값은 나중에 사용하기 위해 반드시 보관되어야 합니다
	int n1, n2;
	std::cin >> n1 ;
	std::cin >> n2;
	std::cout << "n1: " << n1 << "\nn2: " << n2 << std::endl;


	// 2. 이번에는 5개를 입력 받고 싶습니다. 
	int arr[5];
	for (int i = 0; i < 5; ++i)
	{
		std::cin >> arr[i];
	}
	
}