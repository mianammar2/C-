#include <iostream>
using namespace std;

class Ammar {
public:
    Ammar(int rows, int cols) {
        this->rows = rows;
        this->cols = cols;
        data = new int*[rows];
        for (int i = 0; i < rows; i++) {
            data[i] = new int[cols];
            for (int j = 0; j < cols; j++) {
                data[i][j] = 0;
            }
        }
    }

    ~Ammar() {
        for (int i = 0; i < rows; i++) {
            delete[] data[i];
        }
        delete[] data;
    }

    void input() {
        cout << "Enter " << rows << "x" << cols << " matrix elements:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> data[i][j];
            }
        }
    }

    void print() {
        cout << "Matrix:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << data[i][j] << "\t";
            }
            cout << endl;
        }
    }

    void invert() {
        Ammar inv(cols, rows);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                inv.data[j][i] = data[i][j];
            }
        }
        cout << "Inverse Matrix:" << endl;
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

    Ammar mat(rows, cols);
    mat.input();
    mat.print();
    mat.invert();

    return 0;
}
