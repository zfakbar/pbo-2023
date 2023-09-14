#include <iostream>
#include "grad_student.h"
using namespace std;

grad_student::grad_student(char *nm,
                           int id, int y, char *d, char *th) : student(nm, id, y)
{
    strcpy(dept, d);
    strcpy(thesis, th);
}
void grad_student::print()
{

    student::print();
    cout << dept << ", " << thesis << endl;
}
