#include <iostream> 
using namespace std;
class Father {
    int a;
public:
    Father(int a) :a(a) {
        cout << "Father Constructed " << a << endl;
    }
    void doSomething() {
        cout << "Hello Father" << endl;
    }
};

class Mother {
    int b;
public:
    Mother(int b) :b(b) {
        cout << "Mother Constructed " << b << endl;
    }
    void doSomething() {
        cout << "Hello Mother" << endl;
    }
};




class Son :public Mother, public Father {
private:
    int c, d, e;
    Father f;
    Mother m;
public:
    Son(int a, int b, int c, int d, int e) :Mother(a), Father(b), f(c), m(d) {
        this->c = c;
        this->d = d;
        this->e = e;
        cout << "Son Constructed" << " " << this->e << endl;
    }


    void doSomething() {
        f.doSomething();
        m.doSomething();
        cout << "Hello Son" << endl;

    }
};

int main() {
    Son son(1, 2, 3, 4, 5);
    son.doSomething();
    return 0;
}
