// 9_�ʵ��ʱ�ȭ

class Point
{

	int x = 0;
	int y = 0; // C++11 ���� ���ڵ尡 ���˴ϴ�. �ʵ� �ʱ�ȭ

public:

	Point() {}
	Point(int a)		: x(a) {}
	Point(int a, int b) : x(a), y(b) {}
};

// ��ó�� ����� �����Ϸ��� �Ʒ�ó�� �����ϴ� �����Դϴ�.

class Point
{

	int x; // = 0;
	int y; // = 0;

public:
	// �����Ϸ��� �Ʒ� ó�� �����߽��ϴ�.
	Point()				: x(0), y(0) {}
	Point(int a)		: x(a), y(0) {}
	Point(int a, int b) : x(a), y(b) {}
};

int main() {

	Point p(1); // x= 1, y= 0;
}
