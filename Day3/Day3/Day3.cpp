#include <iostream>
#include<string>
using namespace std;

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
    //복사 생성자
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

//상속의 일반화 예 :동물 시뮬레이션 게임 (동물 농장)
//소 돼지 닭
//추가 양 
/*
class Stock {
private:
    string _name;
    float _health;
    float _weight;

public:
    Stock(string name, float health, float weight)
        : _name(name), _health(health), _weight(weight) {

    }

    string GetName() {
        return _name;
    }

    void Speak() {
        cout << _name << "가 음매합니다." << endl;
    }

    void Run() {
        cout << _name << "가 뜁니다." << endl;
    }

    void Eat() {
        cout << _name << "가 먹습니다." << endl;
    }

    void Info() {
        cout << "이름: " << _name << endl;
        cout << "건강: " << _health << endl;
        cout << "몸무게: " << _weight << endl << endl;
    }



}; //가축

class Cow : public Stock {
public:
    Cow(string name, float health, float weight)
        : Stock(name, health, weight) {

    }

    void Speak() {
        cout << GetName() << "가 음매합니다." << endl;
    }
};

class Pig : public Stock {
public:
    Pig(string name, float health, float weight)
        : Stock(name, health, weight) {

    }

    void Speak() {
        cout << GetName() << "가 꿀꿀합니다." << endl;
    }
};

class Chicken : public Stock {
private:
    bool _isFly;

    void Fly() {
        cout << GetName() << "이 납니다." << endl;
    }

public:
    Chicken(string name, float health, float weight, bool isFly)
        : Stock(name, health, weight), _isFly(isFly) {}

    void Speak() {
        cout << GetName() << "가 꼬끼오합니다." << endl;
    }


    void Run() {
        if (_isFly) {
            Fly();
        }
        else {
            cout << GetName() << "이 뜁니다. " << endl;
        }
    }

    void Info() {
        Stock::Info();

        if (_isFly) {
            cout << "종류: 나는 닭" << endl;
        }
        else {
            cout << "종류: 못나는 닭" << endl;
        }
    }
};

class Sheep:public Stock {
private:
    float _purlength;
public:
    Sheep(string name, float health, float weight, float purlength) 
        :Stock(name, health, weight), _purlength(purlength)
        {

        }

    void Speak() {
        cout << GetName() << "가 음메에합니다." << endl;
    }
    
    void Info(){
        Stock::Info();
        cout << "뿔 길이 : " << _purlength << endl;
    }
};
*/

//상속의 특수화 예 : 동물 농장 육성 시물레이션 게임
//돼지 소 닭 만 쓸거냐?->굳이 나눠야 하나?
//갑자기 돌고래를 넣어라 오더가 옴
//둘리도 넣으라 오더가 들어옴
enum AnimalKind
{
    PIG,COW,CHICKEN,DOLPHIN
};
class Animal {
protected:
    string _name;
    int _health;   // 건강지수
    int _weight;

public:
    Animal(string name, int health, int weight)
        : _name(name), _health(health), _weight(weight) {}

    void Speak() {
        cout << _name << "이 말한다." << endl;
    }

    void Run() {
        cout << _name << "이 뜁니다." << endl;
    }

    void Info() {
        cout << "이름: " << _name << endl;
        cout << "건강지수: " << _health << endl;
        cout << "몸무게: " << _weight << endl;
    }
};

class Cow : public Animal {
public:
    Cow(string name, int health, int weight)
        : Animal(name, health, weight) {}

    void Speak() {
        cout << _name << "가 음매합니다." << endl;
    }
};

class Pig : public Animal {
public:
    Pig(string name, int health, int weight)
        : Animal(name, health, weight) {}

    void Speak() {
        cout << _name << "가 꿀꿀합니다." << endl;
    }

};

class Chicken : public Animal {
private:
    bool _isFly;

    void Fly() {
        cout << _name << "이 납니다." << endl;
    }

public:
    Chicken(string name, int health, int weight, bool isFly)
        : Animal(name, health, weight), _isFly(isFly) {}

    void Speak() {
        cout << _name << "이 꼬끼오 합니다." << endl;
    }

