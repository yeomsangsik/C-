#include <iostream>

// �ڵ尡 �������� ����

// "�簢��" ���� �۾��� �ϰ� ������, "�簢�� Ÿ��" �� ����.
// "�簢��"�� ǥ���ϱ����� "int ���� 4��"�� ����ϱ� ������ ����������.

// ���������� "�簢�� Ÿ��"�� ������ �ȴ�.

// �簢���� ������ ���ϰ�, �׸��� �׸��� �Լ��� �����غ��ô�

int getRectArea(int x1, int y1, int x2, int y2)
{
	return (x2 - x1) * (y2 - y1);
}

void drawRect(int x1, int y1, int x2, int y2)
{

	std::cout << "draw rect" << std::endl;
}


int main()
{
	int area = getRectArea(1, 1, 10, 10);

}
