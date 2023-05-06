#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<String>

//#include "Complex.h"
using namespace std;
class Student {
private:
    string _name;
    int _grade;
    int _classNum;
    const int _MAX;   // 상수형 멤버변수
    int& _ref;   //  참조형 멤버변수

public:
    //상수형 변수와 참조형 맴버변수는 메모리 할당시에 바로 값이 넣어져야 해서 오류가 난다
    Student(string name, int grade, int classNum, int MAX, int& ref)
        : _name(name),_grade(grade),_classNum(classNum),_MAX(MAX),_ref(ref) //생성자 초기화 리스트 메모리 생성과 동시에 넣어주는 C++에서는 초기화 리스트를 써야 더 효율적이다
    {
        //불가능
       /* name = _name;
        _grade = grade;
        _classNum = classNum;
        _MAX = MAX;
        _ref = ref;*/
    }

    void Info() {
        cout << "이름: " << _name << endl;
        cout << "학년: " << _grade << endl;
        cout << "반: " << _classNum << endl;
        cout << "전체 학생수: " << _MAX << endl;
        cout << "참조형변수: " << _ref << endl;
    }
};

class Car {
private:
    string _modelName;
    float _currentSpeed;
    const int MAXSPEED = 210;

public:
    static int SellCount;   // 정적멤버변수 클래스변수 즉 같은 클래스의 객체들이 공유한다 

    Car(string modelName, float currentSpeed) // 생성자
        : _modelName(modelName), _currentSpeed(currentSpeed)
    {
        SellCount++;
    }

    ~Car() {   // 소멸자 : 객체가 소멸될때 호출 됩니다.
        SellCount--;
    }
    // 정적맴버함수는 객체를 생성하지 않아도 클래스를 통해서 접근이 가능하다 
    //그래서 정적맴버함수에서는 맴버변수에 접근하면 안된다 
    static int GetSellCount() { //정적 맴버함수 클래스 함수 
        return SellCount;
    }

    void Accelerate() {
        _currentSpeed += 10.0f;

        if (_currentSpeed > MAXSPEED) {
            _currentSpeed = MAXSPEED;
        }
    }

    void Break() {
        _currentSpeed -= 10;
        if (_currentSpeed < 0) {
            _currentSpeed = 0.0f;
        }
    }

    void DisplayCurrentSpeed() {
        cout << _modelName << "의 현재 속도는 " << _currentSpeed << "입니다." << endl;
    }

};
//int Car::SellCount = 0; //C++에서 스태틱은 클래스 외부에서 초기화 해줘야 한다

//정적맴버 함수의 사용 예 객체를 일일히 생성하지 않고 사용하고 싶을때 
class Utility {
public:
   static int add(int a, int b) {
      return a + b;
   }

   static int sub(int a, int b) {
      return a - b;
   }

   static int mul(int a, int b) {
      return a * b;
   }

   static float div(int a, int b) {
      return a / (float)b;
   }
};

class Pig {
private:
    string _name;
    int _healthRate;
    int _age;
    int _weight;

public:
    Pig(string name, int healthRate, int age, int weight)
        : _name(name), _healthRate(healthRate), _age(age), _weight(weight) {}

    void ShowHealthState()
    {
        cout << _name << "의 ";
        if (_healthRate > 80) {
            cout << "건강이 아주 좋음" << endl;
        }
        else if (_healthRate > 60) {
            cout << "건강함" << endl;
        }
        else if (_healthRate > 40) {
            cout << "건강조심" << endl;
        }
        else {
            cout << "병원진찰요" << endl;
        }
    }

    void Info() {
                          //this->_name 형태이지만 this가 생략된거다 
        cout << "이름: " << _name << endl;
        cout << "건강지수: " << _healthRate << endl;
        cout << "나이: " << _age << endl;
        cout << "몸무게: " << _weight << endl << endl;
        cout << "this 포인터: " <<this << endl;
    }
};

/*
//오버로딩
// C 에서는 불가능하다 
//같은 이름의 함수를 만드는 것 
//C++은 네임맹글링이라는 방법으로 함수이름을 네이밍합니다
//네임맹글링: 함수명+매개변수의 데이터타입을 포함 
int add(int a, int b) { // addXX
    return a + b;
}
float add(float a, float b) {//addYY
    return a + b;
}
double add(double a, double b) {
    return a + b;
}
string add(string a, string b) {
    return a + b; 
}
*/

class Tank {
private: 
    string _name;
    int _firePower;
    int _fireCount;
public:

