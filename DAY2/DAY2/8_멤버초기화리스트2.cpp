
// 멤버 초기화 리스트가 반드시 필요한 경우 1. 87page
class Test
{
	int a;
	int b;
	const int c;

public:
	
	Test(int aa, int bb, int x) : a(aa), b(bb), c(x) // ok. 대입이 아닌 진짜 초기화
	{
//		c = x; // 초기화가 아닌 대입입니다.
				// 상수는 대입될수 없습니다. error
	}

};

int main()
{

	Test a(1,2,3);
}