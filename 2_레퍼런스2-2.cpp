// 1_레퍼런스2-2
#include <iostream>



int main()
{
	int n = 0;
	int* p1 = &n;
	*p1 = 10;

    // 기계어 코드 비교
    //
	int& r1 = n;  // r1 내부 포인터 = &n
	r1 = 10;       // *(r1 내부 포인터  )=10

}
/*
* reference는 별명이라고 배우지만
* 많은 컴파일러가 내부적으로 포인터와 유사한 원리로 동작  > 단 최적화 하면 내부 원리인 포인터는 제거 될 수 있습니다
* 
* c++ 표준 무서 : 레퍼런스 별명
* > 컴파일러 원리상 상황에 따라 내부포인터가 만들어질 수 있다
* 
* 
main:
        push    rbp
        mov     rbp, rsp
        mov     DWORD PTR [rbp-20], 0

        lea     rax, [rbp-20]
        mov     QWORD PTR [rbp-8], rax

        mov     rax, QWORD PTR [rbp-8]
        mov     DWORD PTR [rax], 10

        lea     rax, [rbp-20]
        mov     QWORD PTR [rbp-16], rax

        mov     rax, QWORD PTR [rbp-16]
        mov     DWORD PTR [rax], 10
        mov     eax, 0
        pop     rbp
        ret
*/