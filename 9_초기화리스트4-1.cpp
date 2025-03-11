class Sample
{
	int n;
	const int c;  // const 는 초기값 없이 못만듬
public:
	/*
	Sample(int v)
	{
		c = v; // error, const 는 대입될 수 없음
	}
	*/
	
	Sample(int v) : c(v), n(0) // 초기화
	{ 
		n = 10;	
	}
};
int main()
{
	Sample(3);
}