#include <iostream>
using namespace std;
#include <climits> // 최솟값 찾을때 INT_MAX 정의되어 있는 함수
int main(){
    int sum = 0 ;
    int min = INT_MAX;
    int n;

    for (int i = 0; i < 7; i++) {
        cin >> n;
        if (n % 2 == 1) {          // 홀수 판별
            sum += n;              
            if (n < min) {     
                min = n;
            }
        }
    }

    if (sum == 0) { // 홀수가 하나도 없을 때
        cout << -1 << '\n';        
    } else {
        cout << sum << '\n';
        cout << min << '\n';
    }

    return 0;
}

