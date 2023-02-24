//#include <iostream>
//#include <algorithm.h>
//using namespace std;
//namespace xy
//{
//    class string
//    {
//    public:
//        //移动构造
//        string(string&& s)
//                :_str(nullptr)
//                , _size(0)
//                , _capacity(0)
//        {
//            cout << "string(string&& s) -- 移动构造" << endl;
//            swap(s);
//        }
//    private:
//        char* _str;
//        size_t _size;
//        size_t _capacity;
//    };
//}
//#include <iostream>
//#include <cstring>
//using namespace std;
//namespace xy
//{
//    class string
//    {
//    public:
//        //移动构造
//        string(string&& s)
//                :_str(nullptr)
//                , _size(0)
//                , _capacity(0)
//        {
//            cout << "string(string&& s) -- 移动构造" << endl;
//            swap(s);
//        }
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
//        // *拷贝构造函数
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
//        // *赋值运算符重载
//        string& operator=(const string& s)
//        {
//            cout << "string& operator=(const string& s) -- 深拷贝" << endl;
//
//            string tmp(s);
//            swap(tmp);
//            return *this;
//
//        }
//        // 析构函数
//        ~string()
//        {
//            delete[] _str;
//            _str = nullptr;
//            _size = 0;
//            _capacity = 0;
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
//        // 其他接口...
//    private:
//        char* _str;
//        size_t _size;
//        size_t _capacity;
//    };
//}
//xy::string to_string(int val)
//{
//    xy::string str;
//    // ...
//    return str;
//}
//int main()
//{
//    xy::string str = to_string(1);
//
//    return 0;
//}
//xy::string to_string(int val)
//{
//    xy::string str;
//
//    return str;
//}
//
//
//int main()
//{
//    xy::string str;
//    str = to_string(1);
//
//    return 0;
//}
//namespace xy
//{
//    class string {
//    public:
//        // 移动赋值运算符
//        string& operator=(string&& s) noexcept {
//            if (this != &s) { // 防止自我赋值
//                delete[] _str; // 释放原有资源
//                _str = s._str; // 赋予新资源
//                s._str = nullptr; // 置空源对象
//            }
//            return *this;
//        }
//    private:
//        char* _str;
//        size_t _size;
//        size_t _capacity;
//    };
//}