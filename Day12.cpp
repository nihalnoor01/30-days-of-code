#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Person {
protected:
    string firstName;
    string lastName;
    int idNumber;
    
public:
    // Constructor
    Person(string firstName, string lastName, int id) {
        this->firstName = firstName;
        this->lastName = lastName;
        this->idNumber = id;
    }
    
    // Print person data
    void printPerson() {
        cout << "Name: " << lastName << ", " << firstName << endl;
        cout << "ID: " << idNumber << endl;
    }
};

class Student : public Person {
private:
    vector<int> testScores;
    
public:
    // Constructor
    Student(string firstName, string lastName, int id, vector<int> scores)
        : Person(firstName, lastName, id) {
        this->testScores = scores;
    }
    
    // Calculate grade
    char calculate() {
        int sum = 0;
        for (int score : testScores) {
            sum += score;
        }
        
        int avg = sum / testScores.size();
        
        if (avg >= 90) {
            return 'O'; // Outstanding
        } else if (avg >= 80) {
            return 'E'; // Excellent
        } else if (avg >= 70) {
            return 'A'; // Acceptable
        } else if (avg >= 55) {
            return 'P'; // Poor
        } else if (avg >= 40) {
            return 'D'; // Dreadful
        } else {
            return 'T'; // Terrible
        }
    }
};

int main() {
    string firstName, lastName;
    int id;
    int numScores;
    
    cin >> firstName >> lastName >> id >> numScores;
    
    vector<int> scores(numScores);
    for (int i = 0; i < numScores; i++) {
        cin >> scores[i];
    }
    
    Student* s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << endl;
    
    delete s;
    return 0;
}
