#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    //피라미드 처럼 생긴 윗부분 출력하는 코드
    for (int i = 1; i <= N; i++) {
        // 공백 출력: N - i개
        for (int j = 1; j <= N - i; j++) cout << ' ';
        // 별 출력: 2*i - 1개
        for (int j = 1; j <= 2 * i - 1; j++) cout << '*';
        cout << '\n';
    }
    //대칭으로 아랫 부분 출력하는 코드(근데 여기서 마지막 줄 반복 되지 않게 조절)
    for (int i = N - 1; i >= 1; i--) {
        // 공백 출력: N - i개
        for (int j = 1; j <= N - i; j++) cout << ' ';
        // 별 출력: 2*i - 1개
        for (int j = 1; j <= 2 * i - 1; j++) cout << '*';
        cout << '\n';
    }

    return 0;
}