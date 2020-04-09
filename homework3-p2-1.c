/*
 ============================================================================
 Name        : homework3-p2-1.c
 Author      : Ji Un Song
 Version     :
 Copyright   :
 Description :
 ============================================================================
 */

#include <stdio.h>
#define MAX_SIZE 100		// MAX_SIZE = 100

float sum(float [], int);		// 배열에 초기화된 값의 합을 구하기 위한 함수
float input[MAX_SIZE], answer;	// 배열과 변수 선언
int i;		// for문에 쓰일 변수 선언
int main(void) {
	for(i=0; i < MAX_SIZE; i++)		// 배열의 각 인덱스에 값을 초기화
		input[i] = i;

	printf("address of input = %p\n", input);		// input배열의 0번째 주소 출력

	answer = sum(input, MAX_SIZE);		// 함수 호출
	printf("The sum is: %f\n", answer);		// 합을 출력해주는 출력문

	return 0;		// 0 값을 반환
}

float sum(float list[], int n)
{
	printf("value of list = %p\n", list);		// 매개변수 list의 값을 나타냄( input[0]의 주소를 받아옴)
	printf("address of list = %p\n\n", &list);	// 매개변수 list의 주소를 나타내는 출력문

	int i;
	float tempsum = 0;		// 합을 0으로 초기화
	for(i = 0; i < n; i++)
		tempsum += list[i];		// 받아온 배열의 주소의 값을 0부터 99까지의 합을 구함
	return tempsum;		// 합을 반환
}
