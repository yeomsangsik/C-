
class Test
{
	int idata;
	static int sdata;
public:
	// ������ ������ ������
	// static ��� ������ : ��ü�� ��� �޸𸮿� �ִ�. (���������� ����)
	// static ��� �Լ�   : ��ü ���� ȣ�Ⱑ��. 
	//						�� ��ü�� ��� ȣ���ؾ��ϱ� ������ ! �ν��Ͻ� ����, �Լ��� ���ο� ������ �ȵ�

	void f1()  // ���Լ��� ȣ�� �ߴٴ� ���� ��ü�� �ִٴ� �ǹ�
			   // ��ü�� �־�߸� ȣ�� �����ϹǷ�!
	{
		idata = 10; // ok
		sdata = 10; // ok
		f2();		// ok

	}

	// �ٽ� static ��� �Լ������� static ���(������, �Լ�)�� ���� �����մϴ�.
	// 116 page ����
	static void f2()
	{
		idata = 10; // error
		sdata = 10; // ok .. sdata �� ��ü�� ��� �޸𸮿� �ִ�.
		f1();		// error
	}
};

int Test::sdata = 0;

int main()
{
	Test::f2();

}