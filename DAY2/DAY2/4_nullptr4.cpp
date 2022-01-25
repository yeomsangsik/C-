#include <iostream>


void f(int n) { std::cout << "int" << std::endl; }
void f(double n) { std::cout << "double" << std::endl; }
void f(bool n) { std::cout << "bool" << std::endl; }
void f(int* n) { std::cout << "int*" << std::endl; }


int main() {

	// literal(���ͷ�) : ���α׷����� ���Ǵ� �̸����� '��' ��.

	f(0);		  // int .		"0�� ������ ���ͷ�, int Ÿ��"
	f(0.);		  // double.	"0.0 �� �Ǽ��� ���ͷ�, double Ÿ��"
	f(false);	  // bool.		"false �� bool �� ���ͷ�, Ű����"
	f(nullptr);	  // int*		"nullptr �� �������� ���ͷ�, Ű����"

	// ��� ���ͷ��� Ÿ���� �ֽ��ϴ�.

	10;      // int Ÿ��
	3.4;     // double xkdlq
	false;   // bool Ÿ��
	nullptr; // �׷� �̰� ���� ������ Ÿ���̳�?!  
		     // --> std::nullptr_t ��� �̸��� Ÿ���Դϴ�.
			 // std::nullptr_t Ÿ���� '��� ������ ������'�� �Ͻ��� ����ȯ�ȴ� ��� ������ �����ϴ�.

	std::nullptr_t a = nullptr;

	// ���� ���� a �� nullptr �� ���� �뵵�� ��� �����մϴ�.

	int* p1 = a; // int* p1 = nullptr �� ����



}
