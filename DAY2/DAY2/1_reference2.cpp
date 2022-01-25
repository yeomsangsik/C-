#include <iostream>

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};
// 1. Call by value�� ������ ���� �������� �ʰڴٴ� ���
//    ������, ���纻�� ���� �޸� �������尡 �����Ѵ�.
//
// 2. const reference �� ����ϸ� ���纻 ����
//    ������ ���� �������� �ʰڴٰ� ����Ҽ� �ִ�.
//    : const reference �� ��������� call by value�� �޸� ȿ�������� ���� �����ϴ�!!
// 
//void foo(Rect r)

void foo(const Rect& r)
{

}

int main() {

	Rect r = { 1, 1, 10, 10 };
	foo(r); // ���� : foo�� ����� r�� ���¸� �����ϸ� �ȵȴ�.
}

void foo(int n) {}			// 1. ���� �ڵ�
void foo(const int& n) {}   // 2. �����ʴ�.


// �Լ� ���ڸ� �޴� ���
// 1. ���ڰ��� �����Ϸ���
//    => �����͵� ����, reference �� �����ϴ�.
//       ������ "���۷����� ���� �θ� ���"
//       swap(int*, int*)
//       swap(int&, int&)

// 2. ���ڰ��� �������� �ʰڴٸ�..
// A. primitive type   : call by value   void foo(int n)         --> ������ �ִ� Ÿ��(int, double)
// B. user define type : const reference void foo(const Rect& r) --> ���� ���� Ÿ��