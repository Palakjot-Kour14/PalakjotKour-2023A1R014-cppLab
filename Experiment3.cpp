#include <iostream>
using namespace std;

class student
{

public:
    string StudentName;
    int rollnumber;
    float credits;
    float Marks;

public:
    student(string Name, int cred, float Mark, int rollnum)
    {
        StudentName = Name;
        rollnumber = rollnum;
        credits = cred;
        Marks = Mark;
    }
    void Display()
    {
        cout << "\nName = " << StudentName << "\t roll number " << rollnumber << "\t Marks are " << Marks << "credits are " << credits;
    }
};
void semester1(student sem1) // object as pass by value
{
    sem1.Marks = 400;
    cout << "\n Semester result is \n ";
    cout << " name is\t" << sem1.StudentName << "\t rollnum is " << sem1.rollnumber;
    cout << " marks is\t " << sem1.Marks << "\t credits is " << sem1.credits;
}
void semester2(student sem2) // object as pass by value
{
    sem2.Marks = 450;
    cout << "\n Semester result is \n ";
    cout << " name is\t " << sem2.StudentName << "\t rollnum is " << sem2.rollnumber;
    cout << " marks is\t " << sem2.Marks << "\t credits is " << sem2.credits;
}

void semester3(student sem3)
{
    sem3.Marks = 350;
    cout << "\n Semester result is \n ";
    cout << " name is\t " << sem3.StudentName << "\t rollnum is " << sem3.rollnumber;
    cout << " marks is\t " << sem3.Marks << "\t credits is \t " << sem3.credits;
}
/*void update(student &obj)
{
    cout << " \n Updated details are :- \t";
    obj.Marks = 200;
    obj.StudentName = "ABC";
    obj.Display();
}*/

void Delete(student *pobj)
{
    cout << "\n the deleted details are :- ";
    pobj->Marks = 0.0;
    pobj->StudentName = "";
    pobj->credits = 0.0;
    pobj->rollnumber = 0;
}

int main()
{
    student obj("XYZ", 101, 0, 5);
    obj.Display();
    semester1(obj);
    semester2(obj);
    semester3(obj);
     update(obj);
    Delete(&obj);
    obj.Display();
}
