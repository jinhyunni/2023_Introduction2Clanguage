#include <stdio.h>

int main()
{	
	//What scanf function do?
	//키보드에서 입력한 값을 변수에 저장하는 함수!
	//Form: scanf("(변환명세서)",&변수명)

	int n1;
	float n2;
	double n3;
	char c1;
	char c2[10];
	

	//scanf를 이용하여 값을 저장할때 알맞은 변환명세서를 써야 한다.

 //	printf("키보드에서 정수 하나를 입력하시오: \n");
 //	scanf("%d", &n1);
 //	printf("입력한 정수: %d\n", n1);
 //	printf("\n");
 //
 //	printf("키보드에서 실수(float) 하나를 입력하세요: \n");
 //	scanf("%f", &n2);
 //	printf("키보드에서 입력한 실수: %f\n", n2);
 //	printf("\n");
 //
 //	printf("키보드에서 실수(double) 하나를 입력하세요: \n");
 //	scanf("%lf", &n3);
 //	printf("키보드에서 입력한 실수: %lf\n", n3);
 //	printf("\n");
 //	
 //	//버퍼는 엔터도 인식!
 //	//문자를 입력하기 전에는 fflush(stdin); 함수를 사용하여
 //	//버퍼에 입력되어 있는 값을 모두 지워주어야 한다.
 //	fflush(stdin);
 //	printf("키보드에서 문자 한개를 입력하세요: \n");
 //	scanf("%c", &c1);
 //	printf("키보드에서 입력한 문자: %c\n", c1);
 //	printf("\n");
 //	
 //	fflush(stdin);
 //	printf("키보드에서 문자열(under 10 character)을 입력하세요: \n");
 //	scanf("%s", &c2);
 //	printf("키보드에서 입력한 문자열: %s", c2);
 //	printf("\n");

	//type in multiple values
	printf("정수, 실수(double type), 문자 1개, 문자열을 차례로 입력하세요\n");

	scanf("%d%f%lf", &n1, &n2, &n3);

	fflush(stdin);
	scanf("%c", &c1);

	fflush(stdin);
	scanf("%s", &c2);

	printf("정수:%d 실수(float):%f 실수(double): %lf 문자1개:%c 문자열:%s ", n1, n2, n3, c1, c2);
	printf("\n");
	
 //	////발생하는 문제: buffer가 enter 키도 문자로 인식하여 문자1개가 저장되지 않는다
 //	///문제 해결 방법...? 1. 문자/문자열 입력은 getchar() 함수를 이용한다.
 //
 //	printf("정수, 실수(double type), 문자 1개, 문자열을 차례로 입력하세요\n");
 //	scanf("%d%lf", &n1, &n3);
 //	getchar();
 //		
 //	char c3 = getchar();
 //	char c4[10] = {};
 //	c4[10] = getchar();
 //
 //	printf("정수:%d 실수:%lf 문자1개:%c 문자열:%s ", n1, n3, c3, c4);
	
	return 0;
}
