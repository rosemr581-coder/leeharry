//BTVN 6/11
//7.
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//
//void main()
//{
//	printf("\t\t Chuong trinh tinh tich phan fx=x^2 theo phuong phap hinh thang voi tan so lay mau la 1000 lan\n\n");
//	int a = 0;
//	int b = 0;
//	float fx = 0;
//	int n = 1000;
//	float h = 0;
//	float tong = 0;
//	int i = 1;
//	printf("Nhap vao vao so nguyen a: ");
//	scanf("%d", &a);
//	printf("Nhap vao vao so nguyen b: ");
//	scanf("%d", &b);
//	h = (b - a) / (1.0 * n);
//	for (i; i <= n - 1; i++)
//	{
//		tong += pow(a + (i * h), 2);
//	}
//	fx = (h / 2) * (pow(a, 2) + 2 * tong + pow(b, 2));
//	printf("Vay fx= %.2f", fx);
//}
//9. 
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//void main()
//{
//	printf("\t\t ATM MB Bank \n\n");
//	int a = 0; // a là số tiền khách hàng nhập vào để rút.
//	int b = 0; // b là số tờ tiền 50.000
//	int c = 0; // c là số tờ tiền 100.000
//	int d = 0; // b là số tờ tiền 200.000
//	int e = 0; // e là số tờ tiền 500.000
//
//	printf("Nhung luu y quy khach can biet: \n1. Vui long nhap so tien co menh gia lon hon 50.000 vnd.\n2. khong nhap cac ky tu la\n3. Khong nhap cac so tien le vao\n");
//	printf("Nhap vao so tien quy khach muon rut: ");
//	int f = scanf("%d", &a);
//	while (getchar() != '\n');
//	while (a <= 0 || a % 50000 != 0 || f == 0 )
//	{
//		printf("Quy khach da nhap sai vui long thu lai\n\n");
//		printf("Nhap vao so tien quy khach muon rut: ");
//		int f= scanf("%d", &a);
//		while (getchar() != '\n');
//		if (a > 0 && a % 50000 == 0 && f == 1)
//		{
//			printf("Quy khach da nhap dung giao dich duoc tiep tuc thuc hien\n");
//			break;
//		}
//	}
//	int tienDu = a;
//	if (a >= 850000)// ở mức 850k thì mỗi tờ đều được in cái này em có khảo sát qua ạ
//	{
//		b = 1;
//		c = 1;
//		d = 1;
//		e = 1;
//		tienDu = a - 850000;
//	}
//	e += tienDu / 500000;
//	tienDu %= 500000;
//
//	d += tienDu / 200000;
//	tienDu %= 200000;
//
//	c += tienDu / 100000;
//	tienDu %= 100000;
//
//	b += tienDu / 50000;
//	printf("So to 50.000 vnd quy khach nhan duoc la: %d\n", b);
//	printf("So to 100.000 vnd quy khach nhan duoc la: %d\n", c);
//	printf("So to 200.000 vnd quy khach nhan duoc la: %d\n", d);
//	printf("So to 500.000 vnd quy khach nhan duoc la: %d\n\n", e);
//}

//8.
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//void main()
//{
//	printf("\t\t chuong trinh tim boi chung nho nhat cua 2 so nguyen a va b\n\n");
//	int a = 0;
//	int b = 0;
//    int d = 0;
//    char c = 0;
//	int UCLN = 0;
//    float BCNN = 0;
//	do
//	{
//        int max1 = 0;
//        int max2 = 0;
//        int z = 0;
//		printf("Nhap vao so nguyen a: ");
//		int e = scanf("%d", &a);
//		printf("Nhap vao so nguyen b: ");
//		int f = scanf("%d", &b);
//		while (getchar() != '\n');
//		if (a == 0 || b == 0 || e == 0 || f ==0)
//		{
//			printf("ban da nhap sai vui long nhap lai\n");
//		}
//        else
//        {
//            int i = 1;
//            for (i; i <= a; i++)
//            {
//                d = a % i;
//                if (d == 0) {
//                    printf("cac so chia het cho so nguyen a la: %d\n", i);
//                    if (i > max1)
//                    {
//                        max1 = i;
//                    }
//                }
//            }
//            int j = 1;
//            for (j; j <= b; j++)
//            {
//                e = b % j;
//                if (e == 0) {
//                    printf("\ncac so chia het cho so nguyen b la: %d", j);
//                    if (j > max2)
//                    {
//                        max2 = j;
//                    }
//                }
//            }
//            printf("\n\n uoc lon nhat cua a=%d va b= %d", max1, max2);
//            while (max1 != max2) {
//                if (max1 > max2)
//                {
//                    max1 = max1 - max2;
//                    UCLN = max1;
//                }
//                else
//                {
//                    max2 = max2 - max1;
//                    UCLN = max2;
//                }
//            }
//            if (max1 == max2) {
//            UCLN = max1;
//            }
//            printf("\n\nuoc chung lon nhat cua a va b la: %d", UCLN);
//            BCNN = (a * b) / (1.0 *UCLN);
//            printf("\nVay boi chung nho nhat cua 2 so a= %d va b = %d la: %.1f", a, b, BCNN);
//        }
//		printf("\n\nban co muon tiep tuc khong(y/n): ");
//	    scanf(" %c", &c);
//	} while (c == 'y' || c == 'Y');
//}
//6.
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
//        int UCLN = 0;
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
//        printf("\n\n uoc lon nhat cua a=%d va b= %d", max1, max2);
//        while (max1 != max2) {
//            if (max1 > max2)
//            {
//                max1 = max1 - max2;
//                UCLN = max1;
//            }
//            else
//            {
//                max2 = max2 - max1;
//                UCLN = max2;
//            }
//        }
//        if (max1 == max2) {
//            UCLN = max1;
//        }
//        printf("\n\nVay uoc chung lon nhat cua a va b la: %d", UCLN);
//        getchar();
//        printf("\n\nban co muon tiep tuc khong(y/n): ");
//        scanf("%c", &c);
//    }while (c == 'y' || c == 'Y');
//}

