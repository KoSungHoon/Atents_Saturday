#include <iostream>
#include <string>

using namespace std;

// Robot
class Arm {
private:
    string _name;

public:
    Arm(string name)
        : _name(name) {}

    void ShowInfo() {
        cout << _name;
    }
};

class RocketArm : public Arm {
public:
    RocketArm()
        : Arm("RocketArm") {}
};

class CanonArm : public Arm {
public:
    CanonArm()
        : Arm("CanonArm") {}
};

class LazerArm : public Arm {
public:
    LazerArm()
        : Arm("LazerArm") {}
};

class Robot {
private:
    Arm* _pleftArm;
    Arm* _prightArm;

public:
    Robot(Arm* leftArm, Arm* rightArm)
        : _pleftArm(leftArm), _prightArm(rightArm) {}

    void SetLeftArm(Arm* pLeftArm) {
        _pleftArm = pLeftArm;
    }
    void SetRightArm(Arm* prightArm) {
        _prightArm = prightArm;
    }
    void ShowInfo() {
        cout << "Robot:" << endl;
        cout << "왼쪽팔: ";
        _pleftArm->ShowInfo();
        cout << endl;
        cout << "오른쪽팔: ";
        _prightArm->ShowInfo();
        cout << endl << endl;
    }
};
//다중상속
//다중 상속은 C++에서만 지원 
class A {
public:
    int _value;
};

class B {
public:
    int _value;
};
class D : public A, public B {

};
//다중 상속을 해도 되는 때는 서로 이질적인 것들일때 EX) 폰,컴퓨터
class Phone {
private:
    string _phoneNumber;

public:
    Phone(string phoneNumber)
        : _phoneNumber(phoneNumber) {}

    void Call(string callNumber) {
        cout << callNumber << "로 " << _phoneNumber << "에서 전화를 합니다." << endl;
    }

    void SendMessage(string message) {
        cout << "[ " << message << "] " << "를 보냅니다." << endl;
    }

    void ReceivedMessage(string message) {
        cout << "[ " << message << "] " << "를 받습니다." << endl;
    }

};

class Computer {
private:
    string _id;

public:
    Computer(string id)
        : _id(id) {}

    void PlayGame(string name) {
        cout << name << "의 게임을 합니다." << endl;
    }
};

class SmartPhone : public Phone, public Computer {
public:
    SmartPhone(string phoneNumber, string id)
        : Phone(phoneNumber), Computer(id) {}
};

//상속시에 접근 제한자를 적지 않으면 private로 접근 되서 
//부모의 puvlic에 지정한 곳에 접근하지 못함

//따라서 public으로 상속 시켜줘야 가능

//다형성
// 개발자가 되었습니다.
// 커피숖 관리프로그램 개발의뢰받았습니다.

// 커피숖에 갑니다. 커피를 한잔 시켜서 커피마시면서
// 커피숖에 어떠한 업무의 흐름이 있는지 파악하셔야합니다.
// 역활(role), 책임(responsibility)

// 커피숖에는 어떤 역활이 있나요?
// Barista
// 청소, 매니저(총괄)
// Cashier, 손님(guest)

