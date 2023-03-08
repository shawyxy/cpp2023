#include <iostream>

using namespace std;

//class HeapOnly
//{
//public:
//    void Delete()
//    {
//        delete this;
//    }
//private:
//    ~HeapOnly()
//    {
//        cout << "~HeapOnly()" << endl;
//    }
//private:
//    int _a;
//};
//class HeapOnly
//{
//public:
//    static HeapOnly* Create()
//    {
//        return new HeapOnly;
//    }
//
//private:
//    HeapOnly()
//        :_a(0)
//    {}
//    HeapOnly(const HeapOnly& hp) = delete;
//    HeapOnly& operator=(const HeapOnly& hp) = delete;
//private:
//    int _a;
//};
//int main()
//{
//    HeapOnly* hp = HeapOnly::Create();
//    delete hp;
//
//    return 0;
//}
//class StackOnly
//{
//public:
//    static StackOnly Create()
//    {
//        StackOnly st;
//        return st;
//    }
//private:
//    StackOnly()
//        :_a(0)
//    {}
//private:
//    int _a;
//};
//int main()
//{
//    StackOnly st = StackOnly::Create();
//
//    static StackOnly copy1(st);
//    StackOnly* copy2 = new StackOnly(st);
//
//    return 0;
//}
//class StackOnly
//{
//public:
//    static StackOnly Create()
//    {
//        StackOnly st;
//        return st;
//    }
//private:
//    StackOnly()
//            :_a(0)
//    {}
//    StackOnly(const StackOnly&) = delete;
//private:
//    int _a;
//};
//int main()
//{
//    StackOnly st = StackOnly::Create();
//
//    // 下面两行代码将无法编译通过
//    // static StackOnly copy1(st);
//    // StackOnly* copy2 = new StackOnly(st);
//
//    return 0;
//}
//class StackOnly
//{
//public:
//    static StackOnly Create()
//    {
//        return StackOnly();
//    }
//private:
//    void* operator new(size_t size) = delete;
//    void operator delete(void* p) = delete;
////    // C++98
////    void* operator new(size_t size);
////    void operator delete(void* p);
//private:
//    int _a;
//};
//class StackOnly
//{
//public:
//    static StackOnly Create()
//    {
//        return StackOnly();
//    }
//private:
//    StackOnly() // 私有构造函数
//        :_a(0)
//    {}
//    StackOnly(const StackOnly&) // 私有拷贝构造函数
//    {}
//    void* operator new(size_t size) = delete;
//    void operator delete(void* p) = delete;
//private:
//    int _a;
//};
//int main()
//{
//    StackOnly st = StackOnly::Create();
//    return 0;
//}
//int main()
//{
//    StackOnly st = StackOnly::Create();
//
//    static StackOnly copy1(st);
//
//    return 0;
//}
//class StackOnly
//{
//public:
//    static StackOnly Create()
//    {
//        return  StackOnly();
//    }
//private:
//    StackOnly() // 私有构造函数
//            :_a(0)
//    {}
//    StackOnly(const StackOnly&) // 私有拷贝构造函数
//    {}
//    void* operator new(size_t size) = delete;
//    void operator delete(void* p) = delete;
//private:
//    int _a;
//};
//int main()
//{
//    StackOnly* s = StackOnly::Create();
//
//    return 0;
//}