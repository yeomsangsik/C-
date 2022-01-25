#include <iostream>
#include <cstdlib>


int main() {

	// C 스타일의 동적메모리 할당
	int* p1 = (int*)malloc(sizeof(int) * 10);
	free(p1);
	
	// C++ 스타일의 동적메모리 할당
	int* p2 = new int; // new 타입
	delete p2;

	int* p3 = new int[10];  // 배열 모양 할당
	delete[] p3;			// "delete[]" 로 제거 합니다.

	// p3 가 가르키는 값에 대해서 다른 시스템에서 사용될 수 있도록 놓아주는 형태


// 52 page 중간

//          정체              반환타입             인자          핵심
// 
// malloc   함수              void*                크기          생성자 호출 안됨
// 	                          캐스팅 필요
// 
// new      키워드(연산자)    정확한 타입          타입          생성자 호출 됨


// 파이썬
// c = Car()     // Car.__new__()
	             // Car.__init__()


}