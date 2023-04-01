

#include <iostream>
#include <string>
using namespace std;
//객체지향 프로그래밍 //캡슐화 -> 클래스형 데이터 타입
//실체로 존제하된 Son객체는 인스턴스
//캡슐화의 목적은 정보 은닉이다
class Son {
   
public:
private:
    string juminNum; //맴버변수
    string address;
    int birthday=0;
    string phoneNum;
    //생성자
public:
    Son() {
        cout << "Son::Son() 생성자"<<endl;
    }
    //인자를 받는 생성자를 하나라도 만들면 
    //컴파일러는 생성자가 있기 때문에 기본 생성자를 자동으로 만들어 주지 않는다
    //기본 생성자가 없다라는 의미는 인자를 받지않고 객체를 만드는것을 허용하지 않겠다
    Son(string juminNum, string address, int birthday, string phoneNum) {
        this->juminNum = juminNum;
        this->address = address;
        this->birthday = birthday;
        this->phoneNum = phoneNum;
    }
public:
    void SetJuminNum(string val) {
        juminNum = val;
    }
    string GetJuminNum(){
        return juminNum;
    }
    void SetAddress(string val) {
        address = val;
    }
    string GetAddress() {
        return address;
    }
    void SetBirthday(int val) {
        birthday = val;
    }
    int GetBirthday() {
        return birthday;
    }
    void SetPhoneNum(string val) {
        phoneNum = val;
    }
    string GetPhoneNum() {
        return phoneNum;
    }

};

//접근 제어자 
//private 접근 못하게 하겠다
///protected 자식한텐 허용하겠다
//public 모두 허용하겠다

//맴버변수를 바로 접근하도록 허용하지 마라(권고사항)
//맴버함수를 통해서 접근하도록 해라
//맴버변수를 접근하는 맴버함수를 Set/Get 함수

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
    //int a = 0;
    //cout << "정수 값을 입력하세요:." << endl;
    //cin >> a;
    //if (a > 20) {
    //    cout << a << "가 20 보다 큽니다" << endl;
    //}

    //if (a > 20) {
    //    cout << a << "가 20 보다 큽니다" << endl;
    //}
    //else
    //{
    //    cout << a << "가 20 보다 작습니다" << endl;
    //}

    ////다중조건문
    //int money = 0;

    //cout << "용돈을 입력하세요: ";
    //cin >> money;

    //if (money > 100000) {   // 다중 조건문
    //    cout << "영화" << endl;
    //}
    //else if (money > 80000) {
    //    cout << "볼링장" << endl;
    //}
    //else if (money > 60000) {
    //    cout << "당구장" << endl;
    //}
    //else if (money > 40000) {
    //    cout << "중국집" << endl;
    //}
    //else if (money > 20000) {
    //    cout << "PC방" << endl;
    //}
    //else {
    //    cout << "낮잠" << endl;
    //}

    //if (money <= 60000 && money > 40000) {
    //    cout << "중국집" << endl;
    //}
    //else if (money > 100000) {   // 다중 조건문
    //    cout << "영화" << endl;
    //}
    //else if (money <= 100000 && money > 80000) {
    //    cout << "볼링장" << endl;
    //}
    //else if (money <= 80000 && money > 60000) {
    //    cout << "당구장" << endl;
    //}
    //else if (money <= 40000 && money > 20000) {
    //    cout << "PC방" << endl;
    //}
    //else {
    //    cout << "낮잠" << endl;
    //}


//switch 문
//정수값의 변화에 따라서 분기처리 할때
//int remoteNum = 0;
//cout << "리모컨 번호를 입력하세요";
//cin >> remoteNum;
//switch (remoteNum)
//{
//case 0:
//    cout << "TV ON"<<endl;
//    break;
//case 1:
//    cout << "TV OFF" << endl;
//    break;
//case 2:
//    cout << "불륨 ON" << endl;
//    break;
//case 3:
//    cout << "불륨 OFF" << endl;
//    break;
//    default:
//        cout << "잘모소딘 번호" << endl;
//        break;
//}

//무조건분기
//goto
//int inputValue = 0;
//Start:
//cout << "정수값을 입력하세요";
//cin >> inputValue;
//
//if (inputValue < 0) {
//    cout << inputValue << "가 입력되어서 프로그램을 종료합니다." << endl;
//    goto Exit;
//}
// cout << inputValue << "가 입력되어서 프로그램을 다시 시작합니다." << endl;
// goto Start;
//
//cout << "절대 출력안됨"<<endl;
//
//Exit:
//cout << "프로그램 종료" << endl;

    //반복문 
    //for,while,do-while
//for (int i = 0; i < 10; i++) {
//    cout << "i = " << i << endl;
//}
//
//for (int i = 0; i < 10; i++) {
//    for (int j = 0; j < 10; j++) {
//        cout << "i = " << i <<", j = "<<j<<endl;
//    }
//}
//float value = 32564.123f;
//while (value>0)
//{
//    value -= 23.456f;
//}


Son a; //클래스형 데이터타입의 Son변수 a를 만듬
       //클래스형 데이터타입으로 만든 변수는 객체라고 한다

a.SetJuminNum("000000 0000000");
a.SetAddress("러던");
a.SetBirthday(19931010);
a.SetPhoneNum( "010 0000 0000");

cout << "주민번호: " << a.GetJuminNum() << endl;
cout << "주소: " << a.GetAddress() << endl;
cout << "생년월일: " << a.GetBirthday() << endl;
cout << "전화번호: " << a.GetPhoneNum() << endl;

cout << "--------------------------------------------"<< endl;

Son a2("11111111","리버풀",19931010,"010-2222-2222");
cout << "주민번호: " << a2.GetJuminNum() << endl;
cout << "주소: " << a2.GetAddress() << endl;
cout << "생년월일: " << a2.GetBirthday() << endl;
cout << "전화번호: " << a2.GetPhoneNum() << endl;
    return 0;
   
}
