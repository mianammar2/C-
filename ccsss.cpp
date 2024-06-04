#include <iostream>
using namespace std;

class Matrix {
public:
    Matrix(int rows, int cols) {
        this->rows = rows;
        this->cols = cols;
       
        data = new int*[rows];
        for (int i = 0; i < rows; i++) {
            data[i] = new int[cols];
        }
    }
   
    ~Matrix() {
        
        for (int i = 0; i < rows; i++) {
            delete[] data[i];
        }
        delete[] data;
    }
   
    void input() {
        cout << "Enter " << rows << "x" << cols << "=" << rows*cols << " values: ";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> data[i][j];
            }
        }
    }
   
    void print() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
   
    void invert() {
       
        Matrix inv(cols, rows);
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                inv.data[j][i] = data[i][j];
            }
        }
       
        inv.print();
    }
   
private:
    int rows;
    int cols;
    int **data;
};

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
   
    Matrix mat(rows, cols);
    mat.input();
    cout << endl << "Entered Matrix is" << endl;
    mat.print();
   
    cout << endl << "Inverse is" << endl;
    mat.invert();
   
    return 0;
}