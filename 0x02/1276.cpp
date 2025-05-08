#include <iostream>
using namespace std;

int main() {
	int n, i, cost[20], Y = 0, M = 0;
	cin >>n; //동호가 저번달에 이용한 통화개수 n을 입력받는다. 
	for (i = 0; i < n; i++) {
		cin >> cost[i]; //통화 시간
		Y += cost[i] / 30 + 1;//영식 요금제
		M += cost[i] / 60 + 1;//만식 요금제
	}//for문을 사용해서 배열에 동호가 저번달에 이용한 통화시간을 입력받는다.
	Y *= 10;
	M *= 15;
	if (Y == M)//영식 요금제, 만식 요금제가 같을때
		cout << "Y M " << Y << '\n';
	else if (Y > M)
		cout << "M " << M << '\n';
	else 
		cout << "Y " << Y << '\n';
}
