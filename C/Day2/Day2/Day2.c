#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
			#pragma region 대입연산자

	//int a;
	//int b;

	//float c = 3.4f;

	//a = 20;
	//b = 30;

	//a = b;

	//// 기본데이타타입간에 대입은 컴파일러가
	//// 자동으로 형변환을 해줍니다.
	//// 묵시적 형변환.
	//// 실수를 정수공간에 대입할때는 묵시적 형변환을 하시면 안됩니다.
	//// 즉 유실이 일어나면 안된다 
	//a = (int)c;   // 명시적형변환

	//printf("a = %d \n", a);

	////유실이 일어나지 않기 때문에 가능
	//c = b;

	//printf("c = %f\n", c);

			#pragma endregion

			#pragma region 비트연산자

	// // 비트연산자
 //  // &(비트 And)
 //  // |(비트 Or)
 //  // ~(비트 not)
 //  // ^(배타적 Or), exclusive Or
 //  // << (왼쪽 shift)
 //  // >> (오른쪽 shift)
	//unsigned char a = 2;   // 00000010
	//unsigned char b = 1;   // 00000001
	//unsigned char ret = 0;  // 00000000

	//ret = a & b;
	//// a     : 00000010
	//// b     : 00000001
	//// a & b : 00000000
	//printf("a & b = %d\n", ret);

	//ret = a | b;
	//// a     : 00000010
	//// b     : 00000001
	//// a | b : 00000011

	//ret = ~a;
	//// a     : 00000010
	//// ~a    : 11111101
	//printf("~a = %d\n", ret);

	//ret = a ^ b;   // xor 연산자,  두비트가 같은면 0, 두비트다르면 1
	//// a     : 00000010
	//// b     : 00000001
	//// a ^ b : 00000011
	//printf("a ^ b = %d\n", ret);


			#pragma endregion

			#pragma region 컴퓨터의 뺄셈연산

	////컴퓨터는 -연산이 없다 
	////따라서 -의 경우 1의 보수로 변환후 2의 보수로 바꾼다음 
	////더하기 연산을통해서 결과를 도출한다
	//char a = 255; // 11111111

	//// 00000001
	//// 11111110 (1의 보수)
	//// 00000001
	//// 11111111 (2의 보수)

	//printf("a = %d\n", a);


	////2 - 2 
	////2 + (-2)

	//// 00000010
	//// 11111101 (1의 보수)
	//// 11111110 (2의 보수)

	////  00000010 (2)
	////  11111110 (-2)
	////  00000000

	//// 4 - 2 => 4 + (-2)
	////  00000100 (4)
	////  11111110 (-2)
	////  00000010 (2)

			#pragma endregion

			#pragma region 쉬프트연산

	//unsigned char a = 1;   // a: 00000001

	//// 왼쪽으로 1비트를 이동한다는 이야기는 x2 한것과
	//// 결과가 동일합니다.

	//// a      :   00000001
	//// a << 1 :   00000010
	//a = a << 1;   // 왼쪽 shift
	//printf("a = %d\n", a);

	//// a      :    00000010
	//// a << 2 :    00001000   
	//a = a << 2;
	//printf("a = %d\n", a);



	//// a      :    00001000  (8)
	//// a >> 1 :    00000100  (4)
	//a = a >> 1;   // 오른쪽 shitf
	//printf("a = %d\n", a);


	//// a      :   00000100 (4)
	//// a >> 2 :   00000001 (1)
	//a = a >> 2;
	//printf("a = %d\n", a);


			#pragma endregion

			#pragma region 조건문(조건 분기)

	//int inputvalue = 0;
	//printf("정수값을 입력하세요: ");
	//scanf("%d", &inputvalue);
	//
	//if (inputvalue > 10) {   // 단일 조건문
	//	printf("inputvalue: %d가 10보다 크다.\n", inputvalue);
	//}
	//
	//// C언어에서는 정수값으로 논리타입을 처리하기 때문에
	//// 정수식도 가능합니다.
	//if (!(inputvalue - 10)) {
	//	printf("inputvalue: %d과 10과 같다.\n", inputvalue);
	//}
	//
	//if (inputvalue > 10) {   // 이중조건문
	//	printf("inputvalue: %d가 10보다 크다.", inputvalue);
	//
	//}
	//else {
	//	printf("inputvalue: %d가 10보다 작거나 같다.\n", inputvalue);
	//}
	
	
			#pragma endregion

			#pragma region 다중 조건문

	//int money = 0;
	//printf("용돈 금액을 입력하세요: ");
	//scanf("%d", &money);
	//
	//
	//if (money <= 60000 && money > 40000) {
	//	printf("노래방\n");
	//}
	//else if (money > 100000) {   // 다중 조건문
	//	printf("중국집\n");
	//}
	//else if (money > 80000 && money <= 100000) {
	//	printf("친구만남\n");
	//}
	//else if (money > 60000 && money <= 80000) {
	//	printf("볼링장\n");
	//}
	//else if (money > 20000 && money <= 40000) {
	//	printf("당구장\n");
	//}
	//else {   // 위의 조건 외의 처리가 필요할때, 생략가능합니다.
	//	printf("낮잠\n");
	//}
	


			#pragma endregion

			#pragma region 조건문(선택문)

	//// Switch-case 선택문
	//// 정수값의 변화에 따라서 분기처리할 때 사용
	//
	// // 0: TV ON/OFF, 1: volume Up, 2: volume Down, 10: 리모컨 Off
	//
	////int buttonNum = 0;
	////int flag = 0;
	////int isLoop = 1;
	////
	////while (isLoop) {   // 반복문
	////	printf("리모트 컨트롤 버튼 번호를 입력하세요: ");
	////	scanf("%d", &buttonNum);
	////
	////	switch (buttonNum) {   // 선택문
	////	case 0:
	////		if (flag == 1) {
	////			flag = 0;
	////			printf("TV Off\n");
	////		}
	////		else {
	////			flag = 1;
	////			printf("TV On\n");
	////		}
	////		break;
	////
	////	case 1:
	////		printf("볼륨올려\n");
	////		break;
	////
	////	case 2:
	////		printf("볼륨내려\n");
	////		break;
	////
	////	case 10:
	////		printf("리모컨을 끕니다.\n");
	////		isLoop = 0;
	////		break;
	////
	////	default:
	////		printf("잘못된 번호\n");
	////		break;
	////	}
	////}
	//
	////if (buttonNum == 0) {
	////
	////}
	////else if (buttonNum == 1) {
	////
	////}
	////else if (buttonNum == 2) {
	////
	////}
	//
	//int inputvalue = 0;

	//printf("0 ~ 10 사이에 정수값을 입력하세요: ");
	//scanf("%d", &inputvalue);

	//switch (inputvalue) {

	//case 0:
	//	printf("입력하신 값은 0입니다.\n");
	//	break;

	//case 1:
	//case 3:
	//case 5:
	//case 7:
	//case 9:
	//	printf("입력하신 값은 홀수입니다.\n");
	//	break;

	//case 2:
	//case 4:
	//case 6:
	//case 8:
	//case 10:
	//	printf("입력하신 값은 짝수입니다.\n");
	//	break;

	//default:   // 생략가능 위의 조건외에 처리할때
	//	printf("값을 잘못 입력하셨습니다.");
	//	break;
	//}

			#pragma endregion
			
			#pragma region 무조건분기(goto)

	//int inputvalue = 0;
	//
	//
	//Start:   // 레이블
	//printf("정수값을 입력하세요: ");
	//scanf("%d", &inputvalue);
	//
	//if (inputvalue > 10) {
	//	goto Start;   // 무조건 분기 상향식분기
	//}
	//else if (inputvalue == -1) {
	//	goto Exit;   // 하향식 분기
	//}
	//
	//printf("\ninputvlaue = %d\n", inputvalue);
	//
	//goto Start;
	//
	//printf("Before Exit\n");   // 절대 실행안됨
	//
	//Exit:
	//printf("AfterExit\n");
	//
	//return 0;

			#pragma endregion

			#pragma region 반복문(for)
	
	// // 반복문
	//   // for, while, do-while
	//
	//   // for(초기식; 조건식; 증감식){
	//   //   명령어;
	//   // }
	//   // 반복횟수를 아는 경우에 사용하기 좋은 구조
	//
	//for (int i = 0; i < 10; i++) {
	//	printf("i = %d\n", i);
	//}
	//
	//int count = 0;
	//
	//for (; count > 10;) {
	//	count++;
	//
	//	printf("count = %d\n", count);
	//
	//	if (count > 10) break;   // break문은 선언된 위치에서 가장 가까운 반복문을 탈출합니다.
	//
	//}
	//
	//for (int i = 0, j = 10; i < 10 && j > 0; i += 2, j = j - 2) {
	//	printf("i = %d, j = %d\n", i, j);
	//}
	//
	//for (int i = 0; i < 10; i++) {
	//	for (int j = 0; j < 10; j++) {
	//		printf("i = %d, j = %d\n", i, j);
	//	}
	//}
	
	
			#pragma endregion

			#pragma region 반복문(while,do while)

	/*float value = 1231.123123f;
	value = -1;

	while (value > 0) {
		value -= 23.234f;
		printf("while value = %lf\n", value);
	}

	value = 1231.12312f;

	value = -1;
	do {
		value -= 23.234f;

		printf("do - while value = %lf\n", value);
	} while (value > 0);*/

			#pragma endregion

			#pragma region goto문 활용 예시