    Tank() {}
    Tank(string name,int firePower,int fireCount)
        :_name(name),_firePower(firePower),_fireCount(fireCount) {}
    void Init(string name, int firePower, int fireCount) {
        _name = name;
        _firePower = firePower;
        _fireCount = fireCount;
    }
    void Shoot() {
        cout << _name << "이 " << _firePower << "로 포탄을 발사합니다" << endl;
        _fireCount--;
        cout << "남아 있는 포탄은 " << _fireCount << "입니다 " << endl;
    }
};

class Complex {
private:
    int _real;
    int _imaginary;

public:
    Complex(int real, int imaginary)
        : _real(real), _imaginary(imaginary) {}
   /* Complex(Complex& ref)
        :_real(ref._real), _imaginary(ref._imaginary) 
    {
        cout << "Complex 복사생성자" << endl;
    }*/ //복사 생성자의 모습
    void info() {
        cout << _real << showpos << _imaginary << "i";

        cout << noshowpos;
    }
};

class DynamicArray {
private:
    int* _parr;
    int _size;

public:
    DynamicArray(int size)
        : _size(size)
    {
        _parr = new int[_size];
    }

    DynamicArray(DynamicArray& ref)
        : _size(ref._size)
    {
        _parr = new int[_size];

        for (int i = 0; i < _size; i++) {
            _parr[i] = ref._parr[i];
        }
    }

    ~DynamicArray() {
        delete[] _parr;
    }

    void SetIndex(int index, int value) {
        _parr[index] = value;
    }

    int GetIndex(int index) {
        return _parr[index];
    }

    int GetSize() {
        return _size;
    }
};


