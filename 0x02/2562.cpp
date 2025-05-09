#include <iostream>
using namespace std;
#include <algorithm> // 배열에서 최댓값 찾는 함수 쓰려고
int main() {
    int arr[9];

    for (int i = 0; i < 9; i++){
        cin >> arr[i];
     } // 배열에 들어갈 자연수 입력 받기

     // 최댓값 찾기
    int maxValue = *max_element(arr, arr + 9); // 구간 설정해주는 코드

    // 최댓값 위치 찾기
    int maxIndex = max_element(arr, arr + 9) - arr;

    // 출력
    cout << maxValue << '\n'; // 최댓값 출력하는 부분
    cout << maxIndex + 1 << '\n'; //최댓값 위치 출력하는 부분 (인덱스가 0부터 시작하는걸 고려해서)

    return 0;

}