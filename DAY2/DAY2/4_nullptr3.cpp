#include <iostream>


void f(int n) { std::cout << "int" << std::endl; }
void f(void* n) { std::cout << "void*" << std::endl; }
void g(char* n) { std::cout << "char*" << std::endl; }


int main() {

	// �Ʒ� �ڵ尡 ���� �Ϻ��� C++ �����Ϸ��� ����� �ִ� ����Դϴ�.

#ifdef __cplusplus

	#define NULL 0

#else
	#define NULL (void*)0

#endif // __cplusplus



	f(NULL); // ��ó�� �Ǿ� ������ �׳� 0 �̹Ƿ� 1�� ȣ��.
			 // �ᱹ, NULL�� ������ 0���� ����ϰ� �;�����..
			 // ����!!

	g(NULL); // ok..


	// NULL �� �ƴ� ��¥ ������ 0 �� �ʿ��ߴ�.
	// �׷��� nullptr�� ���� ����

	f(nullptr);
	g(nullptr);

}
// �� �ҽ��� �ٽ� : NULL ����� ���� ������.