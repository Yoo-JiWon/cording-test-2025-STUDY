#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        char char1[1001], char2[1001];
        cin >> char1 >> char2;

        int count1[26] = {0};
        int count2[26] = {0};

        for (int i = 0; char1[i] != '\0'; i++) {
            count1[char1[i] - 'a']++;
        }

        for (int i = 0; char2[i] != '\0'; i++) {
            count2[char2[i] - 'a']++;
        }

        int result = 0;
        for (int i = 0; i < 26; i++) {
            int diff = count1[i] - count2[i];
            if (diff < 0) diff = -diff;
            result += diff;
        }

        if (result == 0) {
            cout << "Possible\n";  //
        } else {
            cout << "Impossible\n";  //
        }
    }

    return 0;
}