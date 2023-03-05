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
//void func1()
//{
//    throw string("出现异常");
//}
//void func2()
//{
//    int* arr = new int[10];
//    try
//    {
//        func1();
//    }
//    catch (...)
//    {
//        delete[] arr;
//        throw; // 重新抛出异常
//    }
//
//    delete[] arr;
//}
//int main()
//{
//    try
//    {
//        func2();
//    }
//    catch (const string& s)
//    {
//        cout << s << endl;
//    }
//    catch (...)
//    {
//        cout << "未知异常" << endl;
//    }
//
//    return 0;
//}
//class Foo
//        {
//public:
//    Foo() : m_data(new int(0)) // 构造函数
//    {}
//    ~Foo() noexcept // 析构函数不抛出异常
//    {
//        delete m_data;
//    }
//    Foo(Foo&& other) noexcept : m_data(nullptr) // 移动构造函数不抛出异常
//    {
//        swap(m_data, other.m_data);
//    }
//private:
//    int* m_data; // 指针成员变量
//};
//class Bar
//{
//public:
//    Bar() : m_vec() // 构造函数
//    {}
//    void add(int x) // 添加元素到容器中
//    {
//        m_vec.push_back(x);
//    }
//private:
//    std::vector<int> m_vec; // 容器成员变量
//};
//class Baz
//{
//public:
//    Baz(int a, int b) // 构造函数
//        : m_a(a), m_b(b)
//        {}
//    void swap() // 交换两个成员变量的值
//    {
//        std::swap(m_a, m_b);
//    }
//private:
//    int m_a; // 整数成员变量
//    int m_b; // 整数成员变量
//};
class Exception
{
public:
    Exception(int errid, const char* errmsg)
            :_errid(errid)
            , _errmsg(errmsg)
    {}
    int GetErrid() const
    {
        return _errid;
    }
    virtual string what() const
    {
        return _errmsg;
    }
protected:
    int _errid;     // 错误编号
    string _errmsg; // 错误信息
    //...
};
