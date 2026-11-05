#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int a, b; // a là mật khẩu người dùng nhập vào, b là số tiền mà người dùng muốn rút tiền.
int c = 756890;// c là mật khẩu mà người dùng đặt ở hệ thống.
int e = 10000000; // số tiền hiện có của người sử dụng trong tài khoản ngân hàng
char d, cc;

void main()
{
	printf("\t\t ATM MB Bank\n\n");
	do
	{
		printf("Vui long nhap mat khau de rut tien ( MK nhap vao gom 6 chu so, vui long khong nhap cac ky tu khac): ");
		scanf("%d", &a);
		while (getchar() != '\n'); // dùng để xóa ký tự rác đọc các ký tự rác đến khi nào nhấn phím enter thì sẽ out khỏi vòng lặp này.
		if (a != c)
		{
			for (int i = 3;i>0;i--)
			{
				printf("\nban con lai %d lan nhap thu (NOTE: Khong nhap sai qua 3 lan)\n", i);
				printf("Vui long nhap mat khau de rut tien ( MK nhap vao gom 6 chu so, vui long khong nhap cac ky tu khac): ");
				scanf("%d", &a);
				while (getchar() != '\n');// dùng để xóa ký tự rác đọc các ký tự rác đến khi nào nhấn phím enter thì sẽ out khỏi vòng lặp này. 
				if (i == 1) {
					if (a != c)
					{
						printf("\ntai khoan cua ban da bi khoa vui long lai sau 24h");
						goto cc;//thoát hẳn khỏi hàm main out luôn chương trình
					}
					else break;
				}
				if (a == c) {
					break;
				}
			}
		}
		printf("\nBan da nhap dung mat khau");
		printf("\nso tien trong tai khoan cua ban la: %d", e);
		
		while (1)
		{
			printf("\nNhap vao so tien ban muon rut: ");
			int f = scanf("%d", &b);//lưu giá trị scanf(). bản chất nếu mà scanf() đúng nó sẽ trả về giá trị 1 (true), còn sai thì trả về giá trị 0 (false)
			while (getchar() != '\n');
			if (0 < b && b <= e && f == 1)
			{
				break;
			}
			else
			{
				printf("ban da nhap sai, vui long nhap lai");
			}
		}
		printf("so tien ban muon rut la: %d\n", b);
		printf("so du hien tai con lai trong tai khoan cua ban la %d\n", e - b);
		printf("Quy khach da giao dich thanh cong, cam on quy khach\n\n");
		printf("Ban co muon tiep tuc giao dich, vui long nhap (y/n): ");
		scanf("%c", &d);
	} while (d == 'y' || d == 'Y');
	cc:
	return 0;
}

// Đây là bài tập ngoài nên thầy thông cảm, bài code tìm ước chung nó đơn giản và ngắn gọn hơn
// nhưng vì em muốn tự làm nên nó khá là dài ạ :)))
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int a, b, d, e;
//char c;
//void main()
//{
//    printf("\t\t chuong trinh tim uoc chung lon nhat cua 2 uoc so a va b\n\n");
//    
//    do
//    {
//        printf("nhap vao uoc so a: ");
//        scanf("%d", &a);
//        printf("nhap vao uoc so b: ");
//        scanf("%d", &b);
//        int i = 1, max1 = 0, max2 = 0;
//        for (i; i <= a; i++)
//        {
//            d = a % i;
//            if (d == 0) {
//                printf("cac so chia het cho uoc a la: %d\n", i);
//                if (i > max1)
//                {
//                    max1 = i;
//                }
//            }
//            
//        }
//        int j = 1;
//        for (j; j <= b; j++)
//        {
//            e = b % j;
//            if (e == 0) {
//                printf("\ncac so chia het cho uoc b la: %d", j);
//                if (j > max2)
//                {
//                    max2 = j;
//                }
//            }
//        }
//        printf("\n\nuoc lon nhat cua a=%d va b= %d", max1, max2);
//        while (max1 != max2) {
//            (max1 > max2) ? printf("\n\nuoc chung lon nhat cua a va b= %d", max1 = max1 - max2) :
//                printf("\n\nuoc chung lon nhat cua a va b= %d", max2 = max2 - max1);
//        }
//        getchar();
//        printf("\n\nban co muon tiep tuc khong(y/n): ");
//        scanf("%c", &c);
//    }while (c == 'y' || c == 'Y');
//}

// bai tap doan so
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void main()
//{
//	int mk = 0;
//	int sodu = 100000000;
//	int mkht = 456876;
//	printf("Nhap vao mat khau ngan hang cua ban: ");
//	scanf("%d", &mk);
//
//}
//bai1
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//void main()
//{
//	int n;
//	printf("Nhap vao so nguyen n: ");
//	scanf("%d", &n);
//	n > 0 ? printf("day la so nguyen duong") :
//		n < 0 ? printf("day la so nguyen am ") :
//		printf("So ban vua nhap = 0");
//}
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
//			  printf("Phep cong %d / %d = %d", a, b, a * 1.0 / b);
//			  break;
//        default:
//            printf("phep tinh khong hop le");
//            break;
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
//  int a=0;
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