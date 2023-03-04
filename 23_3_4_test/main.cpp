#include <iostream>
using namespace std;

//double fun(int a, int b)
//{
//    if(b == 0)
//    {
//        throw "除零异常";
//    }
//    return a / b;
//}
//int main()
//{
//    int a = 1, b = 0;
//
//    try
//    {
//        fun(a, b);
//    }
//    catch (const char* msg)
//    {
//        cout << msg << endl;
//    }
//    cout << fun(4, 2) << endl;
//    return 0;
//}

//void func1()
//{
//    throw string("出现异常");
//}
//void func2()
//{
//    func1();
//}
//void func3()
//{
//    func2();
//}
//int main()
//{
//    try
//    {
//        func3();
//    }
//    catch (const string& msg)
//    {
//        cout << msg << endl;
//    }
//    catch (...)
//    {
//        cout << "未知异常" << endl;
//    }
//
//    return 0;
//}
#include <iostream>
using namespace std;

//class Base
//        {};
//class Derived: public Base
//        {};
//
//int main ()
//{
//    try
//    {
//        throw Derived();
//    }
//    catch(const Derived& d)
//    {
//        cout << "Derived exception caught" << endl;
//    }
//    catch(const Base& b)
//    {
//        cout << "Base exception caught" << endl;
//    }
//
//    return 0;
//}
void func1()
{
    throw string("出现异常");
}
void func2()
{
    int* arr = new int[10];
    func1();

    // 一系列操作

    delete[] arr;
}
int main()
{
    try
    {
        func2();
    }
    catch (const string& s)
    {
        cout << s << endl;
    }
    catch (...)
    {
        cout << "未知异常" << endl;
    }

    return 0;
}
