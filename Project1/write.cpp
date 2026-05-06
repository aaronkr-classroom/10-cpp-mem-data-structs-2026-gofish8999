// write_args.cpp

#include <iostream>

using namespace std;

// C++ 파일 실행할 수 있는 과정
// write_args.cpp -> 전처리 -> 컴파일 ->
// 오브젝트(write_args.obj/o) ->
// 링크 -> 실행파일(write_args.exe / a.out)

// 터미널에서 실행한다면
// >>> Chp10.exe say hello world
// argc = 3
// argv = ["say", "hello", "world"]
// >>> say hello world

int main(int argc, char** argv) { // Linux 터미널에서 많이 사용

    // 명령 프롬프트에 입력한 인수가 존재하면 출력
    if (argc > 1) { // argc = 인수의 개수 (argument count)
        cout << endl << "실행파일 : " << argv[0] << endl;
        cout << "인수들 : ";
        for (int i = 1; i < argc; ++i) { // i=2: i!=argc 로 하면 앞에 2개 자르고 나옴
            // 첫 번째 인수를 출력
            // 공백 하나와 함께 나머지 인수들을 각각 출력
            cout << argv[i] << " "; // argv[i]는 char* 타입
        }
        cout << endl;
    }

    return 0;
}
