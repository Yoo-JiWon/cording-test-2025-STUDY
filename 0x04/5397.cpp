#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T; // 테스트 케이스 개수

    while (T--) {
        string input; //강산이가 입력한 문자열 받는 부분
        cin >> input;

        list<char> password;//연결리스트 생성
        auto cursor = password.begin(); // 첫번째 커서 리턴 및 저장

        for (char ch : input) { //range-based for loop로 (저번에 배웠던거) input 넣고 그 값에 대한 판단 
            if (ch == '<') {//왼쪽 화살표
                if (cursor != password.begin()) --cursor;
            } else if (ch == '>') {//오른쪽 화살표
                if (cursor != password.end()) ++cursor;
            } else if (ch == '-') {//백스페이스
                if (cursor != password.begin()) {
                    cursor = password.erase(--cursor);
                }
            } else {//그냥 알파벳인 경우 와 그 외
                password.insert(cursor, ch);
            }
        }

        for (char c : password) cout << c;
        cout << '\n';
    }

    return 0;
}