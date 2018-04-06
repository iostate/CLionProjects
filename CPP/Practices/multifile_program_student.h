#ifndef CPP_MULTIFILE_PROGRAM_STUDENT_H
#define CPP_MULTIFILE_PROGRAM_STUDENT_H
#include <iostream>
#include <sstream>
using namespace std;

class student {

public:
    string name;
    double num_grade;
    char letter_grade;
    union {
        int old;
        string alphanumeric;
    };
    int year;
    void set_name(string);
    void set_num_grade(string);
    void set_year(int);
    void print(void);
    void set_id(string input);
    void set_values(string, string, string, int);
 /*   student ();*/
};


void student::print() {
    cout << "Student name: " << name;
    cout << "Numeric grade: " << num_grade;
}


void student::set_name(string input) {
    name = input;
}

void student::set_year(int input) {
    year = input;
}

void student::set_id(string input) {
    int temp;
    stringstream(input) >> temp;
    if (temp < 2010 ) {
        old = temp;
    } else if (temp >= 2010) {
        alphanumeric = input;
    }
}

/**
 * Convert from string to a double.
 * @param input
 */
void student::set_num_grade(string input) {
    double temp;
    stringstream(input) >> temp;
    num_grade = temp;
}

void student::set_values(string name, string numeric_grade, string id, int year) {
    set_name(name);
    set_num_grade(numeric_grade);
    set_id(id);
    set_year(year);
}

#endif //CPP_MULTIFILE_PROGRAM_STUDENT_H
