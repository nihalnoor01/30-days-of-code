#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int up = 0; up < n; up++) {
        string s;
        cin >> s;
        
        for (int i = 0; i < s.length(); i++) {
            if (i % 2 == 0) cout << s[i];
        }
        cout << " ";
        
        for (int i = 0; i < s.length(); i++) {
            if (i % 2 != 0) cout << s[i];
        }
        cout << endl;
    }
    
    return 0;
}
