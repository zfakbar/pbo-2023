#ifndef GRAD_STUDENT_H
#define GRAD_STUDENT_H
// some declarations in
// the header file.
#include "student.h"

using namespace std;
class grad_student : public student
{
public:
    grad_student(char *nm, int id, int y, char *d, char *th);
    void print();

private:
    char dept[10];
    char thesis[80];
};

#endif