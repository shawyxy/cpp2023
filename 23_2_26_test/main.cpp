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
#include <iostream>
#include <memory>
using namespace std;
namespace xy {


    template<typename T>
    class vector {
    private:
        T *data; // 指向动态数组的指针
        size_t size; // 已使用的空间
        size_t capacity; // 总容量
    public:
        vector() : data(nullptr), size(0), capacity(0) {} // 默认构造函数
        ~vector() { delete[] data; } // 析构函数

        void push_back(const T &x) { // 在末尾添加一个元素（拷贝）
            if (size == capacity) { // 如果空间不足，需要重新分配
                resize(2 * capacity + 1); // 分配两倍多一点的空间
            }
            data[size++] = x; // 拷贝元素到末尾，并更新size
        }

        void push_back(T &&x) { // 在末尾添加一个元素（移动）
            if (size == capacity) {
                resize(2 * capacity + 1);
            }
            data[size++] = std::move(x); // 移动元素到末尾，并更新size
        }

        template<typename... Args>
        void emplace_back(Args &&... args) { // 在末尾添加一个元素（完美转发）
            if (size == capacity) {
                resize(2 * capacity + 1);
            }
            new(data + size++) T(std::forward<Args>(args)...); // 在原地构造元素，并更新size
        }

        void insert(size_t pos, const T &x) { // 在指定位置插入一个元素（拷贝）
            if (pos > size) return; // 如果位置无效，直接返回
            if (size == capacity) {
                resize(2 * capacity + 1);
            }
            for (size_t i = size; i > pos; i--) {
                data[i] = data[i - 1]; // 将pos之后的元素后移一位
            }
            data[pos] = x; // 拷贝元素到pos位置，并更新size
            size++;
        }

        void insert(size_t pos, T &&x) { // 在指定位置插入一个元素（移动）
            if (pos > size) return;
            if (size == capacity) {
                resize(2 * capacity + 1);
            }
            for (size_t i = size; i > pos; i--) {
                data[i] = std::move(data[i - 1]);
            }
            data[pos] = std::move(x);
            size++;
        }

        template<typename... Args>
        void emplace(size_t pos, Args &&... args) { // 在指定位置插入一个元素（完美转发）
            if (pos > size) return;
            if (size == capacity) {
                resize(2 * capacity + 1);
            }
            for (size_t i = size; i > pos; i--) {
                new(data + i)T(std::move(data[i - 1]));
                data[i - 1].~T();
            }
            new(data + pos)T(std::forward<Args>(args)...);
            size++;
        }

        void print() const {
            for (size_t i = 0; i < size; i++) {
                cout << data[i] << " ";
            }
            cout << endl;
        }

    private:
        void resize(size_t new_capacity) {
            if (new_capacity < size)return;
            T *new_data = new T[new_capacity];
            for (size_t i = 0; i < size; i++) {
                new_data[i] = std::move(data[i]);
            }
            delete[]data;
            data = new_data;
            capacity = new_capacity;
        }
    };
}
    int main() {
        xy::vector<int> v;
        v.push_back(10);
        v.print();

        v.emplace_back(20);
        v.print();

        v.insert(0,30);
        v.print();

}