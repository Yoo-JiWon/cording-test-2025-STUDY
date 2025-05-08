#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false); // 이걸 꼭 써줘야 cin 및 cout의 속도가 빨라진다고 하네욤
    cin.tie(NULL);// 이거는 cin 및 cout의 연결을 끊어서 안정성을 저하하지만 속도를 높이는 역할ㄹ.. 강의 다시 봐야겠더더

    long long T;
    cin >>T;
    for (long long i = 0 ; i < T; i++){
        int A,B;
        cin >> A >> B;
        cout << A+B << '\n';
    }
return 0;
}