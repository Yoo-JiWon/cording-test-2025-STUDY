#include <iostream>
using namespace std;

int main() {
    int n, x, result = 0 ;
    cin >> n;

    int a[100000];          
    bool check[2000001] = {}; //불리언 배열 처음써봄..

    for (int i = 0; i < n; i++) {
        cin >> a[i]; // 배열에 숫자 입력 받는 부분
    }

    cin >> x; 

    for (int i = 0; i < n; i++) {
        int c = x - a[i];     //합한 숫자를 검사하는게 아니라, 짝이 되어야 하는 숫자 자체를 검사
        if (c > 0 && check[c]) { // 그 숫자가 전에 나왔었으면 결과값을 증가시키는 로직으로..
            result++;
        }
        check[a[i]] = true; // 불리언 배열에 나온 숫자를 업데이트 하는 과정임.
    }

    cout << result;

    return 0;
}