#include <iostream>
using namespace std;
#include <string> // 문자열을 string 자료형 쓰기 위한 헤더 ..
int main (){

    long long A,B,C; // 일단 슷자를 입력 받아야겠져
    cin >> A >> B >> C; // 숫자 입력받는 부분
    long long result = A * B * C; // 곱한 결과값을 저장할 변수를 선언하고 곱한값을 저장함(정수형태로)
    //그리고 세 숫자를 다 곱한걸 저장할 배열이 필요함.
    string product = to_string(result);  // 알파벳 세는거랑 마찬가지로 숫자 모양만 보고 세는거면 문자열로 처리해도 될거같아서 이렇게 짬
    

    int count[10] = {0}; // 숫자개수 세는 배열 (숫자는 0~9로 정해져 있으니까)

    for (char ch : product) { // product에 저장되어 있는 문자열에 대해서 각 문자를 하나씩 꺼내서 ch에 저장하기를 반복하는 코드-range-based for loop 
        count[ch - '0']++; // '0'부터 시작해서 해당 인덱스 증가 
    } // for문의 문자열 버전으로 이해.... 

    for (int i = 0; i < 10; i++) {
        cout << count[i] << '\n'; //알파벳 세는거랑 같은데 이부분만 줄바꿈으로..출력
    }

    return 0;


}