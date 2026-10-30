#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	int n = 0;
	printf("nhap vao gia tri n: ");
	scanf("%d", &n);
	int x = 1;
	for (int i = 1; i <= n; i++)
	{
		x *= i;
	}
	printf("%d! = %d", n, x);
}








//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void main()
//{
//	for (int i = 2; i <= 9; i++)
//	{
//		printf("Bang cuu chuong: %d\n", i);
//		for (int j = 0; j <= 10; j++)
//		{
//			printf("%d x %d = %d\n", i, j, i * j);
//		}
//	}
//
//}



//buổi 3
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int a=0, b=0, c=0, delta;
//float x1, x2;
//void main()
//{
//	printf("Nhap vao bien a: ");
//	scanf("%d", &a);
//	printf("Nhap vao bien b: ");
//	scanf("%d", &b);
//	printf("Nhap vao bien c: ");
//	scanf("%d", &c);
//	delta = pow(b,2) - 4 * a * c;
//	if (delta > 0)
//	{
//		printf("phuong trinh nay co 2 nghiem la: \n X1=%.3f \t\t X2=%.3f\n", x1 = (-b + sqrt(delta)) / 2 * a, x2 = (-b - sqrt(delta)) / 2 * a);
//	}
//	else if (delta == 0)
//	{
//		printf("phuong trinh nay co nghiem kep la: \n X1=X2=%.3f\n", x1 = x2 = -b/ (2.0*a) );
//
//	}
//	else
//	{
//		printf("phuong trinh nay vo nghiem\n");
//	}
//}
// 
// 
//buổi 2
//int tong, hieu, tich;
//float thuong;
//void main()
//{
//	int a, b = 0;
//	printf("Nhap vao so a: ");
//	scanf("%d", &a);
//	printf("Nhap vao so b: ");
//	scanf("%d",&b);
//	printf(" vay tong cua a va b: %d", tong = a + b);
//	printf(" vay hieu cua a va b: %d\n", hieu = a - b);
//	printf(" vay tich cua a va b: %d\n", tich = a * b);
//	printf(" vay thuong cua a va b: %.2f\n", thuong = a / b);
//}




