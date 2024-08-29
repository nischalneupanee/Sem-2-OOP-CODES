//WAP for reading from disk file

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("file.txt");
    if(!fin)
    {
        cout<<"File not found!";
    }
    else
    {
        cout<<"File found!";
        char ch;
        while(!fin.eof())
        {
            fin.get(ch);
            cout<<ch;
        }
        fin.close();
    }
    return 0;
}