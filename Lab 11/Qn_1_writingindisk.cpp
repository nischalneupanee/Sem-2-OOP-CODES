//WAP for write to disk file

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("file.txt");
    if (!fout)
    {
        cout << "File not created!";
    }
    else
    {
        cout << "File created successfully!";
        fout << "Hello World!";
        fout.close();
    }
    return 0;
}