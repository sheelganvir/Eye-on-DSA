#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

struct Student {
    string name;
    double physics;
    double chemistry;
    double maths;
    double percentage;
};

int main() {
    int n;

    cout << "Enter the number of students: ";
    cin >> n;

    vector<Student> students(n);

    for (int i = 0; i < n; ++i) {
        cout << "Enter details for student " << i + 1 << ":\n";
        cout << "Name: ";
        cin.ignore(); 
        getline(cin, students[i].name);
        cout << "Marks in Physics: ";
        cin >> students[i].physics;
        cout << "Marks in Chemistry: ";
        cin >> students[i].chemistry;
        cout << "Marks in Maths: ";
        cin >> students[i].maths;

        students[i].percentage = (students[i].physics + students[i].chemistry + students[i].maths) / 3.0;
    }

    cout << "\nMark Sheet:\n";
    cout << setw(20) << "Name" << setw(15) << "Physics" << setw(15) << "Chemistry" << setw(15) << "Maths" << setw(15) << "Percentage" << endl;
    cout << setfill('-') << setw(80) << "\n";
    cout << setfill(' ');

    for (int i = 0; i < n; ++i) {
        cout << i+1<<")"<<setw(15)<< students[i].name << setw(15) << students[i].physics << setw(15) << students[i].chemistry << setw(15) << students[i].maths << setw(15) << fixed << setprecision(2) << students[i].percentage << "%" << endl;
    }

    return 0;
}
