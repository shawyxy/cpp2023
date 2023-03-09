#include <iostream>
using namespace std;
//// 顺序表插入函数
//void Insert(size_t pos, int a)
//{
//    size_t _size = 5; // 假设长度是5
//    // ...
//    int end = _size - 1;
//    while(end >= pos)
//    {
//        // ... 数据挪动等操作
//        --end;
//    }
//}
//int main()
//{
//
//    return 0;
//}
//int main()
//{
//    double d = 1.23;
//    int a = static_cast<int>(d);
//    cout << a << endl;
//
//    int* p = &a;
//    // int address = static_cast<int>(p); // error
//    return 0;
//}
//int main()
//{
//    int a = 1;
//    int* p = &a;
//    int adress = reinterpret_cast<int>(p);
//    cout << adress << endl;
//    return 0;
//}
//union U
//{
//    int a;
//    double b;
//};
//int main()
//{
//    U u;
//    u.a = 42;
//    int* p1 = &u.a;
//    double* p2 = reinterpret_cast<double*>(&u);
//    *p2 = 3.14;
//
//    cout << p2 << endl;
//    cout << *p2 << endl;
//
//    return 0;
////}
//cout << *adress << endl;
//(*adress)++;
//cout << *adress << endl;
//int main()
//{
//    int a = 1;
//    int* p = &a;
//
//    double* adress = reinterpret_cast<double*>(p);
//
//    cout << *adress << endl;
//    return 0;
//}
using namespace std;
//int main()
//{
//    int a = 1;
//    int* p = &a;
//
//    int adress = reinterpret_cast<int>(p);
//
//    return 0;
//}
//typedef void(*FUNC)();
//int func(int i)
//{
//	cout << "func: " << i << endl;
//	return 0;
//}
//int main()
//{
//	FUNC F = reinterpret_cast<FUNC>(func);
//	F();
//
//	return 0;
//}
//int main()
//{
//	volatile const int a = 10; // 声明一个const int类型的变量a
//	int* p = const_cast<int*>(&a); // 使用const_cast去除a的地址的const属性，赋值给指针p
//	*p = 20; // 通过指针p修改a的值
//
//	cout << a << endl;
//	cout << *p << endl;
//	return 0;
//}

//struct Father
//{
//    int age;
//};
//
//struct Son
//{
//    struct Father father;
//    char *name;
//};
//int main()
//{
//    struct Father *f1 = (struct Father *)malloc(sizeof(struct Son));
//    struct Son *s1 = (struct Son *)f1; // 向下转型
//
//    return 0;
//}
//class Pet
//{
//public:
//    virtual void speak() {
//        cout << "Pet" << endl;
//    }
//};
//
//class Cat : public Pet
//{
//public:
//    void speak() override {
//        cout << "Meow" << endl;
//    }
//};
//
//int main()
//{
//    Pet* pet = new Pet(); // 创建一个Pet对象
//    Cat* cat = (Cat*)pet; // 强制向下转型为Cat对象
//    cat->speak(); // 调用Cat的speak方法
//    return 0;
//}
//// 假设有一个基类Base和一个派生类Derived
//class Base
//{
//public:
//    virtual void foo()
//    {}
//};
//
//class Derived : public Base
//{
//public:
//    void bar()
//    {
//        cout << "void bar()" << endl;
//    }
//};
//int main()
//{
//    // 假设有一个基类指针p，指向一个派生类对象
//    Base* p = new Derived();
//
//    // 使用dynamic_cast将p转换为派生类指针q
//    Derived* q = dynamic_cast<Derived*>(p);
//
//    // 如果转换成功，q不为空，可以调用派生类的成员函数bar()
//    if (q)
//    {
//        q->bar();
//    }
//
//    return 0;
//}
//class A
//{
//public:
//    virtual void f()
//    {}
//    int _a;
//};
//class B : public A
//{
//public:
//    int _b;
//};
//void func(A* pa) // 参数是父类指针类型
//{
//    B* pb = dynamic_cast<B*>(pa); // 向下转型
//
//    if(pb)
//    {
//        cout << "转换成功" << endl;
//        pb->_a++; // 自增继承自父类的_a
//        pb->_b++; // 自增子类自己的的_b
//        cout << pb->_a << ":" << pb->_b << endl;
//    }
//    else
//    {
//        cout << "转换失败" << endl;
//        // 失败pb=nullptr
//        //pb->_a++; // error
//        //cout << pb->_a << endl; // error
//    }
//}

