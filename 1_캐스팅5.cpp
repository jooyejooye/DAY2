int main()
{
	const int c = 10;

	// c의 주소를 double* 에 담고 싶습니다.
	//double* p = &c; // ?
	double* p1 = (double*) & c;
	
	// c style cast
	// double* p0 =static_cast<double*>(&c); // error
	int* _ = const_cast<int*>(&c); // 상수성 제거
	double* p2 = reinterpret_cast<double*>(_); // 동일 타입만 가능

	double* p3 = reinterpret_cast<double*>(const_cast<int*>(&c));
	// const int* -> int* : 상수성 제거 후
	// int* -> double* : 변경
}





