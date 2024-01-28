#include <iostream>
#include <vector>
#include <algorithm>
#include "student.h"
#include "fileio.h"

int main() {
    try {
        std::vector<Student> students;

        char choice;
        std::cout << "Ar norite duomenis gauti is failo? (y/n): ";
        std::cin >> choice;

        if (choice == 'y' || choice == 'Y') {

            students = readDataFromFile("kursiokai.txt");
        } else {

            int numHomeworks;
            std::cout << "Iveskite namu darbu kieki: ";
            std::cin >> numHomeworks;

            int numStudents;
            std::cout << "Iveskite studentu kieki: ";
            std::cin >> numStudents;

            for (int i = 0; i < numStudents; ++i) {
                Student student(numHomeworks);
                std::cin >> student;
                students.push_back(student);
            }
        }

        std::sort(students.begin(), students.end());

        std::cout << "Pavarde\t\tVardas\tGalutinis (Vid.)\tGalutinis (Med.)\n";
        std::cout << "----------------------------------------------------\n";

        for (const Student& student : students) {
            std::cout << student << '\n';
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
