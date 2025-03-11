// 1_레퍼런스3. 63 page
struct Data
{
	int buff[1024];
};


// call by value : 복사본 생성 
// 원본 변경하지 않을 것이라는 약속의 의미
// 함수가 완벽히 분리 되므로 안전
void foo(int n)
{

}
// 크기가 큰 타입을 인자로 받을 때
// call by value 가 아닌 const referene 로 하는 것이 좋음
// 
// Data& : 복사본 만들지 않겠다 (메모리 오버헤드 제거)
// 변경하지 않겠다는 약속 ( 안전성 향상)
// 
//  Data 크기가 매우 큼, 복사본의 오버헤드 너무 큼 > ref 쓰자 + const
void goo(const Data& data) 
{
	data.buff[0] = 10; // error const 임으로
}
int main()
{
	int x = 100; 
	// foo 는 전달된 인자의 x 를 절대 변경하면 안된다.
	foo(x);
	Data data1;
	goo(data1);
}
