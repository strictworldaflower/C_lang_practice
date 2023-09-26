#include <stdio.h>
int main_prinfscanf(void)
{
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/

	/*float f = 46.5f;
	printf("%.2f\n", f);
	double d = 4.428;
	printf("%.2lf\n", d);*/
	//const int YEAR = 2000;
	//printf("태어난 년도 : %d\n", YEAR);
	//연산
	//int add = 3 + 7; //0
	//printf("3+7=%d\n", add);
	//printf("%d x %d = %d\n", 30, 79, 30 * 79);

	/*int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);
	printf("입력값 : %d\n", input)*/


	/*int one, two, three;
	printf("3개의 정수를입력하세요 : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 값 : %d\n", one);
	printf("첫번째 값 : %d\n", two);
	printf("첫번째 값 : %d\n", three);*/

/*	char c = 'A';
	printf("%c\n", c);*/

		/*char str[256];
		scanf_s("%s", str, sizeof(str));
		printf("%s\n", str);*/
	char name[256];
	printf("이름이 뭐예요?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("몇살이에요 ?");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게는 몇kg이에요?");
	scanf_s("%f", &weight);

	double height;
	printf("키는 몇 cm이에요?");
	scanf_s("%lf", &height);

	char what[256];
	printf("무슨 범죄를 저질렀어요?");
	scanf_s("%s", what, sizeof(what));
	//조서 내용 출력

	printf("\n\n-- - 번죄자 정보-- - \n\n");
	printf("이름 : %s\n", name);
	printf("나이 : %d\n", age);
	printf("몸무게 : %.2f\n", weight);
	printf("키 : %.2lf\n", height);
	printf("범죄 : %s\n", what);


	return 0;
}