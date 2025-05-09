#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = N; i >= 1; i--) {
        // 공백 출력: N - i개
        for (int j = 1; j <= N - i; j++) cout << ' ';
        // 별 출력: 2*i - 1개
        for (int j = 1; j <= 2 * i - 1; j++) cout << '*';
        cout << '\n';
    }

    return 0;
}