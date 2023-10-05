#include <stdio.h>
int main_prinfscanf(void)
{
	printf("Hello World\n");

	//���� : ���ϴ� ��
	int num = 20;
	printf("%d\n", num);
	num = 21;
	printf("%d\n", num);

	//���� : -2, -1, 0, 1, 2, ...
	//�Ǽ� : -2,0 -1.5, 0.3, 1.2,...

	//�Ǽ��� ����
	float f = 2.0f;
	printf("%.2f\n", f);

	double d = 4.428;
	printf("%.2lf\n", d);


	//��� :������ �ʴ� ��. �� �� �����ϸ� ��! ���� �빮�ڷ� ó��
	//PI = 3.141592xxxxx.....->3.14
	const double PI = 3.14; 
	printf("%.1lf\n", PI);

	//printf
	//������ ����
	int add = 3 + 7; // 10
	printf("3+7=%d\n", add);
	printf("%d x %d = %d\n", 30, 79, 30 * 79);


	//scanf : Ű���� �Է��� ����
	int input;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &input);
	printf("�Է°� : %d\n", input);

	//���ÿ� ���� ���� �Է�

	int one, two, three;
	scanf_s("%d %d %d", &one, &two, &three);
	printf("�� %d �� %d �� %d\n", one, two, three);

	//���� ���
	//���� = 1����, ���ڿ� = ��������
	char c = 'A';
	printf("%c\n", c);

	//���ڿ� �Է�
	char str[256];
	printf("�̸��� �Է��ϼ��� : ");
	scanf_s("%s", str, sizeof(str));
	printf("�̸��� %s �Դϴ�\n", str);

	//������Ʈ
	//�������� ������ ������ ĳ�� (���� �ۼ�)
	//�̸� /���� /������ /Ű /���� ����
	char name[256];
	printf("�̸��� �Է��ϼ��� : ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d", &age);

	float weight;
	printf("�����Ը� �Է��ϼ��� : ");
	scanf_s("%f", &weight);

	double height;
	printf("Ű�� �Է��ϼ��� : ");
	scanf_s("%lf", &height);

	char what[256];
	printf("���� ���˸� ����������? : ");
	scanf_s("%s", what, sizeof(what));

	//�Է¹��� �� ���

	printf("\n\n-- - ������ ����--- \n");
	printf("�̸�    : %s\n", name);
	printf("����    : %d ��\n", age);
	printf("������  : %.2f kg\n", weight);
	printf("Ű      : %.2lf cm\n", height);
	printf("���� ���� : %s\n", what);


	return 0;
}