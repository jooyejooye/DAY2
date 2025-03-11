// const_cast 
// => 객체의 상수성 제거

int main()
{
	int n = 10; // n은 상수 아님

	// int* -> const int*는 위험하지 않고 아주 좋은 코드'
	// 원본은 R/W 이지만 *p1을 통해서 읽기만 할것이다
	// 따라서 이 변환은 암시적 변환이 허용 됩니다.
	const int* p1 = &n; // 원본을 *p1을 통해서 읽기만 할것이다

	// const int* -> int* :위험함
	//int* p2 = p1; // const int * 형식 값을 사용해서 int * 엔터티 초기화 할 수 없음 : error
	int* p3 = (int*)p1; // ok : c style casting 대부분 성공

	//int* p4 = static_cast<int*>(p1); // error : C++ Style
	//int* p4 = reinterpret_cast<int*>(p1); // error : 다른 타입 주소 캐스팅은 가능하지만 상수성 제거 안됨
	int* p5 = const_cast<int*>(p1); // ok : 동일 타입의 상수성 제거를 위한 캐스팅

	/*
	C++ 언어에서 캐스팅이 필요하면
	1. 먼저 static_cast 사용해볼것
	2. 에러 > 원인 보고 : reinterpret_cast, const_Cast 중 택
	3. dynamic_cast  는 상속을 배워야 이해 가능
	*/
}
