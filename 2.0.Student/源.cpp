#include<iostream>
using namespace std;

class Student {
private:
    string Name;
    long ID;
    int Age;
    string Obj;
public:
    static long NUM;
   
    Student() {
        Name = "Mike";
        ID = NUM;
        Obj = "Math";
        Age = 18;
        NUM += 1;
    }
    Student(string name, string obj,int age){
        Name = name;
        Age = age;
        ID = NUM++;
        Obj = obj;
    }

    Student(const Student& student) {
        Name = student.Name;
        ID = NUM++;
        Obj = student.Obj;
        Age = student.Age;
    }

    void showInfo() {
        cout << Name<< " "<< ID << " "<< Obj<< " "<< Age<< endl;
    }

    ~Student() {

    }
};
long Student::NUM = 20200001;

int main() {
    Student s1;
    s1.showInfo();
    Student s2("Tom", "Computer", 19);
    s2.showInfo();
    Student s3(s1);
    s3.showInfo();
    return 0;
}