//#include <iostream>
//using namespace std;
//
//void Func(int& x)
//{
//    cout << "左值引用" << endl;
//}
//void Func(const int& x)
//{
//    cout << "const 左值引用" << endl;
//}
//void Func(int&& x)
//{
//    cout << "右值引用" << endl;
//}
//void Func(const int&& x)
//{
//    cout << "const 右值引用" << endl;
//}
//
//template<class T>
//void PerfectForward(T&& t)
//{
//    Func(t);
//}
//int main()
//{
//    int a = 1;
//    PerfectForward(a);          // 左值
//    PerfectForward(move(a)); // 右值
//
//    const int b = 2;
//    PerfectForward(b);          // const 左值
//    PerfectForward(move(b)); // const 右值
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//void Func(int& x)
//{
//    cout << "左值引用" << endl;
//}
//void Func(const int& x)
//{
//    cout << "const 左值引用" << endl;
//}
//void Func(int&& x)
//{
//    cout << "右值引用" << endl;
//}
//void Func(const int&& x)
//{
//    cout << "const 右值引用" << endl;
//}
//
//template<class T>
//void PerfectForward(T&& t)
//{
//    // 使用std::forward进行类型转换
//    Func(std::forward<T>(t));
//}
//int main()
//{
//    int a = 1;
//    PerfectForward(a);          // 左值
//    PerfectForward(move(a)); // 右值
//
//    const int b = 2;
//    PerfectForward(b);          // const 左值
//    PerfectForward(move(b)); // const 右值
//
//    return 0;
//}
#include <iostream>
using namespace std;
#include <string>
#include <cstddef>
namespace xy
{
    class string
    {
    public:
        // 构造函数
        string(const char* str = "")
        {
            _size = strlen(str);
            _capacity = _size;
            _str = new char[_capacity + 1];
            strcpy(_str, str);
        }
        void swap(string& s)
        {
            std::swap(_str, s._str);
            std::swap(_size, s._size);
            std::swap(_capacity, s._capacity);
        }
        // *拷贝构造函数
        string(const string& s)
                :_str(nullptr)
                , _size(0)
                , _capacity(0)
        {
            cout << "string(const string& s) -- 深拷贝" << endl;

            string tmp(s._str);
            swap(tmp);
        }
        // *赋值运算符重载
        string& operator=(const string& s)
        {
            cout << "string& operator=(const string& s) -- 深拷贝" << endl;

            string tmp(s);
            swap(tmp);
            return *this;

        }
        // 移动赋值
        string& operator=(string&& s)
        {
            cout << "string& operator=(string&& s) -- 移动赋值" << endl;

            string tmp(s);
            swap(tmp);
            return *this;

        }
        void push_back(char ch)
        {
            if (_size == _capacity)
            {
                reserve(_capacity == 0 ? 4 : _capacity * 2);
            }
            _str[_size] = ch;
            _str[_size + 1] = '\0';
            _size++;
        }
        // +=运算符重载
        string& operator+=(char ch)
        {
            push_back(ch);
            return *this;
        }
        void reserve(size_t n)
        {
            if (n > _capacity)
            {
                char* tmp = new char[n + 1];
                strncpy(tmp, _str, _size + 1);
                delete[] _str;
                _str = tmp;
                _capacity = n;
            }
        }
        // 其他接口...
    private:
        char* _str;
        size_t _size;
        size_t _capacity;
    };
}
#include <iostream>
#include <stdlib.h>
using namespace std;
namespace xy
{
    template<typename T>
    class vector
    {
    public:
        vector() // 默认构造函数
        : data(nullptr), size(0), capacity()
        {}
        ~vector() // 析构函数
        {
            delete[] data;
        }
        void init()
        {
            data = (T*) malloc(sizeof(T) * 100);
        }
        void push_back(const T &x) // 在末尾添加一个元素（拷贝）
        {
            insert(size, x);
        }

        void push_back(T &&x) // 在末尾添加一个元素（移动）
        {
            insert(size, std::forward<T>(x));
        }
        void insert(size_t pos, const T &x) // 在指定位置插入一个元素（拷贝）
        {
            for (size_t i = size; i > pos; i--)
            {
                data[i] = data[i - 1]; // 将pos之后的元素后移一位
            }
            data[pos] = x; // 拷贝元素到pos位置，并更新size
            size++;
        }

        void insert(size_t pos, T &&x) // 在指定位置插入一个元素（移动）
        {
            for (size_t i = size; i > pos; i--)
            {
                data[i] = std::forward<T>(data[i - 1]);
            }
            data[pos] = std::forward<T>(x);
            size++;
        }
    private:
        T *data; // 指向动态数组的指针
        size_t size; // 已使用的空间
        size_t capacity; // 总容量
    };
}
int main()
{
    xy::vector<xy::string> v;
    v.init();

    v.push_back("1"); // 右值引用
    cout << "右值引用↑----------------左值引用↓" << endl;
    xy::string s1("3"); // 左值引用
    v.push_back(s1);
    return 0;
}