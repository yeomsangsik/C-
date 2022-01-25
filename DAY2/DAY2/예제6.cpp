#include <iostream>
#include <vector> // �̹� C++ ǥ�ؿ� vector(�����迭�� vector ��� �մϴ�.)

int main()
{
	std::vector<int> v(5);

	v[0] = 10;
	v.resize(7);

	std::cout << v[0] << std::endl;
	std::cout << v.size() << std::endl;


	std::vector<int> v2; // ũ�Ⱑ 0;

	v2.push_back(1);
	v2.push_back(5);

	std::cout << v2.size() << std::endl;


	int n = 0;
	while (1)
	{
		std::cin >> n;
		if (n == -1) break;
		v2.push_back(n); // �˾Ƽ� �޸𸮰� �����ؼ� ���ϴ�.
	}
}

// ���̽��� list �� vector �Դϴ�.
// s = [1,2,3]
// s.append(5)

