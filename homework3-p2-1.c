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

float sum(float [], int);		// �迭�� �ʱ�ȭ�� ���� ���� ���ϱ� ���� �Լ�
float input[MAX_SIZE], answer;	// �迭�� ���� ����
int i;		// for���� ���� ���� ����
int main(void) {
	for(i=0; i < MAX_SIZE; i++)		// �迭�� �� �ε����� ���� �ʱ�ȭ
		input[i] = i;

	printf("address of input = %p\n", input);		// input�迭�� 0��° �ּ� ���

	answer = sum(input, MAX_SIZE);		// �Լ� ȣ��
	printf("The sum is: %f\n", answer);		// ���� ������ִ� ��¹�

	return 0;		// 0 ���� ��ȯ
}

float sum(float list[], int n)
{
	printf("value of list = %p\n", list);		// �Ű����� list�� ���� ��Ÿ��( input[0]�� �ּҸ� �޾ƿ�)
	printf("address of list = %p\n\n", &list);	// �Ű����� list�� �ּҸ� ��Ÿ���� ��¹�

	int i;
	float tempsum = 0;		// ���� 0���� �ʱ�ȭ
	for(i = 0; i < n; i++)
		tempsum += list[i];		// �޾ƿ� �迭�� �ּ��� ���� 0���� 99������ ���� ����
	return tempsum;		// ���� ��ȯ
}
