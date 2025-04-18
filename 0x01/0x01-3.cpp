#include <cstdio>
#include <cmath> //이 헤더에 루트값(제곱근) 구하는 함수가 포함되어 있다고 합니다..

int func3(int N) {
    int n = (int)sqrt(N); // sqrt 라는 함수를 이용해서 주어진 수에 대한 루트값을 구함 (double 형태로 반환값 나와서 int로 강제 형변환)
    if (n * n == N) return 1; // 주어진 수가 제곱수라면 1을 반환
    else return 0; // 아니면 0 반환
} // func3 에 대한 기능 

int main() {
    printf("%d\n", func3(9));           
    printf("%d\n", func3(693953651));   
    printf("%d\n", func3(756580036)); 
    getchar(); // 앞선 문제와 마찬가지로 터미널 종료되지 않도록 출력값 대기  
    return 0;
} // func3 기능에 대한 출력