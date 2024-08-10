// Write a program defining a class
// matrix with data element as two dimensional matrix , row and col as integer. Define the member
// functions read() to read the value of matrices and show() to display the matrix objects. Overload the
// operator + to add two matrix objects and also overload the operator * to multiply the two matrix objects. Input the two
// matrices object and compute sum and
// product of matrices using the operators
// and show the result.

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
        Matrix temp(row, m.col);
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < m.col; j++)
            {
                temp.matrix[i][j] = 0;
                for (int k = 0; k < col; k++)
                {
                    temp.matrix[i][j] += matrix[i][k] * m.matrix[k][j];
                }
            }
        }
        return temp;
    }
};

int main()
{
    Matrix m1(2, 2);
    Matrix m2(2, 2);

    m1.read();
    m2.read();

    Matrix sum = m1 + m2;
    Matrix product = m1 * m2;

    cout << "Sum: " << endl;
    sum.show();

    cout << "Product: " << endl;
    product.show();

    return 0;
}
