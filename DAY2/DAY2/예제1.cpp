#include <iostream>
#include <stdlib.h>

int main()
{

	// ����ڰ� �Է��� ũ��(count) ��ŭ ������ �Է� �������� �Ѵ�.
	int count;
	std::cin >> count;

//	int score[count]; // error.

	// ����� ������ ũ��� �迭�� ������� ���� �޸� �Ҵ� ���,

	int* score = new int[count];

	score[0] = 10;  // ����Ŀ�

	delete[] score; // �޸� ����

}