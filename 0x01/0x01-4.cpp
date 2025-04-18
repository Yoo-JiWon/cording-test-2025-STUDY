#include <cstdio>

int func4(int N){

    int i = 1;
    while (i * 2 <= N) {
            i *= 2;
        }
        return i; // i가 1 일때 부터 시작해서, 그냥 계속해서 2 를 곱해 나가..
    //2,4,8,16 > 2, 2^2,2^3 이니까 계속 반복해서 N보다 커지기 직전값 출력/ 혹은 같은값(= 꼭 넣어주기)

} // func4 기능 구현

int main(){
    printf("%d\n",func4(5)); //포매팅 정수형으로 출력하겠다는것.
    printf("%d\n",func4(97615282));
    printf("%d\n",func4(1024));
    
    getchar(); // 터미널 안닫히게 하려고.. 추가
    return 0;

} // 기능 테스트 