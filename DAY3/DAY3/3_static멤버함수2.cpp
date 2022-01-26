
class Test
{
	int idata;
	static int sdata;
public:
	// 다음중 에러를 고르세요
	// static 멤버 데이터 : 객체가 없어도 메모리에 있다. (전역변수와 유사)
	// static 멤버 함수   : 객체 없이 호출가능. 
	//						즉 객체가 없어도 호출해야하기 때문에 ! 인스턴스 변수, 함수가 내부에 있으면 안됨

	void f1()  // 이함수를 호출 했다는 것은 객체가 있다는 의미
			   // 객체가 있어야만 호출 가능하므로!
	{
		idata = 10; // ok
		sdata = 10; // ok
		f2();		// ok

	}

	// 핵심 static 멤버 함수에서는 static 멤버(데이터, 함수)만 접근 가능합니다.
	// 116 page 위쪽
	static void f2()
	{
		idata = 10; // error
		sdata = 10; // ok .. sdata 는 객체가 없어도 메모리에 있다.
		f1();		// error
	}
};

int Test::sdata = 0;

int main()
{
	Test::f2();

}