//int main()
//{
//    A a; // 创建基类对象
//    B b; // 创建子类对象
//
//    func(&a); // 传入基类对象地址
//    func(&b); // 传入子类对象地址
//
//    return 0;
//}
//class A1
//{
//public:
//    virtual void f(){}
//};
//
//class A2
//{
//public:
//    virtual void f(){}
//};
//
//class B : public A1, public A2
//{};
//
//int main()
//{
//    B b;
//    A1* ptr1 = &b;
//    A1* ptr2 = &b;
//    cout << ptr1 << endl;
//    cout << ptr2 << endl << endl;
//
//    B* pb1 = (B*)ptr1;
//    B* pb2 = (B*)ptr2;
//    cout << pb1 << endl;
//    cout << pb2 << endl << endl;
//
//    B* pb3 = dynamic_cast<B*>(ptr1);
//    B* pb4 = dynamic_cast<B*>(ptr2);
//    cout << pb3 << endl;
//    cout << pb4 << endl;
//
//    return 0;
//}
//class A1
//{
//public:
//    virtual void f(){}
//};
//
//class A2
//{
//public:
//    virtual void f(){}
//};
//
//class B : public A1, public A2
//{};
//
//int main()
//{
//    B b;
//    A1* ptr1 = &b;
//    A1* ptr2 = &b;
//    cout << ptr1 << endl;
//    cout << ptr2 << endl << endl;
//
//    B* pb1 = (B*)ptr1;
//    B* pb2 = (B*)ptr2;
//    cout << pb1 << endl;
//    cout << pb2 << endl << endl;
//
//    B* pb3 = dynamic_cast<B*>(ptr1);
//    B* pb4 = dynamic_cast<B*>(ptr2);
//    cout << pb3 << endl;
//    cout << pb4 << endl;
//
//    return 0;
//}
//class A1
//{
//public:
//    int _a1 = 0;
//};
//
//class A2
//{
//public:
//    int _a2 = 0;
//};
//
//class B : public A1, public A2
//{
//public:
//    int _b = 1;
//};
//
//int main()
//{
//    B b;
//    A1* ptr1 = &b;
//    A1* ptr2 = &b;
//    cout << ptr1 << endl;
//    cout << ptr2 << endl << endl;
//
//    B* pb1 = (B*)ptr1;
//    B* pb2 = (B*)ptr2;
//    cout << pb1 << endl;
//    cout << pb2 << endl << endl;
//
////    B* pb3 = dynamic_cast<B*>(ptr1);
////    B* pb4 = dynamic_cast<B*>(ptr2);
////    cout << pb3 << endl;
////    cout << pb4 << endl;
//
//    return 0;
//}
//class A1
//{
//public:
//    virtual void f() {}
//};
//
//class A2
//{
//public:
//    virtual void f() {}
//};
//
//class B : public A1, public A2
//{};
//
//int main()
//{
//    B b;
//    A1* ptr1 = &b;
//    A2* ptr2 = &b;
//    cout << ptr1 << endl;
//    cout << ptr2 << endl << endl;
//
//    B* pb1 = (B*)ptr1;
//    B* pb2 = (B*)ptr2;
//    cout << pb1 << endl;
//    cout << pb2 << endl << endl;
//
//    B* pb3 = dynamic_cast<B*>(ptr1);
//    B* pb4 = dynamic_cast<B*>(ptr2);
//    cout << pb3 << endl;
//    cout << pb4 << endl;
//
//    return 0;
//}
//class A1
//{};
//
//class A2
//{};
//
//class B : public A1, public A2
//{};
//
//int main()
//{
//    B b;
//    A1* ptr1 = &b;
//    A2* ptr2 = &b;
//    cout << ptr1 << endl;
//    cout << ptr2 << endl << endl;
//
//    B* pb1 = (B*)ptr1;
//    B* pb2 = (B*)ptr2;
//    cout << pb1 << endl;
//    cout << pb2 << endl << endl;
//
//    return 0;
//}
//int main()
//{
//    int ia = 0;
//    double da = ia;
//    //      ↑_ □ ↲
//    const double & rd1 = ia;
//    //               ↑_ □ ↲
//    const double& rd2 = static_cast<double>(ia);
//    //             ↑____ □ _________________↲
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//class MyClass
//{
//public:
//    int _x, _y;
//    // 构造函数
//    explicit MyClass(int a, int b)
//        : _x(a)
//        , _y(b)
//        {}
//};
//
//int main()
//{
//    MyClass obj1(10, 1); // 正确：直接初始化
//    cout << obj1._x << endl;
//
//     MyClass obj2 = {20, 2}; // 错误：拷贝初始化（隐式转换），被explicit阻止
//     cout << obj2._x << endl;
//
//    MyClass obj3 = (MyClass){30, 3}; // 正确：强制类型转换（显示转换）
//    cout << obj3._x << endl;
//
//    return 0;
//}
