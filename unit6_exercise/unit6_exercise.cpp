﻿// unit6_exercise.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;


class Point {

public:

    Point(int x = 0, int y = 0) : x(x), y(y) { }

    int getX() const { return x; }

    int getY() const { return y; }

private:

    int x, y;

};

int main()
{
    int a[10] = {1,2,3,4,5,6,7};
    int* ptr;
    ptr = a;
    for (int i = 0; i < 10; i++) {
        cout << *(ptr + i);
    }
    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << a[i];
    }
    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << *(a+i);
    }
    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << ptr[i];
    }
    cout << endl;
    Point A(5, 10);
    Point* p = &A;
 
    (*p).getX();


}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
