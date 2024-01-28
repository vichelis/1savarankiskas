#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <vector>

class Student {
private:
    std::string firstName;
    std::string lastName;
    std::vector<double> homeworkResults;
    double examResult;
    double finalScore;

public:
    Student();
    explicit Student(int numHomeworks);

    ~Student();

    Student(const Student& other);

    Student& operator=(const Student& other);

    friend std::istream& operator>>(std::istream& is, Student& student);
    friend std::ostream& operator<<(std::ostream& os, const Student& student);

    double calculateFinalScoreAverage() const;
    double calculateFinalScoreMedian() const;

    std::string getFirstName() const;
    std::string getLastName() const;

    bool operator<(const Student& other) const;
    bool operator==(const Student& other) const;
};

#endif // STUDENT_H
