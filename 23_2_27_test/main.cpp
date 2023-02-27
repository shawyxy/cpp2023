#include <iostream>
#include <string>
#include <cstddef>
using namespace std;

//namespace xy
//{
//    class string
//    {
//    public:
//        // 构造函数
//        string(const char* str = "")
//        {
//            _size = strlen(str);
//            _capacity = _size;
//            _str = new char[_capacity + 1];
//            strcpy(_str, str);
//        }
//        void swap(string& s)
//        {
//            std::swap(_str, s._str);
//            std::swap(_size, s._size);
//            std::swap(_capacity, s._capacity);
//        }
//        // 拷贝构造函数
//        string(const string& s)
//                :_str(nullptr)
//                , _size(0)
//                , _capacity(0)
//        {
//            cout << "string(const string& s) -- 深拷贝" << endl;
//
//            string tmp(s._str);
//            swap(tmp);
//        }
//        // 移动构造
//        string(string&& s)
//                :_str(nullptr)
//                , _size(0)
//                , _capacity(0)
//        {
//            cout << "string(string&& s) -- 移动构造" << endl;
//            swap(s);
//        }
//        // 拷贝赋值运算符重载
//        string& operator=(const string& s)
//        {
//            cout << "string& operator=(const string& s) -- 深拷贝" << endl;
//
//            string tmp(s);
//            swap(tmp);
//            return *this;
//
//        }
//        // 移动赋值
//        string& operator=(string&& s)
//        {
//            cout << "string& operator=(string&& s) -- 移动赋值" << endl;
//
//            string tmp(s);
//            swap(tmp);
//            return *this;
//
//        }
//        void push_back(char ch)
//        {
//            if (_size == _capacity)
//            {
//                reserve(_capacity == 0 ? 4 : _capacity * 2);
//            }
//            _str[_size] = ch;
//            _str[_size + 1] = '\0';
//            _size++;
//        }
//        // +=运算符重载
//        string& operator+=(char ch)
//        {
//            push_back(ch);
//            return *this;
//        }
//        void reserve(size_t n)
//        {
//            if (n > _capacity)
//            {
//                char* tmp = new char[n + 1];
//                strncpy(tmp, _str, _size + 1);
//                delete[] _str;
//                _str = tmp;
//                _capacity = n;
//            }
//        }
//        //析构函数
//        ~string()
//        {
//            _str = nullptr;
//            _size = 0;
//            _capacity = 0;
//        }
//        // 其他接口...
//    private:
//        char* _str;
//        size_t _size;
//        size_t _capacity;
//    };
//}

//class Person
//{
//public:
//    // 构造函数
//    Person(const char* name = "", int age = 0)
//            :_name(name)
//            , _age(age)
//    {}
////    // 拷贝构造函数
////    Person(const Person& p)
////            :_name(p._name)
////            , _age(p._age)
////    {}
////    // 拷贝赋值函数
////    Person& operator=(const Person& p)
////    {
////        if (this != &p)
////        {
////            _name = p._name;
////            _age = p._age;
////        }
////        return *this;
////    }
////    // 析构函数
////    ~Person()
////    {}
//private:
//    xy::string _name; // 姓名
//    int _age;         // 年龄
//};

//int main()
//{
//    Person s1("小明", 18);
//    Person s2 = std::move(s1);
//
//    return 0;
//}
//
class Person
{
private:
    string _name = "小明";
    int _age = 18;
    static int _s;
};

static int _s = 1;
int main()
{
    return 0;
}