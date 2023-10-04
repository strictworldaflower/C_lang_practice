//#include <stdio.h>
//
//int main_loop(void)
//{/*
//	printf("Hello World\n");
//	printf("Hello World\n");
//	printf("Hello World\n");
//	printf("Hello World\n");
//	printf("Hello World\n");
//	printf("Hello World\n");
//	printf("Hello World\n");
//	printf("Hello World\n");
//	printf("Hello World\n");
//	printf("Hello World\n");*/
//
//	//++뿔뿔
//	/*int a = 10;
//	printf("a는 %d\n", a);
//	a++;
//	printf("a는 %d\n", a);
//	a++;
//	printf("a는 %d\n", a);*/
//
//	/*int b = 20;
//	printf("b는 %d\n", ++b);
//	printf("b는 %d\n", b++);
//	printf("b는 %d\n", b);*/
//
//	/*int i = 1;
//	printf("Hello World %d\n", i++);
//	printf("Hello World %d\n", i++);
//	printf("Hello World %d\n", i++);
//	printf("Hello World %d\n", i++);
//	printf("Hello World %d\n", i++);
//	printf("Hello World %d\n", i++);
//	printf("Hello World %d\n", i++);
//	printf("Hello World %d\n", i++);
//	printf("Hello World %d\n", i++);
//	printf("Hello World %d\n", i++);
//	printf("Hello World %d\n", i++);
//	printf("Hello World %d\n", i++);
//	printf("Hello World %d\n", i++);
//	printf("Hello World %d\n", i++);
//	printf("Hello World %d\n", i++);*/
//
//	//반복문
//	//for, while, do while
//
//	/*for (int i = 1; i <= 10; i++)
//	{
//		printf("Hello World %d\n", i);
//	}*/
//
//
//	//while (조건)[]
//	/*int i = 1;
//	while (i <= 10)
//	{
//		printf("Helloe %d\n", i++);
//
//	}*/
//
//	//do {} while (조건);
//	/*int i = 1;
//	do {
//		printf("Hello World %d\n", i++);
//
//	} while (i <= 10);*/
//	/*for (int i = 1; i <= 3; i++)
//	{
//		printf("첫 번째 반복문 : %d\n", i);
//
//		for (int j = 1; j <= 5; j++)
//		{
//			printf(" 두 번째 반복문 : %d\n", j);
//
//		}
//	}
//	*/
//
//	//구구단
//	//2단~9단
//
//	/*for (int i = 2; i <= 9; i++)
//	{
//		printf("%d단 계산\n", i);
//		for (int j = 1; j <= 9; j++)
//		{
//			printf(" %d x %d = %d\n", i, j, i*j);
//		}
//	}*/
//
//	/*
//	*
//	**
//	***
//	****
//	*****
//	*/
//	/*for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j<=i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}*/
///*
//       *
//	  **
//	 ***
//	****
//   *****
//*/
///*
//	SSSS*
//	SSS**
//	SS***
//	S****
//    *****
//*/
////for (int i = 0; i < 5; i++)
////{
////	for (int j = i; j < 5 - 1; j++)
////	{
////		printf(" ");
////	}
////	for (int k = 0; k <= i; k++)
////	{
////		printf("*");
////	}
////	printf("\n");
////}
////피라미드 쌓기
///*
//SSSS*
//SSS*** 
//SS*****
//S*******
//*********
//
//
//
//*/
//int floor;
//printf("몇 층으로 쌓겠느냐?");
//scanf_s("%d", &floor);
//for (int i = 0; i < floor; i++)
//{
//	for (int j = i; j < floor - 1; j++)
//		{
//			printf(" ");
//		}
//		for (int k = 0; k < i * 2 + 1; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}