#include <iostream>
#include <stdlib.h>

int main()
{
	// 사용자가 -1을 입력 할때 까지 입력 받아야 한다.

	// 그런데 입력 값은 반드시 보관하고 있어야한다.

	int count = 0; // 입력 개수
	int size = 5;  // 버퍼 크기
	int n = 0;

	int* buff = new int[size];

	while (1)
	{
		std::cin >> n;
		if (n == -1) break;

		buff[count] = n;
		++count;

		if (count == size)
		{
			int* temp = new int[size + 5];

			memcpy(temp, buff, sizeof(int) * size);

			delete[] buff; // buff(주소값) 이 쥐고 있던 데이터들을 해지시키고 
						   // 이 과정에서 buff가 배열을 가르키는 포인터로 사용 된다면 무조건 delete[] 형태로 사용
			//
			buff = temp;   // temp 에 다시 연결하는 형태로 사용


			size = size + 5;

		}
	}

	std::cout << "입력된 갯수 : " << count << std::endl;

	for (int i = 0; i < count; i++)
		std::cout << buff[i] << std::endl;

	delete[] buff;

}