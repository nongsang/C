#include <stdio.h>

int main()
{
	char arr1[] = { 'a','b','c','d' };			// char형 배열에 문자 하나하나 저장할 수 있다.
	char arr2[] = { "abcd" };					// char형 배열에 문자열을 그냥 넣을 수 있다.

	printf("arr1 : %c%c%c%c\n", arr1[0], arr1[1], arr1[2], arr1[3]);	// %c로 문자하나하나 출력할 수 있다.
	printf("arr2 : %s\n", arr2);										// %s로 문자열 전체를 출력할 수 있다.

	printf("\n");

	printf("arr1 : %d,%d,%d,%d,%d\n", arr1[0], arr1[1], arr1[2], arr1[3], arr1[4]);	// 문자 하나하나씩 넣으면 3번이 끝이며, 4번부터는 쓰레기 값이다.
	printf("arr2 : %d,%d,%d,%d,%d\n", arr2[0], arr2[1], arr2[2], arr2[3], arr2[4]);	// 문자열을 넣으면 4번이 끝이고, 4번에는 문자열의 끝을 알리는 문자가 들어간다.

	return 0;
}