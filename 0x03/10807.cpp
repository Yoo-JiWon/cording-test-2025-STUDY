#include <iostream>
using namespace std;
int main (){

    int N =0 , V = 0; // 일단 슷자를 입력 받아야겠져 > N개를 입력받기위한것과 V를 받음
    cin >> N; // 숫자 입력받는 부분
    int arr[100]; // 문제에서 최대 100개까지라고 주어짐
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    } //배열에 정수입력 받기

    cin >> V;

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] == V) {
            count++;
        }
    } //for문 돌면서 일치하는 값 나올때 하나씩 증가시키키

    cout << count << '\n'; // 줄바꿈 해서 출력하기
    return 0;

    
}