//추상클래스 
//순수 가상함수를 하나라도 가지고 있는 클래스
//추상클래스는 자신의 객체를 만드는 능력이 상실된다
//자신의 순수가상함수를 자식이 제정의 하도록 강제하는 능력이 생긴다
//class Drink {
//private:
//    string _name;
//
//public:
//    Drink(string name)
//        : _name(name) {}
//
//    virtual void MakeADrink() = 0;    // 순수가상함수는 구현부가 없는 함수
//        
//    
//
//    string GetName() {
//        return _name;
//    }
//};
//class Coffee : public Drink {
//public:
//    Coffee()
//        : Drink("Coffee") {}
//
//    void MakeADrink() override {
//        cout << "커피를 만듭니다." << endl;
//    }
//};
//
//class Praffe : public Drink {
//public:
//    Praffe()
//        : Drink("Praffe") {}
//
//    void MakeADrink() override {
//        cout << "프라페를 만듭니다." << endl;
//    }
//};
//
//class IceTea : public Drink {
//public:
//    IceTea()
//        : Drink("IceTea") {}
//
//    void MakeADrink() override {
//        cout << "아이스티를 만듭니다." << endl;
//    }
//};
//
//class Tea : public Drink {
//public:
//    Tea()
//        : Drink("Tea") {}
//
//    void MakeADrink() override {
//        cout << "차를 만듭니다." << endl;
//    }
//};
//
//class Cola : public Drink {
//public:
//    Cola()
//        : Drink("Cola") {}
//
//    void MakeADrink() override {
//        cout << "콜라를 만듭니다." << endl;
//    }
//};
//
//class Latte : public Drink {
//public:
//    Latte()
//        : Drink("Latte") {}
//
//
//};
//
//class Barista {
//public:
//    void MakeADrink(Drink& drink) {
//        drink.MakeADrink();
//    }
//};
//
//
//class Cashier {
//private:
//    Barista& _refBari;
//
//public:
//    Cashier(Barista& refBari)
//        : _refBari(refBari) {}
//
//    void OrderedDrink(Drink& drink) {
//        cout << drink.GetName() << "를 주문을 받습니다." << endl;
//        _refBari.MakeADrink(drink);
//    }
//    
//};
//
//class Guest {
//public:
//    void OrderingDrink(Cashier& cashier, Drink& drink) {   // 의존적관계
//        cout << drink.GetName() << "를 주문을 합니다." << endl;
//        cashier.OrderedDrink(drink);
//    }
//
//   
//};

class Parent {
public:
    void GeneralFunction() { // 일반함수
        cout << "Parent::GeneralFunction" << endl;
    }

    virtual void VirtualFunction1() { // 가상함수
        cout << "Parent::VirtualFunction()" << endl;
    }

    virtual void VirtualFunction2() {   // 가상함수
        cout << "Parent::VirtualFunction2()" << endl;
    }

};

class Child1 : public Parent {
public:
    void GeneralFunction() {   // 일반함수
        cout << "Child1::GeneralFunction" << endl;
    }

    void VirtualFunction1() override {   // 가상함수
        cout << "Child1::VirtualFunction1()" << endl;
    }


};

class Child2 : public Parent {
public:
    void GeneralFunction() {   // 일반함수
        cout << "Child2::GeneralFunction" << endl;
    }

    void VirtualFunction2() override {   // 가상함수
        cout << "Child2::VirtualFunction2()" << endl;
    }

};

//일반함수 호출
void CallGeneralFunction(Parent& ref) {
    ref.GeneralFunction();//정적바인딩
    /*ref.Parent::GeneralFunction(); */
}

//가상함수 호출
void CallVirtualFunction1(Parent& ref) {
    ref.VirtualFunction1(); //결정을 유보 ,동적 바인딩(실행중에 어느객체의 함수가 호출될지 결정을 유보)
}

/*
int add(int a, int b) {
   return  a + b;
}

float add(float a, float b) {
   return a + b;
}

double add(double a, double b) {
   return a + b;
}

string add(string a, string b) {
   return a + b;
}
*/

// template 함수
template <typename T>
T add(T a, T b) {
    return a + b;
}
class Student {
public:
    int grade;
    int classNum;
};

template <typename T>
class DynamicArray {
private:
    int _size;
    T* _parr;

public:
    DynamicArray(int size)
        : _size(size) {
        _parr = new T[_size];
    }

    ~DynamicArray() {
        delete[] _parr;
    }

    // 배열첨자연산자 연산자 오버로딩
    T& operator[](int index) {
        return _parr[index];
    }

    int GetSize() {
        return _size;
    }
};

class Complex {
private:
    int _real;
    int _imaginary;

public:
    Complex(int real, int imaginary)
        : _real(real), _imaginary(imaginary) {}

    // +(덧셈)기호에 대한 연산자 오버로딩멤버함수
    Complex& operator+(Complex& right) {
        Complex temp(_real + right._real, _imaginary + right._imaginary);

        return temp;
    }

    Complex& operator-(Complex& right) {
        Complex temp(_real - right._real, _imaginary - right._imaginary);

        return temp;
    }

    friend ostream& operator<<(ostream& o, Complex& ref);
};

ostream& operator<<(ostream& o, Complex& ref) {
    o << ref._real << showpos << ref._imaginary << "i";
    o << noshowpos;

    return o;
}
namespace SamSung {
    namespace Develop1 {
        class Math {
        public:

