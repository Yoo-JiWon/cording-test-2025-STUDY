#include <iostream>
using namespace std;
#include <algorithm> // 중앙값 정렬할때 쓸 함수가 정의되어 있음

int main(){
    int sum = 0;
    int arr[5];

    for (int i = 0; i < 5; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr, arr + 5); //오름차순 정리 //(시작 주소, 끝 주소)
    cout << sum / 5 << '\n';   // 평균
    cout << arr[2] << '\n';    // 중앙값 (정렬하고 나서 세번째)   
    return 0;
}