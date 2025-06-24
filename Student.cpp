#01
#include <iostream>

using namespace std;

class Student {
public:
    string name;
    int age;

    void getInformation(){
        cin>>name;                       //only using 'public' objective
        cin>>age;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

int main() {
    Student s1;
    s1.getInformation();
    s1.display();
}




#02
#include <iostream>

using namespace std;

class Student {
    private:
    string name;
    int age;
    public:
    Student(string name, int age){
        this->name=name;
        this->age=age;                              //using 'private' objective to package 'name'. Using 'this' to reach to the element has the same name
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }

};

int main() {
    Student s1("Long", 24);
    Student s2("Kien", 29);
    s1.display();
    s2.display();
    return 0;
}





#03
#include <bits/stdc++.h>
using namespace std;
class Student {
    private:
    string name;
    int age;
    string gender;
    double gpa;
    public:
    Student(){

    }
    void display(){

    }
};
