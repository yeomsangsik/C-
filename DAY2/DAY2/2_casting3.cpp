#include <iostream>

// C++�� �뵵 ���� ����ϱ����� "4��"�� ĳ������ ���� - 50page ��

// 2. reinterpret_cast : �ּ� ĳ���ÿ��Ӵϴ�!!!
// 
//    1. ���� �ٸ� Ÿ���� �ּ� ĳ����
//    2. ���� <=> �ּ� ������ ĳ����

int main()
{

	int n = 10;

//  double* p1 = static_cast<double*>(&n); // Compile error
	double* p1 = reinterpret_cast<double*>(&n); // ok

//	*p1 = 3.4; // ��, ĳ���� �Ǿ �̷��� ��������� ������..

//	int* p2 = 1000; // error
	int* p2 = (int*)1000; //ok.. �ٵ� ����
	int* p2 = static_cast<int*>(1000); // error.. 
	int* p2 = reinterpret_cast<int*>(1000); //ok


	int n2 = reinterpret_cast<int>(3.4); // error
										 // �뵵�� ���� �ʴ�.
										 // static_cast�� ����ϰų�
										 // ĳ���� ��ü�� �����ϸ� �ȴ�.

}