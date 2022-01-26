#include <iostream>


class Test {

	int data;
public:
	void f1(int n )			// void f1(Test* this) �� �����Ͻ� ����
	{
		std::cout << this << std::endl;
		data = 10;     // this -> data = 10 ���� ����
	}
	static void f2(int n)	// ������ �ص� void f2() �Դϴ�.
	{
		std::cout << this << std::endl; // error. ���� this �����ϴ�.
		data = 10;						// this -> data = 10 ���� �����ؾ� �ϴµ�..
									    //			this �� �����ϴ�.
									    // �׷��� static ��� �Լ�������
									    // �ν��Ͻ� ����� ���� �ȵ˴ϴ�.
	}
};

int main()
{
	Test t;
	t.f1(10);		// f1�� ȣ���Ϸ��� ��ü�� �ʿ��մϴ�.
					// �����Ͻÿ� "f1(&t)" �� ����Ǵ� �����Դϴ�.

	Test::f2(10); // ��ü���� ȣ���߽��ϴ�.
				  // ����, ������ �Ǿ "f2()" �Դϴ�.
				  // ��, ���ڰ� �߰��� �� �����ϴ�.
}