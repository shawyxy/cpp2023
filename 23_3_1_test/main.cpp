#include <iostream>
using namespace std;

//// 简单函数
//int add(int a, int b)
//{
//    return a + b;
//}
//// 函数对象
//struct subtract
//        {
//    int operator()(int a, int b)
//    {
//        return a - b;
//    }
//};
//
//int main()
//{
//    std::function<int(int, int)> op; // 创建包装器对象op
//
//    op = add; // 简单函数
//    cout << "op(10, 5) = " << op(10, 5) << endl; // prints 15
//
//    op = subtract(); // 函数对象
//    cout << "op(10, 5) = " << op(10, 5) << endl; // prints 5
//
//    op = [](int a, int b) { return a * b; }; // lambda表达式
//    cout << "op(10, 5) = " << op(10, 5) << endl; // prints 50
//
//    return 0;
//}

//class Cpt
//{
//public:
//    static int add(int a, int b)
//    {
//        return a + b;
//    }
//    double subtract(double a, double b)
//    {
//        return a - b;
//    }
//};
//int main()
//{
//    function<int(int, int)> op1 = &Cpt::add; // 静态成员
//    cout << op1(1, 2) << endl;
//
//    function<double(Cpt, double, double)> op2 = &Cpt::subtract; // 非静态成员
//    cout << op2(Cpt(), 1, 2) << endl;
//
//    return 0;
//}


template<class F, class T>

T useF(F f, T x)
{
    static int count = 0;
    cout << "count: " << ++count << endl;
    cout << "&count: " << &count << endl;

    return f(x);
}
template double useF<double(*)(double), double>(double(*)(double), double);
// 普通函数
double f(double d)
{
    return d / 2;
}
// 函数对象
struct Functor
{
    double operator()(double d)
    {
        return d / 4;
    }
};
// lambda表达式
auto l = [](double d)
{
    return d / 8;
};

//int main()
//{
//    cout << useF(f, 12.12) << endl; // 函数指针
//    cout << useF(Functor(), 12.12) << endl; // 函数对象
//    cout << useF(l, 12.12) << endl; // lambda表达式
//
//    return 0;
//}
int main()
{
    function<double(double)> op; // 实例化包装器

    op = f; // 函数指针
    cout << useF(op, 8.88) << endl;

    op = Functor(); // 函数对象
    cout << useF(op, 8.88) << endl;

    op = l; // lambda表达式
    cout << useF(op, 8.88) << endl;
    return 0;
}