#include <iostream>

int g = 0;

//int x[100000] = { 1,2,3, }; // 실행파일의 .data 섹션에 들어감

int x[100000]; //
int main()
{

	x[0] = 0;
	int n = 0;

	int* p = new int;

	const char* s = "hello"; // s는 상수 메모리에 놓인 "hello" 를 가르킵니다.

	printf("전역변수 주소 : %p\n", &g);
	printf("지역변수 주소 : %p\n", &n);
	printf("동적할당 메모리 주소 : %p\n", p);
	printf("main 함수 주소 : %p\n", &main);
	printf("상수메모리 문자열 주소 : %p\n", s);

	delete p;
}
// 실행후 결과 확인해보세요

