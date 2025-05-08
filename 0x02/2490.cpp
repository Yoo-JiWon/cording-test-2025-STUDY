#include <iostream>
using namespace std;

int main () {
    for (int i = 0; i < 3; i++) { // 입력값 세번 받으려고 반복문
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int sum = a + b + c + d;

        switch (sum) {
        case 0: cout << "D\n"; break; // 배 4개 (윷)
        case 1: cout << "C\n"; break; // 배 3개
        case 2: cout << "B\n"; break; // 배 2개
        case 3: cout << "A\n"; break; // 배 1개
        case 4: cout << "E\n"; break; // 배 0개 (모)
    }


}
return 0;
}