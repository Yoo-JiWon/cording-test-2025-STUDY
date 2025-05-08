#include <iostream>
using namespace std;

int main (){
    int a,b,c; //주사위 세개 눈
    cin >> a >> b >> c; 
    if (a == b && b == c){
        cout <<  10000 + a * 1000 << '\n';
    }
    else if  (a == b || a == c){
        cout << 1000 + a * 100 << '\n';
    }
    else if ( b == c ){
        cout << 1000 + b * 100 << '\n'; //  a == b || a == c || b == c 인 조건으로 해도 되기는 하는데 계산식에서 a라고 명시해 뒀기때문에 이 줄 추가해서 계산식 정확히 예외없을 수 있게함. 
    }
    else {
        int max_val = max(a, max(b,c));
        cout << max_val * 100 << '\n';
    }
}