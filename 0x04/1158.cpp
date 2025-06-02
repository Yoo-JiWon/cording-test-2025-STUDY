#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);// 입출력 속도 빠르게 하려고 넣는 부분

    int N, K;// 문제에서 주어진 정수 입력받기
    cin >> N >> K;

    list<int> people;// 사람들에 대한 배열을 연결리스트로 구현 
    for (int i = 1; i <= N; ++i) {
        people.push_back(i);//추가하는 함수
    } //N만큼 사람들이 있으니까 N번 반복

    vector<int> result; // 제거된 사람들에 대한 순서 저장용 (마지막에 출력해야해서)
    auto pop = people.begin();// 이전 문제 커서랑(정확히는 iterator) 비슷하게 제거할 사람 위치 초기화

    while (!people.empty()) { // poeple 이 비어있지 않을때까지 반복
        // K-1번 다음 사람으로 이동 
        for (int i = 1; i < K; ++i) {
            ++pop;
            if (pop == people.end()) pop = people.begin();
        }

        //K번째 사람 제거
        result.push_back(*pop);
    pop = people.erase(pop); // erase 후 반환되는 iterator는 다음 사람
        if (pop == people.end()) pop = people.begin(); // 마지막 사람 제거 했을때 다시 처음으로 돌아가도록 
    }

    // 출력
    cout << "<";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << result[i];
        if (i != result.size() - 1) cout << ", ";
    }
    cout << ">\n";

    return 0;
}