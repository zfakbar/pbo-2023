#include <iostream> // for cout
#include "student.h"
#include "student.cpp"

#include "grad_student.h"
#include "grad_student.cpp"

using namespace std;

// class student
// {
// private:
//     int student_id;
//     int year;
//     char name[30];

// public:
//     student(char *nm, int id, int y);
//     void print();
//     int year_group()
//     {
//         return year;
//     }
// };

// student::student(char *nm, int id, int y)
// {
//     student_id = id;
//     year = y;
//     strcpy(name, nm);
// }
// void student::print()
// {
//     cout << "\n"
//          << name << ", " << student_id << ", " << year << endl;
// }

// class grad_student : public student
// {
// public:
//     grad_student(char *nm, int id, int y, char *d, char *th);
//     void print();

// private:
//     char dept[10];
//     char thesis[80];
// };

// grad_student::grad_student(char *nm,
//                            int id, int y, char *d, char *th) : student(nm, id, y)
// {
//     strcpy(dept, d);
//     strcpy(thesis, th);
// }
// void grad_student::print()
// {

//     student::print();
//     cout << dept << ", " << thesis << endl;
// }

int main()
{
    student s1("Jane Doe", 100, 1);
    grad_student gs1("John Smith", 200, 4, "Pharmacy", "Retail Thesis");
    cout << "Student classes example:\n";
    cout << "\n Student s1:";
    s1.print();
    cout << "Year " << s1.year_group() << endl;

    cout << "\n Grad student gs1:";
    gs1.print();
    cout << "Year " << gs1.year_group() << endl;

    student *ps;
    grad_student *pgs;
    ps = &s1;
    cout << "\n ps, pointing to s1:";
    ps->print();
    ps = &gs1;
    cout << "\n ps, pointing to gs1:";
    ps->print();
    pgs = &gs1;
    cout << "\n pgs, pointing to gs1:";
    pgs->print();
    return 0;
}