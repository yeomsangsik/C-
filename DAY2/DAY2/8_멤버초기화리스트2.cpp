
// ��� �ʱ�ȭ ����Ʈ�� �ݵ�� �ʿ��� ��� 1. 87page
class Test
{
	int a;
	int b;
	const int c;

public:
	
	Test(int aa, int bb, int x) : a(aa), b(bb), c(x) // ok. ������ �ƴ� ��¥ �ʱ�ȭ
	{
//		c = x; // �ʱ�ȭ�� �ƴ� �����Դϴ�.
				// ����� ���Եɼ� �����ϴ�. error
	}

};

int main()
{

	Test a(1,2,3);
}