// 3. User defined to user defined

// i. Conversion routine in source
// object

// ii. Conversion routine in
// destination object


#include <iostream>
using namespace std;

class Matrix
{
private:
    int row, col;
    int **matrix;

public:
    Matrix(int row = 0, int col = 0) : row(row), col(col)
    {
        matrix = new int *[row];
        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
        }
    }

    void read()
    {
        cout << "Enter the elements of the matrix: " << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
    }

    void show() const
    {
        cout << "Matrix: " << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix operator+(const Matrix &m) const
    {
        Matrix temp(row, col);
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                temp.matrix[i][j] = matrix[i][j] + m.matrix[i][j];
            }
        }
        return temp;
    }

    Matrix operator*(const Matrix &m) const
    {
        Matrix temp(row, col);
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                temp.matrix[i][j] = matrix[i][j] * m.matrix[i][j];
            }
        }
        return temp;
    }

    operator int() const
    {
        int sum = 0;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                sum += matrix[i][j];
            }
        }
        return sum;
    }
};

class Complex
{
private:
    int real, imag;

public:
    Complex(int real = 0, int imag = 0) : real(real), imag(imag) {}

    void show() const
    {
        cout << "Complex number: " << real << " + " << imag << "i" << endl;
    }

    operator int() const
    {
        return real;
    }

    operator Matrix() const
    {
        Matrix temp(1, 1);
        temp.read();
        return temp;
    }
};

int main()
{
    Matrix m1(2, 2), m2(2, 2), m3;
    Complex c1(2, 3), c2(3, 4);

    m1.read();
    m2.read();

    m3 = m1 + m2;
    m3.show();

    m3 = m1 * m2;
    m3.show();

    int sum = m1;
    cout << "Sum of elements of m1: " << sum << endl;

    int real = c1;
    cout << "Real part of c1: " << real << endl;

    Matrix m4 = c2;
    m4.show();

    return 0;
}
