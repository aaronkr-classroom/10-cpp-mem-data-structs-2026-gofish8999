// letter_grade.cpp

#include <string>
#include <iostream>
#include <cstddef> // size_t 때문에

using namespace std;

string letter_grade(double grade) {

    // 각 범위를 구분하는 점수
    static const double numbers[] = { 97, 94, 90, 87, 84, 80, 77, 74, 70, 60, 0 };

    // 문자 등급의 명칭
    static const char* const letters[] = { "A+", "A", "A-", "B+", "B", "B-", "C+", "C", "C-", "D", "F" };

    // 배열 크기 계산
    static const size_t ngrades = sizeof(numbers) / sizeof(*numbers);

    // 점수에 맞는 등급 반환
    for (size_t i = 0; i < ngrades; ++i) {
        if (grade >= numbers[i])
            return letters[i];
    }

    return "???";
}

int main() {
    int g;
    cout << "Enter your grade : >>> ";
    cin >> g;

    string ltr = letter_grade(g);

    cout << "You got : " << ltr << endl;

    return 0;
}
