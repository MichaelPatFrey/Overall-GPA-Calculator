#include <iostream>
#include <vector>
// this program takes the number of classes you take then calculates your GPA based on your inputs
int main() {
double oGPA; //Used to print your overall GPA
double Average = 0;
int nClasses; //Takes number of classes in
int Grades;
int cGrade;
int i = 0;
char YN;
std::vector<int> ClassGrade; //Will use to print the grade for each class, using ClassGrade[#];


//the code under this will be what takes in the number of classes as well as their grades.
    std::cout << "How many classes do you have? Please input the number: ";
    std::cin >> nClasses;
        while (i < nClasses) {
            std::cout << "What is the grade out of 100 for class #"; std::cout << i + 1; std::cout << ": ";
            std::cin >> Grades;
            if (Grades <= 100) {
                ClassGrade.push_back(Grades);
                i++;
            }
            else {
                std::cout << "That was an invalid Grade"; std::cout << std::endl;
            }
        }
//code below calculates the GPA of the student
    for (int j = 0; j < ClassGrade.size(); j++) {
        Average = Average + ClassGrade[j];
    }

    double oAverage = Average / nClasses;

    if (oAverage >= 93) {
        oGPA = 4.0;
    }
    else if (oAverage >= 90 && oAverage < 93) {
        oGPA = 3.7;
    }
    else if (oAverage >= 87 && oAverage < 90) {
        oGPA = 3.3;
    }
    else if (oAverage >= 83 && oAverage < 87) {
        oGPA = 3.0;
    }
    else if (oAverage >= 80 && oAverage < 83) {
        oGPA = 2.7;
    }
    else if (oAverage >= 77 && oAverage < 80) {
        oGPA = 2.3;
    }
    else if (oAverage >= 73 && oAverage < 77) {
        oGPA = 2.0;
    }
    else if (oAverage >= 70 && oAverage < 73) {
        oGPA = 1.7;
    }
    else if (oAverage >= 67 && oAverage < 70) {
        oGPA = 1.3;
    }
    else if (oAverage >= 65 && oAverage < 67) {
        oGPA = 1.0;
    }
    else {
        oGPA = 0.0;
    }

    std::cout << "Your current class grade average is "; std::cout << oAverage; std::cout << " out of 100"; std::cout << std::endl;
    std::cout << "Your overall GPA is a "; std::cout << oGPA; std::cout << std::endl;
    std::cout << "Would you like to know any of your class grades? Y/N: ";
    std::cin >> YN;

    while (YN != 'N' && YN != 'n' && YN != 'Y' && YN != 'y') {
        std::cout << "That is not an option, please try again: "; 
        std::cin >> YN;
    } 
    
    while (YN == 'Y' || YN == 'y') {
        std::cout << "What grade would you like to know? You had "; std::cout << nClasses; std::cout << " classes, which would you like to check: ";
        std::cin >> cGrade;
        std::cout << "Your grade for class "; std::cout << cGrade; std::cout << " is "; std::cout << ClassGrade[cGrade - 1]; std::cout << std::endl;
        std::cout << "Would you like to know any other of your class grades? Y/N: ";
        std::cin >> YN;
    }
    if (YN == 'N' || YN == 'n') {
            return 1;
        }


    return 0;
}