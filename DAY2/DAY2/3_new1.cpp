#include <iostream>
#include <cstdlib>


int main() {

	// C ��Ÿ���� �����޸� �Ҵ�
	int* p1 = (int*)malloc(sizeof(int) * 10);
	free(p1);
	
	// C++ ��Ÿ���� �����޸� �Ҵ�
	int* p2 = new int; // new Ÿ��
	delete p2;

	int* p3 = new int[10];  // �迭 ��� �Ҵ�
	delete[] p3;			// "delete[]" �� ���� �մϴ�.

	// p3 �� ����Ű�� ���� ���ؼ� �ٸ� �ý��ۿ��� ���� �� �ֵ��� �����ִ� ����


// 52 page �߰�

//          ��ü              ��ȯŸ��             ����          �ٽ�
// 
// malloc   �Լ�              void*                ũ��          ������ ȣ�� �ȵ�
// 	                          ĳ���� �ʿ�
// 
// new      Ű����(������)    ��Ȯ�� Ÿ��          Ÿ��          ������ ȣ�� ��


// ���̽�
// c = Car()     // Car.__new__()
	             // Car.__init__()


}