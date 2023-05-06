#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*
	//출력 장치: 스피커 모니터  입력 장치 : 키보드 마우스  
	//연산 장치 : CPU 저장 장치 : HDD SSD Rem
	//메모리는 메모리 주소값을 알아야 한다
	

	//데이터 타입 
	//정수,실수,문자 
	
	//정수
	//-1,0,1 등 셀수 있는 수
	//음의 정수,0,양의 정수
	//short(2바이트),long(4바이트),int(system 의존적)(4바이트) ->컴퓨터가 한번에 처리 할수 있는 단위 
	//unsigned 키워드 : 16비트의 공간을 0과 양의 정수를 저장하는 공간으로 사용하겠다 

	//실수
	//float(4바이트),double(8바이트)
	//부동소수점 표기법
	//  1비트   7비트  나머지 
	//  음양    지수   가수 

	//문자형 
	//char(1바이트),
	
	//변수: 값을 저장하는 역할
	//타입 변수명;
	int a;

	//변수명으로는 영대소문자,숫자,_,
	//변수는 숫자를 첫글자로 사용 불가능 

	//변수에 담길 값의 설명하는 단어나 문장을 사용해야 좋다 
	*/

	/*
	// 변수에 값을 채우고 출력해보세요..

	short a = -32768;
	long b = -2147483647 - 1;
	int c = -2147483647 - 1;

	unsigned short d = 32767;
	unsigned long e = 4294967295;
	unsigned int f = 4294967295;

	printf("a = %d, b = %d, c = %d\n", a, b, c);

	printf("d = %d, e = %d, f = %d\n", d, e, f);

	float g = 3.4E-38;
	double h = -1.79769e+308;

	printf("g = %.40f, h = %lf\n", g, h);

	char i = -128;
	unsigned char j = 255;
	printf("i = %c, j = %c\n", i, j);
	*/

	/*
	int a = 1;
	int b = 2;
	int ret = 0;

	ret = a + b;   // 정수 + 정수 = 정수
	printf("%d + %d = %d\n", a, b, ret);

	ret = a - b;   // 정수 - 정수 = 정수
	printf("%d - %d = %d\n", a, b, ret);

	ret = a * b;   // 정수 * 정수 = 정수
	printf("%d x %d = %d\n", a, b, ret);

	ret = a / b;   // 정수 / 정수 = 정수
	printf("%d / %d = %d\n", a, b, ret);

	float fret = a / (float)b;
	printf("%d / %d = %f\n", a, b, fret);
	*/

	/*
	srand(time(NULL));

	int randvalue = rand();
	int direction = randvalue % 4;

	printf("randvalue = %d, direction = %d\n", randvalue, direction);

	randvalue = rand();
	direction = randvalue % 4;

	printf("randvalue = %d, direction = %d\n", randvalue, direction);


	randvalue = rand();
	direction = randvalue % 4;

	printf("randvalue = %d, direction = %d\n", randvalue, direction);


	randvalue = rand();
	direction = randvalue % 4;

	printf("randvalue = %d, direction = %d\n", randvalue, direction);

	randvalue = rand();
	direction = randvalue % 4;

	printf("randvalue = %d, direction = %d\n", randvalue, direction);
	*/

	/*
	int a = 20;
	
	a = -a;   // 부호연산자
	printf("a = %d\n", a);
	
	// 관계연산자
	// <, >, <= , >= , == , !=
	int b = 20;
	int c = 30;
	
	int ret = b < c;   // 관계연산자의 연산의 결과값의 데이타 타입은? 참/ 거짓   (논리값)
	// C언어에는 논리타입이 없습니다.
	// 정수값을 가지고 논리값을 처리합니다.
	// 0은 거짓, 0이외 값은 참으로 처리하는 특징이 있습니다.
	
	printf(" b:%d < c:%d = %d\n", b, c, ret);
	
	ret = b > c;
	printf(" b:%d > c:%d = %d\n", b, c, ret);
	
	ret = b <= c;
	printf(" b:%d <= c:%d = %d\n", b, c, ret);
	
	ret = b >= c;
	printf(" b:%d >= c:%d = %d\n", b, c, ret);
	
	ret = b == c;
	printf(" b:%d == c:%d = %d\n", b, c, ret);
	
	ret = b != c;
	printf(" b:%d != c:%d = %d\n", b, c, ret);
*/
	
	/*
	// 논리연산자
	// && (논리 And) 그리고
	// || (논리 Or) 또는/혹은
	// ! (논리 Not)
	// 논리값을 연산할때 사용
	int TRUE = 1;
	int FALSE = 0;
	
	int ret = TRUE && TRUE;
	printf("TRUE && TRUE = %d\n", ret);
	ret = TRUE && FALSE;
	printf("TRUE && FALSE = %d\n", ret);
	ret = FALSE && TRUE;
	printf("FALSE && TRUE = %d\n", ret);
	ret = FALSE && FALSE;
	printf("FALSE && FALSE = %d\n", ret);
	
	printf("\n\n");
	ret = TRUE || TRUE;
	printf("TRUE || TRUE = %d\n", ret);
	ret = TRUE || FALSE;
	printf("TRUE || FALSE = %d\n", ret);
	ret = FALSE || TRUE;
	printf("FALSE || TRUE = %d\n", ret);
	ret = FALSE || FALSE;
	printf("FALSE || FALSE = %d\n", ret);
	
	printf("\n\n");
	
	ret = !TRUE;
	printf("!TRUE = %d\n", ret);
	
	ret = !FALSE;
	printf("!FALSE = %d\n", ret);
*/

	/*
	// 관계연산자의 연산의 결과값을 데이타 타입? 논리타입
	// 논리연산자의 피연산자의 데이타 타입 논리타입
	
		
	int x = 0;
	
	printf("x 값을 입력하세요: ");
	scanf("%d", &x);   // scanf함수는 키보드에서 값을 입력 받을 때 사용하는 함수입니다.
	// 정수: %d, 실수: %f, 문자: %c, 문자열: %s
	
	// x의 값이 0과 10사이에 있는지 확인하는 로직
	int ret = x > 0 && x < 10; // 0 < x < 10
	
	printf("x: %d는 0과 10사이에 %d\n", x, ret);

	*/

	/*
	//숙제
	//점 (x,y)가 박스 0,0~10,10 사이에 있는지 확인하는 로직을 만들어라
	int x = 0;
	int y = 0;
	
	int lefttopX = 0;
	int lefttopy = 0;
	int rightBottomX = 10;
	int rightBottomY = 10;
	
	printf("점 x의 값을 입력하세요: ");
	scanf("%d", &x);
	printf("점 y의 값을 입력하세요: ");
	scanf("%d", &y);
	
	if ((x > lefttopX && x < rightBottomX) && (y > lefttopy && y < rightBottomY)) {
		printf("박스 안입니다");
	}
	else
	{
		printf("박스 밖입니다");
	}
*/

	/*
	// 조건연산자
	   // 간단하게 조건에 따른 처리를 할때 사용.
	int a = 20;
	int b = 30;
	int max = a > b ? a : b;
	
	printf("a:%d 와 b:%d 중 큰값은 %d\n", a, b, max);
	
	a < b ? printf("a:%d가 크다.", a) : printf("b:%d가 크거나 같다", b);
	*/

	/*
	   int a = 20;
   int c = 0;

   a++;   // 후위식
   // a = a + 1;

   printf("a++ = %d\n", a);

   ++a;   // 전위식
   // a = a + 1;
   printf("++a = %d\n", a);

   c = a++;
   // c = a;
   // a = a + 1;
   printf("c = %d, a = %d\n", c, a);

   c = ++a;
   // a = a + 1;
   // c = a;

   printf("c = %d, a = %d\n", c, a);
	*/

	return 0;
}

