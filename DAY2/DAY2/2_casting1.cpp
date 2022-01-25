#include <iostream>

// C ��Ÿ���� () ĳ���� : ��κ��� ��� �����Ѵ�.
//						  �ٵ�, �ʹ� �����ϴ�.



int main()
{

	double d = 3.4;
	//int n = d;      // ok. ��� �߻�
	int n = (int)d; // ok. ��� ����


	// void* -> int* �� ���� :�ʿ��� �۾�.
	int* p = (int*)malloc(100);
	free(p);

	// int* => double* �� ��ȯ : �ʹ� �����ϴ�.
	//                           �׷���, C ĳ������ ���
	//double* p1 = &n; // error
	double* p1 = (double*)&n; // error
//	*p1 = 3.4;


	const int c = 10;
	//int* p2 = &c; // error. ����� ������ ����Ű�� �����Ϳ� ���� �� ����.
	
	int* p2 = (int*)&c; // error. ����� ������ ����Ű�� �����Ϳ� ���� �� ����.
	*p2 = 20;

	std::cout << c << std::endl; // 10 ���� �����Ϸ��� �Ⱑ������ �������� ��������
	std::cout << *p2 << std::endl; // 20 


}