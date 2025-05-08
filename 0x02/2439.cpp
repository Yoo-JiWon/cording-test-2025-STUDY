#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    for (int i = 1; i<= N; i++){
        for(int j = 1; j<= N - i; j++){
        cout << ' '; // 앞쪽 빈칸을 공백으로 채움
        }
        for (int j = 1; j <= i; j++) {
            cout << '*';
        }
        cout << '\n';
    }
    return 0;
}