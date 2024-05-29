#include <iostream>
#include <string>

using namespace std;

struct Scholar {
    string first_name;
    string last_name;
    int total_classes;
    int absences;
};

float calculate_mean(Scholar scholar) {
    int attendance = scholar.total_classes - scholar.absences;
    float score = attendance * 5 + scholar.absences * 2;
    return score / scholar.total_classes;
}

int main() {
    Scholar scholar;
    setlocale(LC_ALL, "Russian");
    cout << "Введите имя: \n";
    cin >> scholar.first_name;
    cout << "Введите фамилию: \n";
    cin >> scholar.last_name;
    cout << "Введите общее количество занятий: \n";
    cin >> scholar.total_classes;
    cout << "Введите количество пропусков: \n";
    cin >> scholar.absences;

    float average_score = calculate_mean(scholar);
    string name = scholar.first_name;
    string Lname = scholar.last_name;
    cout << "Средний балл студента " << name << " " << Lname << ": " << average_score << endl;
}