int main()
{
    // //참조형 변수와 포인터형 변수 
    // int a;
    // a = 20;
    // int b;
    // b = 1000;
    // // 참조형변수는 변수를 만듦과 동시에 초기화를 해야 한다.
    //// 참조형변수는 초기화값으로 전달된 변수의 메모리주소값을 저장한 후에
    //// 저장된 메모리주소값을 변경할 수 없습니다.
    // int& refa= a; //refa를 참조형변수 a의 별칭인 refa가 만들어 졌다
    // //int& refa; XX
    // //refa=a;  XX
    // refa = 100;
    // cout << "a = " << a << endl;
    // cout << "refa = " << refa << endl;
    // int* pa; //포인트형 변수 인트형 주소값을 저장한다
    // pa = &a; 
    // *pa = 2000;
    // cout << "a = " << a << endl;
    // cout << "refa = " << refa << endl;
    // cout << "*pa = " << *pa << endl;
    // pa = &b;//pa 포인터형변수에 b변수의 메모리 조소값을 저장
    // *pa = 100000;
    // cout << "a = " << a << endl;
    // cout << "b = " << b << endl;
    // cout << "refa = " << refa << endl;
    // cout << "*pa = " << *pa << endl;
    // //상수형 변수는 만듦과 동시에 초기화를 해줘야 한다 
    // //상수형변수는 변수를 만든 후에 값을 변경 할수 없다
    // const int Max = 1000; //상수형 변수 
    // //MAX = 20000; //불가능

     //Student 클레스
     //int studentCount = 200;
     //// 생성자가 반드시 필요한 경우
     //Student st("monster", 3, 11, 200, studentCount);
     //st.Info();

    /*
    //Car 클래스
    Car car1("현대제네시스", 80);
                               //Car::SellCount 도 가능 Car클래스 안의 SellCount라는
     cout << "현재 판매대수" << car1.SellCount << endl;
     {
         Car car2("삼성 QM6", 120);
         car2.Accelerate();
         car2.DisplayCurrentSpeed();
         cout << "현재 판매대수" << car2.SellCount << endl;
         {
             Car car3("기아 쏘렌토", 150);
             car3.Accelerate();
             car3.DisplayCurrentSpeed();
             cout << "현재 판매대수" << car3.SellCount << endl;
         } //중괄호를 빠져나가면 car3 객체는 소멸된다
     }
     Car car4("기아 쏘렌토", 150);
     car4.Accelerate();
     car4.DisplayCurrentSpeed();
     cout << "현재 판매대수" << car4.SellCount << endl;*/


     /*
     //Utility클래스
      //정적맴버 함수의 사용 예 객체를 일일히 생성하지 않고 사용하고 싶을때
     int a = 20;
     int b = 30;

     Utility util;

     int ret = util.add(a, b);
     cout << a << " + " << b << " = " << ret << endl;
     ret = util.sub(a, b);
     cout << a << " - " << b << " = " << ret << endl;


     ret = Utility::mul(a, b);
     cout << a << " x " << b << " = " << ret << endl;*/


     /*
      //자기 참조형 포인터 this
      //this는 who am i 포인터라고도 한다
     Pig pig("돼지1", 80, 3, 300);
      Pig pig2("돼지2", 60, 2, 280);

      pig.ShowHealthState();
      pig2.ShowHealthState();


      pig.Info();
      pig2.Info();*/


      /*
      int a = 20;
      int b = 30;
      float c = 1.3f;
      float d = 4.3f;
      double e = 10.45f;
      double f = 20.34f;
      string g = "monster ";
      string h = "is world! ";

      cout << a << " + " << b << " = " << add(a, b) << endl; //Call addXX
      cout << c << " + " << d << " = " << add(c, d) << endl;//Call addYY
      cout << e << " + " << f << " = " << add(e, f) << endl;
      cout << g << " + " << h << " = " << add(g, h) << endl;
      */


      /*
      //해더파일Complex와 소스파일 Complex.cpp참조
      Complex a(12, 10);
      a.info();
      return 0;*/


      /*
  //포인터
  //변수명앞에 &를 넣으면 주소값이다
  //a->&a->pa->&pa->ppa->&pa
  int a;
  a = 20;

  int* pa; //포인터형지정자 주소를지정하는 변수
  pa = &a;//int형 a의 주소값을 가지고 잇는 pa

  int** ppa;
  ppa = &pa;//int형 주소값을 가지고 있는 pa의 주소값을 가지고있는 ppa

  //모두 pa를 가르킴
  *ppa; //포인터 연산자
  *&pa;
  pa;
  //모두 a를 가르킴
  **ppa; //포인터 연산자
  **&pa;
  *pa;
  *&a;
  a;

  printf("&**ppa = %p, &**&pa = %p, &*pa = %p, &*&a = %p, &a = %p\n", &**ppa, &**&pa, &*pa, &*&a, &a);
  printf("**ppa = %d, **&pa = %d, *pa = %d, *&a = %d, a = %d", **ppa, **&pa, *pa, *&a, a);
  */

     /*
//방법 1
int tankCount = 0;
char buff[100];
Tank tank("탱크 1", 80, 10);
cout << "만들 탱크의 갯수를 입력하세요: ";
cin >> tankCount;
Tank* tankArray = new Tank[tankCount];//동적 객체 배열 할당
for (int i = 0; i < tankCount; i++) {
    sprintf(buff, "탱크 %d", i+1);
    tankArray[i].Init(buff, 100, 20);
}

for (int i = 0; i < tankCount; i++) {
    tankArray[i].Shoot();
}


delete[] tankArray; //동적 배열 반환 처리 반납처리를 꼭 해줘야 사라짐

//방법2
cout << "만들 탱크의 갯수를 입력하세요: ";
cin >> tankCount;
Tank** pTankArray = new Tank * [tankCount]; //탱크 포인터 배열
for (int i = 0; i < tankCount; i++)
{
    sprintf(buff, "탱크_%d", i+1);
    pTankArray[i] = new Tank(buff, 80, 20);//탱크 객체 생성
}

for (int i = 0; i < tankCount; i++) {
    pTankArray[i]->Shoot();// 탱크 객체의 주소값으로 Shoot()맴버함수 호출
}

for (int i = 0; i < tankCount; i++) {
    delete pTankArray[i]; //객체 반환 처리
}

delete[] pTankArray;//동적 생성한 Tank* 배열을 반환 처리
}
*/
    
Complex a(10, 10);
//복사 생성자
//자신의 타입을 인자로 받는 생성자
//Complex타입의 경우에는 복사생성자를 만들필요가 없다 
//컴파일러가 만들어주는 복사생성자를 사용하면 된다
Complex b(a);
//Complex b=a;
b.info();

DynamicArray array(10);

for (int i = 0; i < array.GetSize(); i++) {
    array.SetIndex(i, i);
}
for (int i = 0; i < array.GetSize(); i++) {
    cout << "array[" << i << "] = " << array.GetIndex(i) << endl;
}

//복사 생성자 작동
DynamicArray array2(array);

for (int i = 0; i < array2.GetSize(); i++) {
    cout << "array2[" << i << "] = " << array2.GetIndex(i) << endl;
}

return 0;

}


