#include <iostream>


void f(int n) { std::cout << "int" << std::endl; }
void f(void* n) { std::cout << "void*" << std::endl; }
void g(char* n) { std::cout << "char*" << std::endl; }


int main() {

	f(0);        // 1. 0�� �����Դϴ�. int Ÿ��.
	f((void*)0); // 2. 

#define NULL (void*)0

	f(NULL);
	g(NULL); // ? �߻����غ���
	         // void* => char* ���� �Ͻ��� ����ȯ �ʿ�
			 // C ���� �Ͻ��� ���� ��ȯ
			 // C++ �� ���ȵ�..
			 // �׷��� ����� C++�̹Ƿ� ����.
}