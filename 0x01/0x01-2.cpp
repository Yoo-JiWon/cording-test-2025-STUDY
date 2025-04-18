# include <cstdio>

int func2(int arr[], int N){
    for (int i = 0; i < N; i++ ){
        for(int j = i + 1; j < N; j++){
            if(arr[i] + arr[j] == 100 ){
                return 1;
            }
        }
        
    }
    return 0;
} //func2 기능 작성 (하나하나 비교, 브루트 포스 방식)

int main(){
     //c++에서 배열을 인자값으로 직접 넘겨줄 수 없어서 이런식으로 선언해서 넘겨주는데 이거 맞나?
    int arr1[] = {1, 52, 48};
    int arr2[] = {50, 42};
    int arr3[] = {4, 13, 63, 87};

    printf("%d\n", func2(arr1, 3)); 
    printf("%d\n", func2(arr2, 2)); 
    printf("%d\n", func2(arr3, 4));
    
    getchar(); // 사용자 입력 대기 (이 부분은 내가 결과가 잘 출력되는지 보고싶어서 넣었음)
    return 0;
 

}// func2 기능 테스트