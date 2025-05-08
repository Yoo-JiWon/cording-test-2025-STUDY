#include <iostream>
using namespace std;

int main(){
    long long a,b; 
    cin >>a >>b;//정수 입력 받기 (int 썼다가 30점 받아서 변수형 고침, 변수형 고치면 100점 나와용)

    long long start = min(a,b) +1;
    long long end = max(a,b) -1;

    if (start > end){ // 두개가 같은 수일때 예외처리 할 조건문.
        cout << 0 << '\n';
    } else {
        cout << end - start + 1 << '\n'; // 두 수 사이에 있는 개수 출력하는거 
        for (long long i = start; i <= end; i++){
            cout << i << ' ';//반복문 이용해서 출력
        }

    }
    return 0;

}