#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int n;
    string name, phone, query;
    map<string, string> phoneBook;
    
    // Read the number of entries
    cin >> n;
    
    // Add entries to the phone book
    for (int i = 0; i < n; i++) {
        cin >> name >> phone;
        phoneBook[name] = phone;
    }
    
    // Process queries - important to use cin instead of getline for initial input
    while (cin >> query) {
        if (phoneBook.find(query) != phoneBook.end()) {
            cout << query << "=" << phoneBook[query] << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
    
    return 0;
}
