//class T
//{
//public:
//    T() = default; // 强制生成构造函数
//    // 构造函数
//    T(const int t)
//        : _t(t)
//    {}
//private:
//    int _t;
//};
class T
{
public:
    // 构造函数
    T(const int t)
            : _t(t)
    {}
private:
    T(const T& t) = delete;
    T& operator=(const T&) = delete;
private:
    int _t;
};
//class A
//{
//public:
//    virtual void f() = delete; // 禁用f()
//};
//
//class B : public A
//{
//public:
//    void f() override {} // 编译错误，不能重写被删除的函数
//};
//
//class C : public A
//{
//public:
//    void f() {} // 编译错误，不能定义同名的函数
//};

//class HeapOnly
//{
//public:
//    HeapOnly() // 构造函数
//    {
//        _str = new char[5];
//    }
//    ~HeapOnly() = delete; // delete析构函数
//
//    void Destory()
//    {
//        delete[] _str;
//        operator delete(this);
//    }
//private:
//    char* _str;
//};
//int main()
//{
//    HeapOnly* ptr = new HeapOnly;
//
//    ptr->Destory();
//    return 0;
//}
//#include <iostream>
//using namespace std;
//template<class ...Args>
//void ShowList(Args... args)
//{
//    cout << sizeof...(args) << endl;
//}
//
//int main()
//{
//    ShowList();
//    ShowList(1, "11");
//    ShowList("11", 1);
//    ShowList("11", 1, '1');
//
//    return 0;
//}
#include <iostream>
using namespace std;
////基本情况：当参数包为空时，调用这个函数，终止递归
//void ShowList()
//{
//    cout << endl;
//}
//
////递归情况：当参数包非空时，调用这个函数
//template<typename T, typename... Args>
//void ShowList(T head, Args... rest)
//{
//    cout << head << " ";
//    ShowList(rest...); //递归调用
//}
//
//int main()
//{
//    ShowList();
//    ShowList(1, "11", 'A');
//
//    return 0;
//}
//void ShowListArg()
//{
//    cout << endl;
//}
//
//template<typename T, typename... Args>
//void ShowListArg(T head, Args... rest)
//{
//    cout << head << " ";
//    ShowListArg(rest...);
//}
//// 供外部调用
//template<class ...Args>
//void ShowList(Args... args)
//{
//    ShowListArg(args...);
//}
//int main()
//{
//    ShowList();
//    return 0;
//}

//template<class ...Args>
//void ShowList(Args... args)
//{
//    int arr[] = { args... }; // 列表初始化
//
//    for (auto e : arr)
//    {
//        cout << e << " "; // 打印
//    }
//    cout << endl;
//}
//template<typename T>
//void PrintArg(T t)
//{
//    cout << t << " ";
//}
//
//template<typename... Args>
//void ShowList(Args... args)
//{
//    int arr[] = { (PrintArg(args), 0)... };
//    cout << endl;
//}
//int main()
//{
//    ShowList();
//
//    ShowList(1);
//    ShowList(1, 2);
//    ShowList(1, 2, 3);
//
//    return 0;
//}
//// 无参调用
//void ShowList()
//{
//    cout << endl;
//}
//// 打印函数
//template<class T>
//int PrintArg(T t)
//{
//    cout << t << " ";
//
//    return 0;   // 返回整型
//}
//
//template<typename... Args>
//void ShowList(Args... args)
//{
//    int arr[] = { PrintArg(args)... };
//    cout << endl;
//}
//int main()
//{
//    ShowList(1);
//    ShowList(1, 2);
//    ShowList(1, 2, 3);
//
//    return 0;
//}
//#include <vector>
//int main()
//{
//    vector<pair<int, string>> v;
//    pair<int, string> kv(2, "world");
//
//    v.emplace_back(make_pair<int, string>(1, "hello")); // 右值
//    v.emplace_back(kv); // 左值
//    v.emplace_back(3, "!!"); // 参数包
//
//    for(auto e: v)
//    {
//        cout << e.second << " ";
//    }
//    cout << endl;
//    return 0;
//}
//#include <list>
//int main()
//{
//    list<pair<int, string>> mylist;
//    pair<int, string> kv(10, "111");
//    mylist.push_back(kv);                              //传左值
//    mylist.push_back(pair<int, string>(20, "222"));    //传右值
//    mylist.push_back({ 30, "333" });                   //列表初始化
//
//    mylist.emplace_back(kv);                           //传左值
//    mylist.emplace_back(pair<int, string>(40, "444")); //传右值
//    mylist.emplace_back(50, "555");                    //传参数包
//    for(auto e: mylist)
//    {
//        cout << e.first << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
#include <vector>

struct A
{
    A(int x) : x(x) { std::cout << "A(int)\n"; }
    A(const A& a) : x(a.x) { std::cout << "A(const A&)\n"; }
    int x;
};

int main()
{
    std::vector<A> v;
    v.reserve(2); // 预留空间，避免重新分配
    v.emplace_back(1); // 直接在容器中构造A对象，输出A(int)
    int a = 2;
    v.emplace_back(v[0]); // 直接在容器中构造A对象，输出A(const A&)
    for (const auto& a : v) {
        std::cout << a.x << "\n";
    }
}