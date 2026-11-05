#include <iostream>
#include <vector>   // vector头文件
using namespace std;

int main()
{
    // 1. 定义vector，存int
    vector<int> vec;

    // 2. 尾部添加元素
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    // 3. 遍历方式1：for + 下标
    cout << "下标遍历：";
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    // 4. 范围for遍历（C++11及以上）
    cout << "范围for遍历：";
    for (auto v : vec)
    {
        cout << v << " ";
    }
    cout << endl;

    // 5. 迭代器遍历
    cout << "迭代器遍历：";
    for (auto it = vec.begin(); it != vec.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // 6. 常用接口
    cout << "元素数量 size = " << vec.size() << endl;
    cout << "首元素 front = " << vec.front() << endl;
    cout << "尾元素 back = " << vec.back() << endl;

    // 7. 删除尾部元素
    vec.pop_back();
    cout << "pop_back之后：";
    for (auto v : vec)
    {
        cout << v << " ";
    }
    cout << endl;

    // 8. 指定位置插入、删除
    auto it = vec.begin();
    vec.insert(it + 1, 99);  // 在第2个位置插入99
    vec.erase(it);           // 删除第一个元素

    cout << "插入删除后：";
    for (auto v : vec)
    {
        cout << v << " ";
    }
    cout << endl;

    // 清空
    vec.clear();
    cout << "clear后 size = " << vec.size() << endl;

    return 0;
}
