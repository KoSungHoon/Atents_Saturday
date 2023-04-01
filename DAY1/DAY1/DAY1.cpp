

#include <iostream>

using namespace std;
int main()
{
    //변수명의 역할은 나중에 실행될때 할당될 메모리공간을 대신한다
    //연산시에 정수 나누기 정수 일때는 정수가 나오므로 제대로 나오 지 않는다 따라서 정수를 실수화 시켜야한다
    /*int a = 1;
    int b = 2;

    int ret = a / b;
    cout << "ret = " << ret << endl;

    float fret = a / b;
    cout << "fret = " << fret << endl;

    fret = a / (float)b;
    cout << "fret = " << fret << endl;


    a = 11;
    b = 2;

    ret = a % b;
    cout << "ret = " << ret << endl;

    */

    // 관계 연산자
  // <, >, <=, >= , == , !=
   /* int a = 20;
    int b = 30;

    bool ret = a < b;
    cout << a << " < " << b << " = " << ret << endl;

    ret = a > b;
    cout << a << " > " << b << " = " << ret << endl;

    ret = a <= b;
    cout << a << " <= " << b << " = " << ret << endl;

    ret = a >= b;
    cout << a << " >= " << b << " = " << ret << endl;

    ret = a == b;
    cout << a << " == " << b << " = " << ret << endl;

    ret = a != b;
    cout << a << " != " << b << " = " << ret << endl;

  */

  //int min = 0;
  //int max = 10;

  //int x = 0;
  //cout << "정수값을 입력하세요 .";
  //cin >> x; //키보드에서 값을 입력받을때 cin을 사용

  //bool isRange = min < x&& x < max;
  //cout << x << "가" << min << "과" << max << "사이에" << isRange << endl;

  //논리 연산자 
  //&& (논리 And) ,||(논리 or),!(논리 not)

  /*bool True = 1;
  bool False = 0;

  bool ret = True && True;
  cout << "True && True = " << ret << endl;
   ret = True && False;
  cout << "True && False = " << ret << endl;
   ret = False && True;
  cout << "False && True = " << ret << endl;
   ret = False && False;
  cout << "False && False = " << ret << endl;

   ret = True || True;
  cout << "True || True = " << ret << endl;
   ret = True || False;
  cout << "True || False = " << ret << endl;
   ret = False || True;
  cout << "False || True = " << ret << endl;
   ret = False || False;
  cout << "False || False = " << ret << endl;

  ret = !True;
  cout << "!True = " << ret;
  ret = !False;
  cout << "!False = " << ret;*/

  //int a = 20;
  //++a;//전위식 
  ////a=a+1
  //cout << "++a = " << a << endl;
  //a++; //후위식 
  ////a=a+1
  //cout << "a++ = " << a << endl;
  //int c = ++a;
  ////a=a+1;
  ////c=a;
  //cout << "c = " << c << endl;
  //c = a++;
  //cout << "c = " << c << endl;
  //cout << "a = " << a << endl;
  ////c=a;
  ////a=a+1;

  //int d = 0;
  //float e = 1.2f;
  //d = e; //묵시적형변환이 일어나서 오류가 없다 0.2를 담지 못함 
  //d = (int)e; //명시적 형변환 

  //e = d;//이 경우는 왼쪽이 더 큰 값을 담을수 있는 공간이므로 유실이 일어나지 않는다

  //제어문,조건문,분기문
  //조건분기 if,if-else,if-else-if,switch-case
    int a = 0;
    cout << "정수 값을 입력하세요:." << endl;
    cin >> a;
    if (a > 20) {
        cout << a << "가 20 보다 큽니다" << endl;
    }

    if (a > 20) {
        cout << a << "가 20 보다 큽니다" << endl;
    }
    else
    {
        cout << a << "가 20 보다 작습니다" << endl;
    }


    //무조건분기
    //goto

    //반복문 
    //for,while,do-while
    return 0;
   
}