    void Run() {
        if (_isFly) {
            Fly();
        }
        else {
            cout << _name << "이 뜁니다." << endl;
        }
    }

    void Info() {
        Animal::Info();

        if (_isFly) {
            cout << "종류: 나는 닭" << endl;
        }
        else {
            cout << "종류: 못나는 닭" << endl;
        }

    }


};

class Dolphin : public Animal {
private:
    void Swim() {
        cout << _name << "이 헤엄칩니다." << endl;
    }

public:
    Dolphin(string name, int health, int weight)
        : Animal(name, health, weight) {}

    void Speak() {
        cout << _name << "가 끽끽합니다." << endl;
    }

    void Run() {
        Swim();
    }
};


class Parent {
public:
    int _value;

    Parent(int value)
        : _value(value) {}

    Parent()
        : _value(0) {}
};

class ChildA : public Parent {
public:
    int _valueA;

    ChildA(int value, int valueA)
        : Parent(value), _valueA(valueA) {}

    ChildA()
        : _valueA(0) {}
};

class ChildB : public Parent {
public:
    int _valueB;

    ChildB(int value, int valueB)
        : Parent(value), _valueB(valueB) {}

    ChildB()
        : _valueB(0) {}

};

class Heart {
private:
    float _purserate;   // 박동수

public:
    Heart(float purserate)
        : _purserate(purserate)
    {
        cout << "Heart의 생성자" << endl;
    }

    ~Heart() {
        cout << "Heart의 소멸자" << endl;
    }

    void Show() {
        cout << "심장이 " << _purserate << "로 뛰고 있습니다." << endl;
    }

};

class Watch {
private:
    string _color;

public:
    Watch(string color)
        : _color(color)
    {
        cout << "Watch의 생성자" << endl;
    }

    ~Watch() {
        cout << "Watch의 소멸자" << endl;
    }

    string GetColor() {
        return _color;
    }

    void DisplayCurrentTime() {
        cout << _color << " Watch의 현재시간은 12시00분입니다." << endl;
    }

};

class Human {
private:
    Heart _heart;   // 포함 (Composition)
    Watch* _pWatch;   // 참조(Agreggation) (생명주기를 같이 하지 않음)


public:
    /*
    Human(float purserate, Watch& refWatch)
       : _heart(purserate), _refWatch(refWatch)
    {
       cout << "Human 생성자" << endl;
    }
    */
    Human(float purserate, Watch* pWatch)
        : _heart(purserate), _pWatch(pWatch)
    {
        cout << "Human 생성자" << endl;
    }

    ~Human() {
        cout << "Human 소멸자" << endl;
    }

    void ShowHeartRate() {
        _heart.Show();
    }

    void ChangeWatch(Watch* pWatch) {
        cout << _pWatch->GetColor() << "를 " << pWatch->GetColor() << "로 변경" << endl;
        _pWatch = pWatch;
    }

    void DisplayTime() {
        _pWatch->DisplayCurrentTime();
    }
};

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

class Robot {
private:
    Arm& _leftArm;
    Arm& _rightArm;

public:
    Robot(Arm& leftArm, Arm& rightArm)
        : _leftArm(leftArm), _rightArm(rightArm) {}

    void ShowInfo() {
        cout << "Robot:" << endl;
        cout << "왼쪽팔: ";
        _leftArm.ShowInfo();
        cout << endl;
        cout << "오른쪽팔: ";
        _rightArm.ShowInfo();
        cout << endl << endl;
    }
};

class RocketArmRobot : public Robot {
public:
    RocketArmRobot(RocketArm& leftArm, RocketArm& rightArm)
        : Robot(leftArm, rightArm) {}
};

class CanonArmRobot : public Robot {
public:
    CanonArmRobot(CanonArm& leftArm, CanonArm& rightArm)
        : Robot(leftArm, rightArm) {}
};

class LeftCanonArmRightRocketArmRobot : public Robot {
public:
    LeftCanonArmRightRocketArmRobot(CanonArm& leftArm, RocketArm& rightArm)
        : Robot(leftArm, rightArm) {}
};




