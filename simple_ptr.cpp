// simple_ptr.cpp

#include <iostream>

using namespace std;

int main() {
    int x = 5;
    int y = 10;

    // p는 x를 가리킴
    int* p = &x;
    int* q = &y;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "x의 주소 : " << p << endl;
    cout << "y의 주소 : " << q << endl;

    // p를 이용해 x 값을 변경
    *p = 6;
    *q = *p * 2;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "x의 주소 : " << p << endl;
    cout << "y의 주소 : " << q << endl;

    int a = 1, b = 2, c = 3, d = 4, e = 5, f = 6, g = 7;
    int* h = &a, * i = &b, * j = &c, * k = &d, * l = &e, * m = &f, * n = &g;

    cout << endl << "변수의 값 : " << endl
        << "a = " << a << endl
        << "b = " << b << endl
        << "c = " << c << endl
        << "d = " << d << endl
        << "e = " << e << endl
        << "f = " << f << endl
        << "g = " << g << endl;

    cout << endl << "변수의 주소 : " << endl
        << "h = " << h << endl
        << "i = " << i << endl
        << "j = " << j << endl
        << "k = " << k << endl
        << "l = " << l << endl
        << "m = " << m << endl
        << "n = " << n << endl;

    // 0x20(16진수) 증가 = 10진수로는 32 byte // 32/8 = 4바이트 -> int는 32비트 (4바이트)
    // int면 4바이트씩 증가해야 하는데 32바이트 증가하는 이유? 패딩 때문에 (메모리 성능을 위해 빈 공간을 만듦)

    return 0;
}
