#include <iostream> 
#include "student.h"
using namespace std;

student::student(char *nm, int id, int y)
{
    student_id = id;
    year = y;
    strcpy(name, nm);
}
void student::print()
{
    cout << "\n"
         << name << ", " << student_id << ", " << year << endl;
}