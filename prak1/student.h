#ifndef STUDENT_H
#define STUDENT_H
// some declarations in
// the header file.
class student
{
private:
    int student_id;
    int year;
    char name[30];

public:
    student(char *nm, int id, int y);
    void print();
    int year_group()
    {
        return year;
    }
};

#endif