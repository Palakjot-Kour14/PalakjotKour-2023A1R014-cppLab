#include <iostream>
using namespace std;
class course
{
private:
    string coursename, courseid;

public:
    void accept()
    {
        cout << "enter your course name \n ";
        cin >> coursename;

        cout << "enter your course id\n";
        cin >> courseid;
    }

    void display()
    {
        cout << "\n course name  is " << coursename << "\t  course id  is " << courseid;
    }
};

int main()
{
    string coursename, courseid;

    course obj[3];

    int i;
    for (i = 0; i < 3; i++)
    {
        obj[i].accept();
    }
    for (i = 0; i < 3; i++)
    {
        obj[i].display();
    }
