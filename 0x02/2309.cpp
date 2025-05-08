#include <iostream>
using namespace std;
#include <algorithm> // 배열 정렬할때 쓸 함수가 정의되어 있음
int main (){
    int sum = 0 ;
    int arr[9];

    for (int i = 0; i < 9; i++){
        cin >> arr[i];
        sum += arr[i];
    } //합이 100이 되어야하는거니까 합 - 100 = ? 나머지 값에서 조합을 찾아서 제외하는게 더 빠를거 같아서 이렇게 생성
     bool found = false; //불필요한 반복을 피하기 위해서 변수로서 저장
     for (int i = 0; i < 9; i++) {
         for (int j = i + 1; j < 9; j++) {
             if (sum - arr[i] - arr[j] == 100) {
                int result[7]; 
                int idx =0 ;
                 for (int k = 0; k < 9; k++) {
                     if (k != i && k != j) // 이 두 명을 제외하려고
                        result[idx++] = arr[k];
                        
                 }
                 sort(result, result + 7); // 오름차순으로 정렬하기 위함..
                 for (int k = 0; k < 7; k++) {
                    cout << result[k] << '\n';//배열 저장값 출력
                 }
                 found = true;
                 break;
             }
         }
         if (found) break;
     }
 
     return 0;
}