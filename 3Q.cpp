#include<iostream>
using namespace std;
struct student
{
    string name;
    string rollno;
    int sem;

};
void print(student s){
    cout<<"Name:"<<s.name<<endl;
    cout<<"RollNo:"<<s.rollno<<endl;
    cout<<"Semester:"<<s.sem<<endl;
}

int main()
{
    student r;
    cout<<"Enter your name"<<endl;
    cin>>r.name;
    cout<<"Enter your rollno"<<endl;
    cin>>r.rollno;
    cout<<"Enter your sem(expects an int)"<<endl;
    cin>>r.sem;
    print(r);
    return 0;
}