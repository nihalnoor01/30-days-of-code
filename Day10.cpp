#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    
    string binary = "";
    int temp = n;
    
    while (temp > 0) {
        binary = to_string(temp % 2) + binary;
        temp /= 2;
    }
    
    
    int max_consecutive = 0;
    int current_consecutive = 0;
    
    for (char bit : binary) {
        if (bit == '1') {
            current_consecutive++;
            max_consecutive = max(max_consecutive, current_consecutive);
        } else {
            current_consecutive = 0;
        }
    }
    
    
    
    cout << max_consecutive << endl;
    
    return 0;
}
