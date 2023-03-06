#include <iostream>
using namespace std;

//int main()
//{
//    shared_ptr<int> p1(new int(1));
//
//    cout << p1 << endl;
//    cout << *p1 << endl;
//
//    return 0;
//}
//class Person
//{
//public:
//    Person(const string& name)
//    : _name(name)
//    {}
//    const string& GetName()
//    {
//        return _name;
//    }
//private:
//    string _name;
//};
//int main()
//{
//    shared_ptr<Person> p(new Person("小明"));
//
//    cout << p->GetName() << endl;
//    return 0;
//}
//
//int main()
//{
//    shared_ptr<int> p(new int(1)); // 构造时获取内存
//    cout << *p << endl; // 访问内存
//    // 出了作用域,自动释放内存
//
//    return 0;
//}
//template<class T>
//class SmartPtr
//{
//public:
//    SmartPtr(T* ptr) // 构造时接管内存
//        : _ptr(ptr)
//    {}
//    ~SmartPtr()      // 析构时释放内存
//    {
//        cout << "delete:" << _ptr << endl; // 提示语句
//        delete _ptr;
//    }
//
//    // 重载操作符
//    T& operator*()
//    {
//        return *_ptr;
//    }
//    T* operator->()
//    {
//        return _ptr;
//    }
//private:
//    T* _ptr;
//};
//
////int main()
////{
////    SmartPtr<int> p(new int(1));
////    cout << *p << endl;
////    return 0;
////}
////int main()
////{
////    SmartPtr<int> p1(new int(1));
////    SmartPtr<int> p2(p1); // 拷贝构造
////
////    SmartPtr<int> p3(new int(2));
////    SmartPtr<int> p4(new int(2));
////    p4 = p3; // 拷贝赋值
////
////    return 0;
////}
//int main()
//{
//    auto_ptr<int> p1(new int(1));
//    auto_ptr<int> p2(p1);
//
//    auto_ptr<int> p3(new int(1));
//    auto_ptr<int> p4(new int(2));
//    p3 = p4;
//
//    return 0;
//}
namespace xy
{
    template<class T>
    class auto_ptr
    {
    public:
        auto_ptr(T* ptr = nullptr)
            :_ptr(ptr)
        {}
        ~auto_ptr()
        {
            if (_ptr != nullptr)
            {
                cout << "delete: " << _ptr << endl;
                delete _ptr;
                _ptr = nullptr;
            }
        }
        auto_ptr(auto_ptr<T>& ap)
                :_ptr(ap._ptr)
        {
            ap._ptr = nullptr; // 管理权转移后ap被置空
        }
        auto_ptr& operator=(auto_ptr<T>& ap)
        {
            if (this != &ap)
            {
                delete _ptr;       // 释放自己管理的资源
                _ptr = ap._ptr;    // 接管ap对象的资源
                ap._ptr = nullptr; // 管理权转移后置空ap
            }
            return *this;
        }

        T& operator*()
        {
            return *_ptr;
        }
        T* operator->()
        {
            return _ptr;
        }
    private:
        T* _ptr;
    };
}
class A
{
public:
    A(const int a = 0)
        : _a(a)
    {}
    ~A()
    {}

    int _a;
};
int main()
{
    xy::auto_ptr<A> ap1(new A);
    ap1->_a++;
    cout << ap1->_a << endl;

    xy::auto_ptr<A> ap2(ap1);
    ap2->_a++;
    //cout << ap1->_a << endl;
    cout << ap2->_a << endl;

    xy::auto_ptr<A> ap3(new A);
    ap2 = ap3;
    cout << ap2->_a << endl;

    ap2->_a++;
    cout << ap2->_a << endl;
    return 0;
}