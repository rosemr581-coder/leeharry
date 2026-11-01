//bai1
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	int n;
	printf("Nhap vao so nguyen n: ");
	scanf("%d", &n);
	n > 0 ? printf("day la so nguyen duong") :
		n < 0 ? printf("day la so nguyen am ") :
		printf("So ban vua nhap = 0");
}

//bai2
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//void main()
//{
//	int n;
//	printf("Nhap vao so nguyen n: ");
//	scanf("%d", &n);
//	if (n % 2==0)
//	{
//		printf("day la so chan");
//	}
//	else
//	{
//		printf("day la so le");
//	}
//}

//bai 3
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//void main()
//{
//	int a, b;
//	printf("Nhap vao 2 so a va b: ");
//	scanf("%d %d", &a, &b);
//	a > b ? printf("so lon nhat %d\n", a) :
//	a < b ? printf("so lon nhat %d\n", b) :
//    printf("2 so bang nhau %d = %d\n", a, b);
//}

//bai 4
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//void main()
//{
//	int a, b, c;
//	printf("Nhap vao 3 so a, b, c: ");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b && a > c)
//	{
//		printf("so lon nhat la a = %d", a);
//	}
//	if (b > a && b > c)
//	{
//		printf("so lon nhat la b = %d", b);
//	}
//	if (c > a && c > b)
//	{
//		printf("so lon nhat la c = %d", c);
//	}
//}

//bai 5
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//void main()
//{
//	printf(" \t\t Chuong trinh tinh tien dien hang thang ban su dung\n\n");
//	int a = 0;
//	int c = 0;
//	printf("Nhap vao so dien tieu thu ban dung trong thang (kwh): ");
//	scanf("%d", &a);
//    if (a <= 50)
//	{
//		c = a * 1800;
//		printf("\nvay tien dien thang nay cua ban %d", c);
//	}
//	else if( a <= 100)
//	{
//		c = 50 * 1800 + (a-50)*2000;
//		printf("\nvay tien dien thang nay cua ban %d", c);
//	}
//	else if (a <= 200)
//	{
//		c = 50 * 1800 + 50 * 2000 + (a-100)*2500;
//		printf("\nvay tien dien thang nay cua ban %d", c);
//	}
//	else
//	{
//		c = 50 * 1800 + 50 * 2000 + 100 * 2500 + (a-200)*3000;		
//		printf("\nvay tien dien thang nay cua ban %d", c);
//	}
//
//}

//bai 6
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//void main()
//{
//	printf("\t\t=====MENU=====\n");
//	int a = 0;
//	int b = 0;
//	char c;
//	printf("Nhap vao phep tinh ban muon: ");
//	scanf("%c", &c);
//	printf("Nhap vao 2 so a va b: ");
//	scanf("%d %d", &a, &b);
//	switch (c)
//	{
//	      case '+': 
//			  printf("Phep cong %d + %d = %d", a, b, a + b);
//			  break;
//		  case '-':
//			  printf("Phep cong %d - %d = %d", a, b, a - b);
//			  break;
//		  case '*':
//			  printf("Phep cong %d x %d = %d", a, b, a * b);
//			  break;
//		  case '/':
//			  printf("Phep cong %d / %d = %d", a, b, a / b);
//			  break;
//	}
//}

//bai 7
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//void main()
//{
//	int n=0;
//	printf("Nhap vao so nguyen n: ");
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (i%2 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}

//bai 8
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//void main()
//{
//	int n = 0;
//    int a;
//	printf("Nhap vao so nguyen n: ");
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++)
//	{
//		a= a+i;
//	}
//	printf("Tong so nguyen tuong ung voi gia tri n= %d la %d", n, a=a + 1);
//}
//}






//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>

//void main()
//{
//	int n = 0;
//	printf("nhap vao gia tri n: ");
//	scanf("%d", &n);
//	int x = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		x *= i;
//	}
//	printf("%d! = %d", n, x);
//}

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




