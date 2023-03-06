#include <iostream>
using namespace std;
//namespace xy
//{
//    template<class T>
//    class auto_ptr
//    {
//    public:
//        auto_ptr(T* ptr = nullptr)
//                :_ptr(ptr)
//        {}
//        ~auto_ptr()
//        {
//            if (_ptr != nullptr)
//            {
//                cout << "delete:" << _ptr << endl;
//                delete _ptr;
//                _ptr = nullptr;
//            }
//        }
//        auto_ptr(auto_ptr<T>& ap)
//                :_ptr(ap._ptr)
//        {
//            ap._ptr = nullptr; // 管理权转移后置空ap
//        }
//        auto_ptr& operator=(auto_ptr<T>& ap)
//        {
//            if (this != &ap)
//            {
//                delete _ptr;       // 释放自己管理的资源
//                _ptr = ap._ptr;    // 接管ap对象的资源
//                ap._ptr = nullptr; // 管理权转移后置空ap
//            }
//            return *this;
//        }
//
//        T& operator*()
//        {
//            return *_ptr;
//        }
//        T* operator->()
//        {
//            return _ptr;
//        }
//    private:
//        T* _ptr;
//    };
//}
//class A
//{
//public:
//    A(const int a = 0)
//            : _a(a)
//    {}
//    ~A()
//    {}
//
//    int _a;
//};
//int main()
//{
//    xy::auto_ptr<A> ap1(new A);
//    ap1->_a++;
//    cout << ap1->_a << endl;
//
//    xy::auto_ptr<A> ap2(ap1); // ap2接管ap1的资源
//    ap2->_a++;
//    //cout << ap1->_a << endl; // error
//    cout << ap2->_a << endl;
//
//    xy::auto_ptr<A> ap3(new A);
//    ap3 = ap2; // ap3接管ap2的资源
//    // cout << ap2->_a << endl; // error
//
//    ap3->_a++;
//    cout << ap3->_a << endl;
//    return 0;
//}
//#include <memory>
//
//int main()
//{
//    // 创建一个 unique_ptr 指向一个 int 类型的对象，值为 3
//    std::unique_ptr<int> uptr(new int(3));
//
//    // 打印出指针所指对象的值
//    std::cout << *uptr << std::endl;
//
//    // 将 uptr 赋值给另一个 unique_ptr，原来的 uptr 会失去所有权并释放对象
//    std::unique_ptr<int> uptr2 = std::move(uptr);
//
//    // 打印出新指针所指对象的值
//    std::cout << *uptr2 << std::endl;
//
//    // 离开作用域时，uptr2 会自动释放对象
//}
//namespace xy
//{
//    template<class T>
//    class unique_ptr
//    {
//    public:
//        unique_ptr(T* ptr = nullptr)
//                :_ptr(ptr)
//        {}
//        ~unique_ptr()
//        {
//            if (_ptr != nullptr)
//            {
//                cout << "delete:" << _ptr << endl;
//                delete _ptr;
//                _ptr = nullptr;
//            }
//        }
//        unique_ptr(auto_ptr<T>& ap) = delete;
//        unique_ptr& operator=(auto_ptr<T>& ap) = delete;
//
//        T& operator*()
//        {
//            return *_ptr;
//        }
//        T* operator->()
//        {
//            return _ptr;
//        }
//    private:
//        T* _ptr;
//    };
//}
//int main()
//{
//    xy::unique_ptr<int> uqp1(new int);
//    xy::unique_ptr<int> uqp2(new int);
//
//    uqp2 = uqp1;
//
//    return 0;
//}
//int main()
//{
//    shared_ptr<int> sp1(new int(1));
//    shared_ptr<int> sp2(sp1);
//    *sp1 = 10; // 拷贝后旧指针管理的资源依然能访问
//    cout << sp1.use_count() << endl;
//
//    shared_ptr<int> sp3(new int(0));
//    shared_ptr<int> sp4(new int(2));
//    sp3 = sp4;
//    cout << sp3.use_count() << endl; // 赋值后旧指针管理的资源依然能访问
//    return 0;
//}
//namespace xy
//{
//    template<class T>
//    class shared_ptr
//    {
//    public:
//        shared_ptr(T* ptr = nullptr)
//            :_ptr(ptr)
//            , _pcount(new int(1))
//        {}
//        ~shared_ptr()
//        {
//            if (--(*_pcount) == 0)
//            {
//                if (_ptr != nullptr)
//                {
//                    cout << "delete:" << _ptr << endl;
//                    delete _ptr;
//                    _ptr = nullptr;
//                }
//                delete _pcount;
//                _pcount = nullptr;
//            }
//        }
//        shared_ptr(shared_ptr<T>& sp)
//                :_ptr(sp._ptr)
//                , _pcount(sp._pcount)
//        {
//            (*_pcount)++;
//        }
//        shared_ptr<T>& operator=(shared_ptr<T>& sp)
//        {
//            if (_ptr != sp._ptr)       // 管理同一资源的智能指针赋值无意义
//            {
//                if (--(*_pcount) == 0) // 将管理的资源的引用计数-1
//                {
//                    cout << "delete:" << _ptr << endl;
//                    delete _ptr;
//                    delete _pcount;
//                }
//                _ptr = sp._ptr;       // 与传入的智能指针共享资源
//                _pcount = sp._pcount; // 将自己的引用计数和传入的智能指针同步
//                (*_pcount)++;         // 引用计数+1,表示自己是新增的管理者
//            }
//            return *this;
//        }
//        // 获取引用计数
//        int use_count()
//        {
//            return *_pcount;
//        }
//        T& operator*()
//        {
//            return *_ptr;
//        }
//        T* operator->()
//        {
//            return _ptr;
//        }
//    private:
//        T* _ptr;
//        int* _pcount; // 引用计数
//    };
//}
//int main()
//{
//    xy::shared_ptr<int> sp1(new int(1));
//    cout << sp1.use_count() << endl;
//    xy::shared_ptr<int> sp2(sp1);
//    cout << sp1.use_count() << endl;
//    cout << sp2.use_count() << endl;
//
//    xy::shared_ptr<int> sp3(new int(0));
//    cout << sp3.use_count() << endl;
//
//    xy::shared_ptr<int> sp4(new int(2));
//    sp3 = sp4;
//    cout << sp3.use_count() << endl;
//    cout << sp4.use_count() << endl;
//
//    return 0;
//}

//int main()
//{
//    shared_ptr<int> sp1(new int[5], [](int* ptr)
//    {
//        cout << "delete[]:" << ptr << endl;
//        delete[] ptr;
//    });
//
//
//    shared_ptr<FILE> sp2(fopen("test.cpp", "r"), [](FILE* ptr)
//    {
//        cout << "fclose: " << ptr << endl;
//        fclose(ptr);
//    });
//
//    return 0;
//}
//struct Node
//{
//    std::shared_ptr<Node> _next;
//    std::shared_ptr<Node> _prev;
//
//    ~Node()
//    {
//        cout << "~Node" << endl;
//    }
//};
//int main()
//{
//    std::shared_ptr<Node> n1(new Node);
//    std::shared_ptr<Node> n2(new Node);
//    // 循环引用
//    n1->_next = n2;
//    n2->_prev = n1;
//
//
//    return 0;
//}

namespace xy
{
    template<class T>
    class weak_ptr
    {
    public:
        weak_ptr()
            :_ptr(nullptr)
        {}
        weak_ptr(const shared_ptr<T>& sp)
            :_ptr(sp.get())
        {}
        weak_ptr& operator=(const shared_ptr<T>& sp)
        {
            _ptr = sp.get();
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