// bài tập tìm và in các só nguyên tố
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//void main()
//{
//	int n = 0;
//	int a = 0;
//	int kiem_tra__so_nguyen_to;
//	printf("Nhap vao so tu nhien n: ");
//	scanf("%d", &n);
//	if (n <= 0 || n<2)
//	{
//		printf("ban da nhap sai vui long nhap lai");
//	}
//	if (n  == 2)
//	{
//		printf("So tu nhien %d ban vua nhap la so nguyen to", n);
//	}
//	else
//	{
//		for (int i = 2; i < n; i++)
//		{
//			if (n % i == 0)
//			{
//				printf("So tu nhien %d ban vua nhap khong phai so nguyen to\n", n);
//				break;
//			}
//			else
//			{
//				for (int j = 2; j <= i; j++)
//				{
//					printf("Cac so tu nhien %d ma ban nhap gom cac so nguyen to khac %d\n", n, i%j!=0);
//				}
//			}
//
//		}
//	}
//}

//Bài tập tiền gửi ngân hàng
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//void main()
//{
//	printf("\t\t Ngan hang Viettinbank\n\n Chuong trinh tinh tien gui ngan hang\n\n");
//	int a = 0;
//	int n = 0;
//	int b = 0;
//	int i = 1;
//	printf("Nhap vao so tien gui vao ngan hang cua quy khach: ");
//	scanf("%d", &a);
//	printf("Nhap vao so nam quy khach muon gui: ");
//	scanf("%d", &n);
//	b = a;
//	for (i; i <= n; i++)
//	{
//		b = b + (b * 0.082);
//	}
//	printf("So tien cua quy khach sau %d nam la %d", n, b);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int a, b; // a là mật khẩu người dùng nhập vào, b là số tiền mà người dùng muốn rút tiền.
//int c = 756890;// c là mật khẩu mà người dùng đặt ở hệ thống.
//int e = 10000000; // số tiền hiện có của người sử dụng trong tài khoản ngân hàng
//char d, cc;
//
//void main()
//{
//	printf("\t\t ATM MB Bank\n\n");
//	do
//	{
//		printf("Vui long nhap mat khau de rut tien ( MK nhap vao gom 6 chu so, vui long khong nhap cac ky tu khac): ");
//		scanf("%d", &a);
//		while (getchar() != '\n'); // dùng để xóa ký tự rác đọc các ký tự rác đến khi nào nhấn phím enter thì sẽ out khỏi vòng lặp này.
//		if (a != c)
//		{
//			for (int i = 3;i>0;i--)
//			{
//				printf("\nban con lai %d lan nhap thu (NOTE: Khong nhap sai qua 3 lan)\n", i);
//				printf("Vui long nhap mat khau de rut tien ( MK nhap vao gom 6 chu so, vui long khong nhap cac ky tu khac): ");
//				scanf("%d", &a);
//				while (getchar() != '\n');// dùng để xóa ký tự rác đọc các ký tự rác đến khi nào nhấn phím enter thì sẽ out khỏi vòng lặp này. 
//				if (i == 1) {
//					if (a != c)
//					{
//						printf("\ntai khoan cua ban da bi khoa vui long lai sau 24h");
//						goto cc;//thoát hẳn khỏi hàm main out luôn chương trình
//					}
//					else break;
//				}
//				if (a == c) {
//					break;
//				}
//			}
//		}
//		printf("\nBan da nhap dung mat khau");
//		printf("\nso tien trong tai khoan cua ban la: %d", e);
//		
//		while (1)
//		{
//			printf("\nNhap vao so tien ban muon rut: ");
//			int f = scanf("%d", &b);//lưu giá trị scanf(). bản chất nếu mà scanf() đúng nó sẽ trả về giá trị 1 (true), còn sai thì trả về giá trị 0 (false)
//			while (getchar() != '\n');
//			if (0 < b && b <= e && f == 1)
//			{
//				break;
//			}
//			else
//			{
//				printf("ban da nhap sai, vui long nhap lai");
//			}
//		}
//		printf("so tien ban muon rut la: %d\n", b);
//		printf("so du hien tai con lai trong tai khoan cua ban la %d\n", e - b);
//		printf("Quy khach da giao dich thanh cong, cam on quy khach\n\n");
//		printf("Ban co muon tiep tuc giao dich, vui long nhap (y/n): ");
//		scanf("%c", &d);
//	} while (d == 'y' || d == 'Y');
//	cc:
//	return 0;
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