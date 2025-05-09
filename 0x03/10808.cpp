#include <iostream>
using namespace std;
#include <string> // 문자열을 string 자료형 쓰기 위한 헤더 ..
int main (){

    string word; // 문자열을 int arr[?] 이런식으로 쓰면 길이 미리 지정해야해서 .. string이라는 자료형으로 대체함
    cin >> word; // 단어 입력받는 부분

    int A[26] = {0}; // 알파벳 수 세는 배열 (알파벳 숫자는 정해져 있으니까)

    for (char ch : word) { // word에 저장되어 있는 문자열에 대해서 각 문자를 하나씩 꺼내서 ch에 저장하기를 반복하는 코드-range-based for loop 
        A[ch - 'a']++; // 'a'부터 시작해서 해당 인덱스 증가 // 아스키 코드로 계산해서 a를 기준으로 빼면 문자열 위치 알 수 있음..
    } // for문의 문자열 버전으로 이해.... 

    for (int i = 0; i < 26; i++) {
        cout << A[i] << ' ';
    }

    return 0;


}