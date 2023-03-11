#include <iostream>
using namespace std;
//
//int main()
//{
//    int year, month, day;
//
//    scanf("%4d%2d%2d", &year, &month, &day);
//
//    return 0;
//}
//class A
//{
//public:
//    A(int a)
//        :_a(a)
//    {}
//    operator int()
//    {
//        return _a;
//    }
//private:
//    int _a;
//};
//int main()
//{
//    // 内置类型int->自定义类型A[隐式类型转换]
//    A a1 = 1;
//    const A& a2 = 2;
//    A&& a3 = 3;
//
//    // 自定义类型A->内置类型int
//    int i1 = a1;
//    int i11 = (int)a1; // 由于explicit修饰operator bool, 所以用强制类型转换
//    int i2 = static_cast<int>(a1);
//
//    return 0;
//}
//class A
//{
//public:
//    A(int a)
//            :_a(a)
//    {}
//
//    int _a;
//};
//int main()
//{
//    // 内置类型int->自定义类型A[隐式类型转换]
//    A a1 = 1;
//
//    cout << a1._a << endl;
//    return 0;
//}
//#include <iostream>
//#include <fstream>
//using namespace std;
//int main()
//{
//    // 写入二进制文件
//    ofstream outfile; // 定义文件流对象
//    outfile.open("test.bin", ios::out | ios::binary); // 以二进制写入的方式打开
//    char out[] = "hello world";
//    outfile.write(out, strlen(out)); // 将变量x的值写入文件
//    outfile.close();
//
//    // 读取二进制文件
//    ifstream infile("test.bin", ios::binary);
//    char in[36];
//    infile.read(in, strlen(out));
//    infile.close();
//
//    cout << in << endl;
//
//    return 0;
//}
//#include <iostream>
//#include <fstream>
//
//int main()
//{
//    // 写入二进制文件
//    ofstream outfile("test.bin", ios::binary);
//    int x = 12345;
//    outfile.write(reinterpret_cast<char*>(&x), sizeof(x));
//    outfile.close();
//
//    // 读取二进制文件
//    ifstream infile("test.bin", ios::binary);
//    int y;
//    infile.read(reinterpret_cast<char*>(&y), sizeof(y));
//    infile.close();
//
//    cout << y << endl; // 输出 12345
//
//    return 0;
//
//}
#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//int main()
//{
//    // 写入文本文件
//    ofstream outfile; // 定义文件流对象
//    outfile.open("text.txt"); // 默认以写入的方式打开文件
//    char out[] = "hello world";
//    outfile.write(out, strlen(out));
//    outfile.put('!');
//    outfile.close();
//
//    ifstream infile;
//    infile.open("text.txt");
//    infile.seekg(0, infile.end); // 跳转到文件末尾处
//    int len = infile.tellg(); // 获取当前字符在文件中的位置,即文件字符数
//    infile.seekg(0, infile.beg); // 跳转到文件开头
//    char in[36];
//    infile.read(in, len);
//    infile.close();
//
//    cout << in << endl;
//
//    return 0;
//}
#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//int main()
//{
//    // 写入文本文件
//    ofstream outfile; // 定义文件流对象
//    outfile.open("text.txt"); // 默认以写入的方式打开文件
//    char out[] = "hello world";
//    outfile.write(out, strlen(out));
//    outfile.put('!');
//    outfile.close();
//
//    ifstream infile;
//    infile.open("text.txt");
//    infile.seekg(0, infile.end); // 跳转到文件末尾处
//    int len = infile.tellg(); // 获取当前字符在文件中的位置,即文件字符数
//    infile.seekg(0, infile.beg); // 跳转到文件开头
//    char in[36];
//    infile.read(in, len);
//    infile.close();
//
//    cout << in << endl;
//
//    return 0;
//}
//
//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main()
//{
//    ifstream infile("text.txt");
//    char in[100];
//    infile.getline(in, 100);
//
//    infile.close();
//    cout << in << endl;
//    return 0;
//}

//#include <iostream>
//#include <fstream>
//#include <string>
//
//int main()
//{
//    string data;
//
//    // 写入数据到文件中
//    ofstream outfile;
//    outfile.open("test.txt");
//
//    cout << "Enter your name: ";
//    getline(cin, data);
//
//    // 向文件中写入用户输入的数据
//    outfile << data << endl;
//
//    cout << "Enter your age: ";
//    cin >> data;
//    // 忽略输入流中的换行符
//    cin.ignore();
//
//    // 继续向文件写入用户输入的数据
//    outfile << data << endl;
//
//    // 关闭打开的文件
//    outfile.close();
//
//    // 读取数据从文件中
//    ifstream infile;
//    infile.open("test.txt");
//}
//#include <iostream>
//#include <fstream>
//#include <string>
//
//int main()
//{
//    string filename = "example.txt";
//    ofstream outfile(filename);
//    outfile << "This is an example text file." << endl;
//    outfile.close();
//
//    ifstream infile(filename);
//    string line;
//    while (getline(infile, line))
//    {
//        cout << line << endl;
//    }
//    infile.close();
//
//    return 0;
//}
//#include <fstream>
//int main()
//{
//    ofstream outfile("test.txt");
//    int x = 4;
//    double y = 3.14;
//    string z = "world";
//    outfile << x << endl << y << endl << z << endl;
//
//    return 0;
//}
//int main()
//{
//    ifstream infile("test.txt");
//    int x;
//    double y;
//    string z;
//    infile >> x >> y >> z;
//
//    cout << x << endl << y << endl  << z << endl;
//    return 0;
//}

//#include <fstream>
//int main()
//{
//    ofstream outfile("test.txt");
//    int x = 4;
//    double y = 3.14;
//    string z = "world";
//    outfile << x  << y << z << endl;
//
//    return 0;
//}

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

struct ChatInfo
{
    string _name;
    int _id;
    string _msg;
};

int main()
{
    ChatInfo c = { "小明", 2021304, "明天一起自习吧?" };
    // 序列化
    ostringstream oss;
    oss << c._name << endl;
    oss << c._id << endl;
    oss << c._msg << endl;

    string str = oss.str();
    cout << str << endl;

    return 0;
}
