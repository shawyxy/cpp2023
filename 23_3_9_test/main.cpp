#include <iostream>
using namespace std;

//class Singleton
//{
//public:
//    // 提供一个全局访问点获取单例对象
//    static Singleton* GetInstance()
//    {
//        return _inst;
//    }
//private:
//    Singleton() // 私有构造函数
//    {}
//    // 删除或私有拷贝构造函数和赋值运算符重载函数
//    Singleton(const Singleton&) = delete;
//    Singleton& operator=(const Singleton&) = delete;
//    // 提供一个指向单例对象的指针
//    static Singleton* _inst;
//};
//// 在类加载时（进入main函数之前）就创建实例
//// 注意,对象在main函数定义域之外实例化
//Singleton* Singleton::_inst = new Singleton;
//class Singleton
//{
//public:
//    // 提供一个全局访问点获取单例对象
//    static Singleton* GetInstance()
//    {
//        if (_inst == nullptr)
//        {
//            _inst = new Singleton;
//        }
//        return _inst;
//    }
//private:
//    // 私有构造函数
//    Singleton()
//    {}
//    Singleton(const Singleton&) = delete;
//    Singleton& operator=(const Singleton&) = delete;
//    // 提供一个指向单例对象的static指针
//    static Singleton* _inst;
//};
//
//// 在程序入口（main函数）之前将其初始化为nullptr
//Singleton* Singleton::_inst = nullptr;

class Singleton
{
public:
    // 提供一个全局访问点获取单例对象
    static Singleton* GetInstance()
    {
        static Singleton inst;
        return &inst;
    }
private:
    // 私有构造函数，删除或私有拷贝构造函数和赋值运算符重载函数
    Singleton()
    {}
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
};
