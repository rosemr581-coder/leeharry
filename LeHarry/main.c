#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int tong, hieu, tich;
float thuong;
void main()
{
	int a, b = 0;
	printf("Nhap vao so a: ");
	scanf("%d", &a);
	printf("Nhap vao so b: ");
	scanf("%d",&b);
	printf(" vay tong cua a va b: %d", tong = a + b);
	printf(" vay hieu cua a va b: %d\n", hieu = a - b);
	printf(" vay tich cua a va b: %d\n", tich = a * b);
	printf(" vay thuong cua a va b: %.2f\n", thuong = a / b);
}