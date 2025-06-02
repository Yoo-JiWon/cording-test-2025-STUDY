#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string init; 
  cin >> init; // 문자열 시작 init 입력 받기
  list<char> L; // list 사용 L 이라는 이름으로 char을 담는 양방향 연결리스트를 선언하는 것
  for (auto c : init) L.push_back(c); // 이거 문법은 다시 공부해올게요 ..
  auto cursor = L.end();
  int q;//수행할 명령의 개수
  cin >> q;
  while (q--) {
    char op;
    cin >> op;//명령의 종류 (option 인듯) 입력받기
    if (op == 'P') { //입력받은 명령이 P라면
      char add;
      cin >> add;
      L.insert(cursor, add); //instert (삽입)
    }
    else if (op == 'L') { //입력받은 명령이 L이면
      if (cursor != L.begin()) cursor--; // 커서의 위치가 맨앞이 아닐때! cursor 위치 감소 시킴으로서 왼쪽으로 이동
    
    else if (op == 'D') {
      if (cursor != L.end()) cursor++; //오른쪽으로 이동 커서 위치가 맨 뒤가 아닐때
    }
    else { // 'B'
      if (cursor != L.begin()) {
        cursor--;
        cursor = L.erase(cursor);
      }
    }
  }
  for (auto c : L) cout << c;
}
}