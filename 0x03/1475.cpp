#include <iostream>
#include <string>
using namespace std;

int main() {
    string N; //N 정수인데, 문자열로 처리하는게 편할거 같아서 
    cin >> N;

    int count[10] = {0}; //0-9까지 세려고 배열 선언해줌 

    for (int i = 0; i < N.length(); i++) {
        int set = N[i] - '0'; // 지난 문제랑 마찬가지로..아스키 코드 이용해서 두 숫자의 아스키 차를 이용해서 숫자를 세주기
        count[set]++;
    }

    // 6이랑 9는 중복 가능해서 예외로 여기에 빼줌
    int sn = count[6] + count[9];
    int setsn = (sn + 1) / 2; //이 부분 둘의 개수를 합친 뒤 2로 나눠 필요한 세트 수 계산하는것..
    //홀수일때를 대비해서 + 1 예를 들면 3개일때는 세트가 2개가 필요한데, 그냥 나누면 1.5개로 나오니까.. 올림처리하기 위함. 

    count[6] = count[9] = setsn;

    // 가장 큰 값이 필요한 세트 개수(set 수에서)
    int result = 0;

    for (int i = 0; i < 10; i++) {
        if (count[i] > result) {
            result = count[i];
        }
    }

    cout << result;

    return 0;
}