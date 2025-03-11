#include <iostream>

int main()
{
	int cnt = 0;
	std::cout << "학생수는 >> ";
	std::cin >> cnt;

	// 3. 입력된 학생수 만큼 다시 점수를 입력 받아야 합니다.
	//int score[cnt];     // array를 만들때 크기를 변수로 둘 수 없다 
							 // g++ 등 일부 컴파일러는 가능, c++ 표준에 따르면 에러
							
							 
	// 실행 시간 결정된 값으로 메모리 할당하려면 " 동적 할당" 밖에 안됨
	// C :		malloc / free
	// C++   new / delete
	// 

	int* score = new int[cnt];
	for (int i = 0; i < cnt; i++)
	{
		std::cin >> score[i];
	}
	delete[] score;
	
}