            void Print() {
                cout << "Samsung::Math" << endl;
            }
        };

    }
}

namespace LG {
    class Math {
    public:

        void Print() {
            cout << "LG::Math" << endl;
        }
    };
}

int main() {
    /*CanonArm canonArm;
    RocketArm rocketArm;
    LazerArm lazerArm;


    Robot  rocketArmRobot(&rocketArm, &rocketArm);
    Robot  canonArmRobot(&canonArm, &canonArm);
    Robot  leftCanonArmRightRocketArmRobot(&canonArm, &rocketArm);
    Robot  lazerArmRobot(&lazerArm, &lazerArm);
    Robot   leftLazerArmRightCanonArmRobot(&lazerArm, &canonArm);

    rocketArmRobot.ShowInfo();
    canonArmRobot.ShowInfo();
    leftCanonArmRightRocketArmRobot.ShowInfo();
    lazerArmRobot.ShowInfo();
    leftLazerArmRightCanonArmRobot.ShowInfo();
*/

    //D d;
    //d.A::_value = 100; //모호함을 해결하기 위해 어디의 밸류인지 적어준다

    /*SmartPhone smartPhone("010-1111-1111", "monster");

    smartPhone.Call("010-2222-2222");
    smartPhone.PlayGame("리니지");*/
    
    /*Barista bari;
    Cashier cashier(bari);
    Guest guest;

    Coffee coffee;
    Praffe praffe;
    IceTea iceTea;
    Tea tea;
    Cola cola;
    Latte latte;

    guest.OrderingDrink(cashier, coffee);
    cout << endl;
    guest.OrderingDrink(cashier, praffe);
    cout << endl;
    guest.OrderingDrink(cashier, iceTea);
    cout << endl;
    guest.OrderingDrink(cashier, tea);
    cout << endl;
    guest.OrderingDrink(cashier, cola);
    cout << endl;
    guest.OrderingDrink(cashier, latte);*/

    /*
    Parent parent;
    Child1 child1;
    Child2 child2;

    // 일반함수 호출
    CallGeneralFunction(parent);
    CallGeneralFunction(child1);
    CallGeneralFunction(child2);

    // 가상함수 호출
    CallVirtualFunction1(parent);
    CallVirtualFunction1(child1);
    CallVirtualFunction1(child2);
    */
        
   /* int a = 20;
    int b = 30;

    float c = 1.2f;
    float d = 3.4f;

    double e = 30.0;
    double f = 40.123;

    string g = "monster";
    string h = " is World!!";

    cout << a << " + " << b << " = " << add(a, b) << endl;
    cout << c << " + " << d << " = " << add(c, d) << endl;
    cout << e << " + " << f << " = " << add(e, f) << endl;
    cout << g << " + " << h << " = " << add(g, h) << endl;*/

   /* DynamicArray<int> array(10);

    for (int i = 0; i < array.GetSize(); i++) {
        array[i] = i;
    }

    for (int i = 0; i < array.GetSize(); i++) {
        cout << "array[" << i << "] = " << array[i] << endl;
    }


    DynamicArray<float> floatarray(10);

    for (int i = 0; i < floatarray.GetSize(); i++) {
        floatarray[i] = i * 3.4f;
    }

    for (int i = 0; i < floatarray.GetSize(); i++) {
        cout << "floatarray[" << i << "] = " << floatarray[i] << endl;
    }

    DynamicArray<string> stringarray(10);
    char buff[100];
    for (int i = 0; i < stringarray.GetSize(); i++) {
        sprintf(buff, "monster_%d", i);
        stringarray[i] = buff;
    }

    for (int i = 0; i < stringarray.GetSize(); i++) {
        cout << "stringarray[" << i << "] = " << stringarray[i] << endl;
    }

    DynamicArray<Student> studentArray(10);*/

//Complex a(10, 10);
//Complex b(20, 20);
//Complex c(0, 0);
//
//c = a + b;
//c = a.operator+(b);
//
//cout << c << endl;
//
//c = b - a;
//
//cout << c << endl;


using namespace SamSung;
LG::Math lgmath;
Develop1::Math smath;

lgmath.Print();
smath.Print();

    return 0;
}