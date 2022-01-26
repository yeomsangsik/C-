
#include <iostream>

int g1 = 0x11223344;
int g2 = 0x55667788;

int main()
{
	printf("hello");

	const char* s1 = "hello";
	char s2[] = "hello";


}

// 위 예제 32bit 빌드 필요
// g++ -m32