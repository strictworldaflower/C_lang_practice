#include <stdio.h>
int main_prinfscanf(void)
{
	printf("Hello World\n");

	//변수 : 변하는 수
	int num = 20;
	printf("%d\n", num);
	num = 21;
	printf("%d\n", num);

	//정수 : -2, -1, 0, 1, 2, ...
	//실수 : -2,0 -1.5, 0.3, 1.2,...

	//실수형 변수
	float f = 2.0f;
	printf("%.2f\n", f);

	double d = 4.428;
	printf("%.2lf\n", d);


	//상수 :변하지 않는 수. 한 번 정의하면 끝! 보통 대문자로 처리
	//PI = 3.141592xxxxx.....->3.14
	const double PI = 3.14; 
	printf("%.1lf\n", PI);

	//printf
	//간단한 연산
	int add = 3 + 7; // 10
	printf("3+7=%d\n", add);
	printf("%d x %d = %d\n", 30, 79, 30 * 79);


	//scanf : 키보드 입력을 받음
	int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);
	printf("입력값 : %d\n", input);

	//동시에 여러 숫자 입력

	int one, two, three;
	scanf_s("%d %d %d", &one, &two, &three);
	printf("일 %d 이 %d 삼 %d\n", one, two, three);

	//문자 출력
	//문자 = 1글자, 문자열 = 여러글자
	char c = 'A';
	printf("%c\n", c);

	//문자열 입력
	char str[256];
	printf("이름을 입력하세요 : ");
	scanf_s("%s", str, sizeof(str));
	printf("이름을 %s 입니다\n", str);

	//프로젝트
	//경찰관이 범죄자 정보를 캐냄 (조서 작성)
	//이름 /나이 /몸무게 /키 /무슨 범죄
	char name[256];
	printf("이름을 입력하세요 : ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("나이를 입력하세요 : ");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게를 입력하세요 : ");
	scanf_s("%f", &weight);

	double height;
	printf("키를 입력하세요 : ");
	scanf_s("%lf", &height);

	char what[256];
	printf("무슨 범죄를 저질렀나요? : ");
	scanf_s("%s", what, sizeof(what));

	//입력받은 값 출력

	printf("\n\n-- - 번죄자 정보--- \n");
	printf("이름    : %s\n", name);
	printf("나이    : %d 세\n", age);
	printf("몸무게  : %.2f kg\n", weight);
	printf("키      : %.2lf cm\n", height);
	printf("무슨 범죄 : %s\n", what);


	return 0;
}