//
//	int count = 0;
//	int count2 = 100;
//	int count3 = 1000;
//
//	int flag = 0;
//
//	// 중첩된 반복문을 탈출할때 
//
//	while (1) {
//		count = 1000;
//		count2 = 100;
//		count3 = 1000;
//
//		while (count > 0) {
//			count--;
//			count2 = 100;
//			while (count2 > 0) {
//				count2--;
//				count3 = 1000;
//				while (count3 > 0) {
//					count3--;
//
//					printf("count = %d, count2 = %d, count3 = %d\n"
//						, count, count2, count3);
//
//					if (count > 10 && count2 > 50 && count3 < 300) {
//						flag = 1;
//						break;
//					}
//				}
//				if (flag == 1) {
//					break;
//				}
//			}
//			if (flag == 1) {
//				break;
//			}
//		}
//
//		if (flag == 1) {
//			break;
//		}
//	}
//
//	// 중첩된 반복문을 탈출 할때
//	// goto문을 사용하면 깔끔하게 처리 할 수 있습니다.
//	while (1) {
//		count = 1000;
//		count2 = 100;
//		count3 = 1000;
//
//		while (count > 0) {
//			count--;
//			count2 = 100;
//			while (count2 > 0) {
//				count2--;
//				count3 = 1000;
//				while (count3 > 0) {
//					count3--;
//
//					printf("count = %d, count2 = %d, count3 = %d\n"
//						, count, count2, count3);
//
//					if (count > 10 && count2 > 50 && count3 < 300) {
//						goto LoopExit;
//					}
//				}
//			}
//		}
//	}
//
//LoopExit:


			#pragma endregion

			#pragma region 포인터

	int a;
	a = 20;
	
	printf("&a = %p\n", &a);
	//C/C++ 언어에는 메모리공간상에 주소값을 저장하는 데이터 타입이 있습니다
	//이를 포인터형 이라고 한다 &는 주소 연산자

	//*는 포인터 형지자정자라고 한다 
	int* pa; //int*는 인트형 포인터를 저장하는 데이터 타입 
	pa = &a; //pa라는 int형 포인터 변수에 a값의 주소를 저장	

	int** ppa;// int** 인트형 포인터를 저장하는 데이터 타입의 포인터를 저장
	ppa = &pa;

	// 주소값 앞에 붙이는 *는 포인터 연산자 
	*ppa;
	*&pa;
	pa;
	//모두 같은 값

	**ppa;
	**&pa;
	*pa;
	*&a;
	a;
	//모두 같은 값


	printf("&**ppa = %p, &**&pa = %p, &*pa = %p, &*&a = %p, &a = %p\n"
		, &**ppa, &**&pa, &*pa, &*&a, &a);

	printf("**ppa = %d, **&pa = %d, *pa = %d, *&a = %d, a = %d\n"
		, **ppa, **&pa, *pa, *&a, a);

			#pragma endregion


	return 0;
}

