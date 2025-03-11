// C++ 에서 함수 인자를 만드는 방법 : 반드시 외우고 규치대로 하세요
// 
// 1. 인자 값을 읽기만 하려고 한다 ( in parameter)
// -> 인자 타입이 primitive type 인 경우 (int, double) 
//		call by value
//		void foo(int value)
// 
// -> 인자 타입이 user define type 인 경우 (구조체, class)
//		const referene
//		void foo(const Rect& rc)
// 
// 
// 2. 인자 값을 수정하려고 합니다 (in out parameter)
//		포인터 사용 : void inc1( int* p) {++(*p);}
//		레퍼런스 사용: void inc2(int& r){++r;}
// 
// -> 레퍼런스 권장. 안전하고 가독성 좋은 코드
// 
// 구글에서 c++ core gouideline 검색 후 1st link > 
// C++ 창시자가 만들고 있ㅇ는 C++ 코딩에 대한 규칙 문서
//

void f1(int n) // call by value : 복사본
{
	int k = n;
}
/*
		mov     eax, DWORD PTR [rbp-20]
		mov     DWORD PTR [rbp-4], eax
*/
void f2(const int& n)
{
	// n 은 reference 지만, 컴파일러에서 내부적으로 포인터 사용하는 경우 대부분
	int k = n; // int* = (내부 포인터) , 내부 포인터로 값 가져오기
	//따라가서 이용, 메모리 참조 2번 발생
}
/*
		mov     rax, QWORD PTR [rbp-24]
		mov     eax, DWORD PTR [rax]
		mov     DWORD PTR [rbp-4], eax
*/
int main()
{
	int x = 100;
	f1(x);
	f2(x);
	
}
