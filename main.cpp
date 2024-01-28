#include <iostream>
#include <vector>

using namespace std;

double calculateGalutinis(const vector<double>& ndrzlt, double egz) {
    double sum = 0.0;
    for (double result : ndrzlt) {
        sum += result;
    }
    double ndvid = sum / ndrzlt.size();

    double Galutinis = 0.4 * ndvid + 0.6 * egz;

    return Galutinis;
}

int main() {
    string v, p;
    cout << "Vardas: ";
    cin >> v;
    cout << "Pavarde: ";
    cin >> p;

    vector<double> ndrzlt;
    for (int i = 1; i <= 10; ++i) {
        double result;
        cout << "Namu darbu vertinimas " << i << ": ";
        cin >> result;
        ndrzlt.push_back(result);
    }

    double egz;
    cout << "Egzamino rezultatai: ";
    cin >> egz;
    double Galutinis = calculateGalutinis(ndrzlt, egz);
    cout << "Student: " << v << " " << p << endl;
    cout << "Namu darbu rezultatai: ";
    for (double result : ndrzlt) {
        cout << result << " ";
    }
    cout << endl;
    cout << "Egzamino rezultatas: " << egz << endl;
    cout << "Galutinis ivertinimas: " << Galutinis << endl;

    return 0;
}
    double examResult;
    cout << "Enter exam result: ";
    cin >> examResult;

    // Calculate and output final score
    double finalScore = calculateFinalScore(homeworkResults, examResult);

    // Output the results
    cout << "Student: " << name << " " << surname << endl;
    cout << "Homework results: ";
    for (double result : homeworkResults) {
        cout << result << " ";
    }
    cout << endl;
    cout << "Exam result: " << examResult << endl;
    cout << "Final score: " << finalScore << endl;

    return 0;
}
