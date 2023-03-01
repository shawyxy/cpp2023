#include <iostream>
using namespace std;
//
//
//int main()
//{
//    auto l = []
//    {
//        cout << "hello lambda" << endl;
//    };
//    l();
//    return 0;
//}


//int main()
//{
//    int id = 0;
//    auto f = [id] () mutable
//    {
//        cout << "id:" << id << endl;
//        ++id;
//    };
//    id = 42;
//    f();
//    f();
//    f();
//
//    cout << "id:" << id << endl;
//}
//class Functor
//{
//private:
//    int id;
//public:
//    void operator() ()
//    {
//        cout << "id:" << id << endl;
//        ++id;
//    }
//};
//int main()
//{
//    Functor f;
//    f();
//    return 0;
//}
//int main()
//{
//    int id = 0;
//    auto f = [&id] (int param)
//    {
//        cout << "id:" << id << ", ";
//        cout << "param:" << param << endl;
//        ++id;
//        ++param;
//    };
//
//    id = 42;
//    f(7);
//    f(7);
//    f(7);
//
//    cout << "id:" << id << endl;
//    return 0;
//}
//int main()
//{
//    int id = 0;
//    auto f = [id] ()
//    {
//        cout << "id:" << id << ", ";
//
//        ++id;
//    };
//
//    id = 42;
//    f();
//    f();
//    f();
//
//    cout << "id:" << id << endl;
//    return 0;
//}
//int main()
//{
//    int id = 0;
//    auto f = [id] () mutable
//    {
//        cout << "id:" << id << endl;
//        ++id;
//
//        static int x = 5;
//        int y = 6;
//        return id;
//    };
//
//    f();
//    return 0;
//}
//int main()
//{
//    int a = 123;
//    int b = 456;
//    auto f = [=, &b]() { // 隐式值捕获a，显式引用捕获b
//        cout << a << endl; // 输出：123
//        cout << b << endl; // 输出：456
//        b = 789; // 修改b的值
//    };
//    f();
//    cout << b << endl; // 输出：789
//
//    return 0;
//}
//#include <set>
//int main()
//{
//    auto cmp = [](int a, int b)
//    {
//        return a > b;
//    };
//
//    set<int, decltype(cmp)> s(cmp);
//
//    return 0;
//}

class Add
{
public:
    Add(int base)
            :_base(base)
    {}
    int operator()(int num)
    {
        return _base + num;
    }
private:
    int _base;
};
int main()
{
    int base = 1;

    // 函数对象
    Add add1(base);
    add1(1);

    // lambda表达式
    auto add2 = [base](int num)
    {
        return base + num;
    };
    add2(1);
    return 0;
}
