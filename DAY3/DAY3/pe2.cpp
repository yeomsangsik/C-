#include <iostream>

int g = 0;

//int x[100000] = { 1,2,3, }; // ���������� .data ���ǿ� ��

int x[100000]; //
int main()
{

	x[0] = 0;
	int n = 0;

	int* p = new int;

	const char* s = "hello"; // s�� ��� �޸𸮿� ���� "hello" �� ����ŵ�ϴ�.

	printf("�������� �ּ� : %p\n", &g);
	printf("�������� �ּ� : %p\n", &n);
	printf("�����Ҵ� �޸� �ּ� : %p\n", p);
	printf("main �Լ� �ּ� : %p\n", &main);
	printf("����޸� ���ڿ� �ּ� : %p\n", s);

	delete p;
}
// ������ ��� Ȯ���غ�����

