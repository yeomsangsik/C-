#include <iostream>

int main() {


	const double d = 3.14;

	char* p1 = (char*)&d;

	// ���� ĳ������ C++ �� �غ�����
	//       ��

	char* p2 = reinterpret_cast<char*>(const_cast<double*>(&d)); // ���� Ÿ���� const �Ӽ��� ����
	char* p3 = const_cast<char*>(reinterpret_cast<const char*>(&d)); // ���� Ÿ���� const �Ӽ��� ����


}