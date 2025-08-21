#include <bits/stdc++.h>
using namespace std;
class Student {
    private:
    string name;
    int age;
    string gender;
    double gpa;
    public:
    Student(string name,int age, string gender, double gpa){
        this->name=name;
        this->age=age;
        this->gender=gender;
        this->gpa=gpa;

    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Gender: "<<gender<<endl;
        cout<<"GPA: "<<gpa<<endl;
        cout<<endl;

    }
};
int main (){
    Student s1("Ngo Tran Ngan Do", 19, "Male", 3.6);
    Student s2("Nguyen Xuan Toan",19, "Male", 3.6);
    Student s3("Huynh Le Anh Tuan", 19, "Male", 3.6);
    Student s4("Nguyen Cong Thanh",19, "Male", 3.6);
    s1.display();
    s2.display();
    s3.display();
    s4.display();
}   //add some student information to run class Student
