#include <stdio.h>

int main(void)
{/*
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");*/

	//++�Ի�
	/*int a = 10;
	printf("a�� %d\n", a);
	a++;
	printf("a�� %d\n", a);
	a++;
	printf("a�� %d\n", a);*/

	/*int b = 20;
	printf("b�� %d\n", ++b);
	printf("b�� %d\n", b++);
	printf("b�� %d\n", b);*/

	/*int i = 1;
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);*/

	//�ݺ���
	//for, while, do while

	/*for (int i = 1; i <= 10; i++)
	{
		printf("Hello World %d\n", i);
	}*/


	//while (����)[]
	/*int i = 1;
	while (i <= 10)
	{
		printf("Helloe %d\n", i++);

	}*/

	//do {} while (����);
	/*int i = 1;
	do {
		printf("Hello World %d\n", i++);

	} while (i <= 10);*/
	/*for (int i = 1; i <= 3; i++)
	{
		printf("ù ��° �ݺ��� : %d\n", i);

		for (int j = 1; j <= 5; j++)
		{
			printf(" �� ��° �ݺ��� : %d\n", j);

		}
	}
	*/

	//������
	//2��~9��

	/*for (int i = 2; i <= 9; i++)
	{
		printf("%d�� ���\n", i);
		for (int j = 1; j <= 9; j++)
		{
			printf(" %d x %d = %d\n", i, j, i*j);
		}
	}*/

	/*
	*
	**
	***
	****
	*****
	*/
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}


	return 0;
}