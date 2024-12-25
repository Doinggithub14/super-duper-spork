#include <iostream>
using namespace std;
class Student{
    int rollno;
    int marks;
    public:
    void getdata(){
        cout<<"enter roll number:";
        cin>>rollno;
        cout<<"enter marks:";
        cin>>marks;
        
    }
    void displaydata(){
        cout<<"roll entered is :"<<rollno<<endl;
        cout<<"marks entered is :"<<marks;
    }
};
int main(){
    Student s;
    s.getdata();
    s.displaydata;
    return 0;
}