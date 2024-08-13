#include <iostream>
#include <string>
using namespace std;

void inputGrades(string subjects[], double grades[], int numSubjects) {
    for (int i = 0; i < numSubjects; i++) {
        cout << "Enter grade for " << subjects[i] << ": ";
        cin >> grades[i];
    }
}

double calculateAverage(double grades[], int numSubjects) {
    double sum = 0.0;
    for (int i = 0; i < numSubjects; i++) {
        sum += grades[i];
    }
    return sum / numSubjects;
}

string determinePassFail(double average) {
    if (average >= 50.0) {
        return "Pass";
    } else {
        return "Fail";
    }
}

int main() {
    int numStudents, numSubjects;

    cout << "Enter the number of students: ";
    cin >> numStudents;
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    string studentNames[numStudents];
    string subjects[numSubjects];
    double grades[numSubjects];

    for (int i = 0; i < numSubjects; i++) {
        cout << "Enter the name of subject " << (i + 1) << ": ";
        cin >> subjects[i];
    }

    for (int i = 0; i < numStudents; i++) {
        cout << "\nEnter name of student " << (i + 1) << ": ";
        cin >> studentNames[i];

        cout << "Enter grades for " << studentNames[i] << ":\n";
        inputGrades(subjects, grades, numSubjects);

        double average = calculateAverage(grades, numSubjects);
        string result = determinePassFail(average);

        cout << "Average grade for " << studentNames[i] << ": " << average << endl;
        cout << studentNames[i] << " has " << result << "\n";
    }

    return 0;
}