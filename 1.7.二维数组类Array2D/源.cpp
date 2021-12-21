#include<iostream>
using namespace std;

class Array2D {
private:
    int rows;
    double A[100][8] = {};

public:
    
    Array2D(int rows) {
        this->rows = rows;
    }
    int getRows() {
        return rows;
    }
    int getColumns() {
        return 8;
    }
    void setElem(int i, int j, double n) {
        A[i][j] = n;
    }
    double getMaxOfRow(int row) {
        double Max;
        Max = A[row][0];
        for (int i = 0; i < 8; i++)
        {
            if (Max < A[row][i]||Max== A[row][i])
            {
                Max = A[row][i];
            }         
        }
        return Max;
    }

    double getMinOfRow(int row) {
        double Min;
        Min = A[row][0];
        for (int i = 0; i < 8; i++)
        {
            if (Min >A[row][i])
            {
                Min = A[row][i];
            }           
        }
        return Min;
    }
    double getAvgOfRow(int row) {
        double Avg = 0;
        for (int i = 0; i < 8; i++)
        {
            Avg += A[row][i];
        }
        return Avg / 8;
    }
    double getMaxOfArray() {
        double Max = A[0][0];
        for (int i = 0; i < rows; i++)
        {
            if (Max < getMaxOfRow(i))
            {
                Max = getMaxOfRow(i);
            }
        }
        return Max;
    }
    double getMinOfArray() {
        double Min = A[0][0];
        for (int i = 0; i < rows; i++)
        {
            if (Min >getMinOfRow(i))
            {
                Min = getMinOfRow(i);
            }
        }
        return Min;
    }
    double getAvgOfArray()
    {
        double sum=0;
        for (int i=0; i < rows; i++)
        {
            sum += getAvgOfRow(i);
        }
        return sum /rows;
    }
    ~Array2D() {
        cout << "释放了一个"<<rows<<"行8列的数组";
        /*delete A;*/
    }
};

int main() {
    int r;
    double n;
    cin >> r;
    Array2D arr(r);
    int i, j;
    for (i = 0; i < r; i++)
        for (j = 0; j < 8; j++) {
            cin >> n;
            arr.setElem(i, j, n);
        }
    cout << arr.getRows() << " " << arr.getColumns() << endl;
    cout << arr.getMaxOfRow(0) << " " << arr.getMinOfRow(0) << " " << arr.getAvgOfRow(0) << endl;
    cout << arr.getMaxOfRow(r - 1) << " " << arr.getMinOfRow(r - 1) << " " << arr.getAvgOfRow(r - 1) << endl;
    cout << arr.getMaxOfArray() << " " << arr.getMinOfArray() << " " << arr.getAvgOfArray() << endl;
    return 0;
}