#include <iostream>
#include <algorithm> // 이 안에 이미 표준 swap이 있습니다.

void swap(int* p1, int* p2) {

	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

namespace utils{
	template<typename T>
	inline void swap(T & r1, T& r2) {

		T temp = r1;
		r1 = r2;
		r2 = temp;
	}
}

int main()
{
	int x = 10, y = 20;

	//swap1(&x, &y);
	//utils::swap(x, y);
	std::swap(x, y);

	std::cout << x << std::endl;
	std::cout << y << std::endl;


}