int main()
{
    /*
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
    }*/

    /*
    //포함 참조 관계
    //포함: 포함된 객체가 생명주기를 같이함 is a
    //참조: 포함된 객체가 포함된 객체와 생명주기를 같이하지 않음 has a
  
    //상속
    //상속의 이점 재사용성,유지보수성,다형성의 기반구조
    
    //상속의 일반화 방법 (공통된 내용)
    //Cow cow("소", 80.0f, 250.0f);
    //Pig pig("돼지", 70.0f, 210.0f);
    //Chicken flyChicken("나는 닭", 70.0f, 5.0f, true);
    //Chicken notFlyChicken("못나는 닭", 75.0f, 4.5f, false);
    //Sheep sheep("양", 80.0f, 180.0f, 15.0f);
    //cow.Speak();
    //pig.Speak();
    //flyChicken.Speak();
    //notFlyChicken.Speak();
    //sheep.Speak();

    //cow.Eat();
    //pig.Eat();
    //flyChicken.Eat();
    //notFlyChicken.Eat();
    //sheep.Eat();


    //상속의 특수화 방법 (특수한 내용에서 자식클래스를 내리는)
    //Cow cow("소", 80, 250);
    //Pig pig("돼지", 85, 200);
    //Chicken flyChicken("나는 닭", 96, 4, true);
    //Chicken notFlyChicken("못나는 닭", 87, 6, false);
    //Dolphin dolphin("돌고래", 77, 250);

    //cow.Speak();
    //pig.Speak();
    //flyChicken.Speak();
    //notFlyChicken.Speak();
    //dolphin.Speak();

    //cout << endl;

    //cow.Run();
    //pig.Run();
    //flyChicken.Run();
    //notFlyChicken.Run();
    //dolphin.Run();
    */

    /*
    //업케스팅 다운케스팅
    Parent parent(100);

    ChildA childA(200, 300);
    ChildB childB(400, 500);


    parent = childA;   // 자식 타입을 부모 타입에 대입할 수 있습니다.
    // 자식은 부모의 것을 가지고 있습니다.

//childB = parent; // 부모의 타입을 자식타입에 대입 할 수 없습니다.
            // 부모는 자식의 것을 가지고 있지 않습니다.


// 자식의 타입을 부모의 참조타입이나 포인터 타입에 대입하는 경우를 업캐스팅 이라고 합니다.
    Parent& refParent = childA;   // 업캐스팅

    cout << "refParent._value = " << refParent._value << endl;

    // refParent 참조형 변수로 접근을 할 수 있는 childA객체의 영역은 
    // childA객체의 Parent의 영역만 접근이 가능합니다.

    ChildA& refChildA = (ChildA&)refParent; // 다운캐스팅

    // 포인터 타입
    Parent* pParent = &childA;   // 업캐스팅

    // pParent 포인터형 변수로 접근할 수 있는 childA의 영역은
    // 부모의 영역만 접근이 가능합니다.
    cout << "pParent->_value = " << pParent->_value << endl;

    ChildA* pChildA = (ChildA*)pParent;   // 다운 캐스팅

    cout << pChildA->_value << endl;
    cout << pChildA->_valueA << endl;
    */

    /*Watch redWatch("red");
    Watch blackWatch("black");

    cout << "-------------- 프로그램 시작 ---------------" << endl;
    {
        Human human(70, &redWatch);

        human.ShowHeartRate();

        human.DisplayTime();

        human.ChangeWatch(&blackWatch);

        human.DisplayTime();
    }

    cout << "---------------프로그램 종료 ----------------" << endl;*/

CanonArm canonArm;
RocketArm rocketArm;


RocketArmRobot rocketArmRobot(rocketArm, rocketArm);
CanonArmRobot canonArmRobot(canonArm, canonArm);
LeftCanonArmRightRocketArmRobot leftCanonArmRightRocketArmRobot(canonArm, rocketArm);

rocketArmRobot.ShowInfo();
canonArmRobot.ShowInfo();

leftCanonArmRightRocketArmRobot.ShowInfo();



return 0;

}

