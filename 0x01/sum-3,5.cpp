#include <cstdio> 

int func1(int N) {
    int sum = 0;
    for (int i = 1; i <= N; i++){
        if (i % 3 == 0 || i % 5 == 0) { 
            sum += i;
        }
    } 
    return sum; 
} //func1 기능 작성

int main() {
    printf("%d\n", func1(16));
    printf("%d\n", func1(34567));
    printf("%d\n", func1(27639));

    getchar(); // 사용자 입력 대기 (이 부분은 내가 결과가 잘 출력되는지 보고 싶어서 넣어봤음.. 결과 보기도 전에 터미널 종료되길래..)
    return 0;
} //func1 기능에 대한 출력 
