#include <iostream>

int main()
{
	// 4. 사용자가 -1을 입력할때 까지 계속 입력 받고 싶습니다.
	//   단, 입력된 모든 값은 보관되어 있어야 합니다.

	int n = 0;

//	int score[4]; // 이렇게 만들면 필요 없을 떄 제거 못함
	int size = 4;
	int* score = new int[size];
	int count = 0;
	
	while (1)
	{
		std::cin >> n;

		if (n == -1)
			break;
		score[count++] = n;

		if (size == count)
		{
			// 1. 새로운 메모리(버퍼) 할당
			int* temp = new int[size * 2];

			// 2. 기존 버퍼 내용 > 새로운 버퍼에 복사
			memcpy(temp, score, sizeof(int) * size);
			// score가 가리키는 메모리의 내용을
			// temp 가 가리키는 메모리로 sizeof(int) * size 만큼 복사

			// 3. 기존 작은 버퍼 제거
			delete[] score;

			// 4. score 가 새로운 버퍼를 가리키도록
			score = temp;

			// 5. 크기 변수 변경
			size = size * 2;

			// temp 는 {} 벗어날 떄 자동 파괴
			std::cout << "out\n";
		}
	}

	std::cout << "count: " << count << std::endl;
	std::cout << "size: " << size;
}