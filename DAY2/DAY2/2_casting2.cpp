#include <iostream>

// C++�� �뵵 ���� ����ϱ����� "4��"�� ĳ������ ���� - 50page ��
// 1. static_cast : �������� �´� ��츸 ���
// 2. 


int main()
{

	double d = 3.4;
//	int n = (int)d; // ok. ��� ����
	// 1. primitive type ���� �� ĳ���� ���
	int n = static_cast<int>(d); // ok. ��� ����

	// 2. void* -> �ٸ� Ÿ������* ĳ����
	int* p = static_cast<int*>(malloc(100));
	free(p);

	// 3. ��Ӱ��� Ÿ�Գ����� ĳ���� ���

	// �׿��� ���� ��κ� ����
	// �Ʒ� �ڵ�� ���� ���� ������ ���� Ÿ���� �ּ� ĳ������ ��� ����.
	double* p1 = static_cast<double*>(&n); // Compile error
	
}