#include <iostream>

using namespace std;

class Student {
    private:
    string name;
    int age;
    public:
    Student(string name,int age){
        this->name=name;
        this->age=age;  // using "this" to distinguish between class objective and input parameter
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
------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

class Student {
    private:
    string name;
    int age;
    public:
    Student(string n,int a){
        name=n;
        age=a;    // instead of using "this", using variable "n","a"
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
