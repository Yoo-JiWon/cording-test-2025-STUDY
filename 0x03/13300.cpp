#include <iostream>
using namespace std;


    int main() {
        int N, K; //N이 총 학생수, K가 최대 방에 들어갈 수 있는 학생 수
        cin >> N >> K;
    
        int count[2][7] = {0}; // 성별 0,1 / 학년 1~6
    
        for (int i = 0; i < N; i++) {
            int gender, grade;
            cin >> gender >> grade;
            count[gender][grade]++; // 입력받으면서 인덱스 값 증가시키기
        }
    
        int rooms = 0;
        for (int gender = 0; gender <= 1; gender++) {
            for (int grade = 1; grade <= 6; grade++) {
                int students = count[gender][grade];
                if (students > 0) {
                    rooms += (students + K - 1) / K; // 올림 나눗셈
                }
            }
        }
    
        cout << rooms << "\n";
        return 0;
    }
