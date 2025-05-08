#include <iostream>
using namespace std;
#include <algorithm>

int main(){
    int arr[21]; //인덱스 0으로 시작하는데, 그냥 직관적으로 풀려고 0은 버리고..
    for (int i = 1; i <= 20; i++){
        arr[i] = i;
    } //1부터 순서대로 배열 채우기 20까지
    
    for (int i = 0 ; i < 10; i++ ){ //10번 반복 입력받기
        int a,b ;
        cin >> a >> b;
        reverse(arr + a, arr + b + 1); // 이 함수를 이용해서 배열에 대한 구간 뒤집기 가능
    }

    for (int i = 1; i <= 20; i++){
        cout << arr[i];
        if (i != 20) cout << ' ';  // 마지막엔 공백 없이 출력
    }
    return 0;
}