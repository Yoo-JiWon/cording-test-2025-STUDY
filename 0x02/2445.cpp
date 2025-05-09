#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    //윗 부분 출력
    for (int i = 1; i <= N; i++) {
        
        for (int j = 1; j <= i ; j++) cout << '*';
        
        for (int j = 1; j <= 2 * (N - i); j++) cout << ' ';

        for (int j = 1; j <=  i; j++) cout << '*';
        cout << '\n';
    }
    //대칭으로 아랫 부분 출력하는 코드(근데 여기서 마지막 줄 반복 되지 않게 조절)
    for (int i = N - 1 ; i >= 1; i--) {
        
        for (int j = 1; j <= i ; j++) cout << '*';
        
        for (int j = 1; j <= 2 * (N - i); j++) cout << ' ';

        for (int j = 1; j <=  i; j++) cout << '*';
        cout << '\n';
    }

    return 0;
}