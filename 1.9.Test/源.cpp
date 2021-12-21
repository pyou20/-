#include <iostream>
using namespace std;

#include<iostream>
using namespace std;
class Test {
private:
    int x;
public:
    Test(int n) {
        x = 2 * n;
    }
    Test(const Test& X) {
        x = X.x;
    }
    void printInfo() {
        cout << x << endl;
    }
    void  printInfo() const {

        cout << x / 2 << endl;
    }

    void setX(int n) {
        x = 2 * n;
    }
};


int main() {
    int n;
    cin >> n;
    Test t1(n);
    t1.printInfo();
    const Test t2(n);
    t2.printInfo();
    t1.setX(n + 5);
    t1.printInfo();
    const Test& t3 = t1;
    t3.printInfo();
    return 0;
}