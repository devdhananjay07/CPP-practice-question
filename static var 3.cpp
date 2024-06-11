#include <iostream>

int main() {

    int marks1 = 70;
    int marks2 = 89;
    int marks3 = 93;
    int totalmarks;
    float percentage;
    char grade;

    totalmarks = marks1 + marks2 + marks3;

    percentage = (static_cast<float>(totalmarks) / 300.0) * 100; // Casting

    std::cout << "Percentage = " << percentage << "%" << std::endl;

    switch (static_cast<int>(percentage) / 10) {
        case 100:
        case 90:
            grade = 'A';
            break;
        case 81:
            grade = 'B';
            break;
        case 71:
            grade = 'C';
            break;
        case 61:
            grade = 'D';
            break;
        default:
            grade = 'F';
    }
   std::cout << "Grade = " << grade << std::endl;

    return 0;
}

