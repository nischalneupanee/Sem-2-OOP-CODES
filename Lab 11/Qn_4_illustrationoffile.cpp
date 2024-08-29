//Illustration of File I/O with fstream class

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("file.txt", ios::out);
    if(!file)
    {
        cout<<"File not found!";
    }
    else
    {
        cout << "File found!";
        string text;
        cout << "Enter the text: ";
        getline(cin, text);
        file << text;
        file.close();
    }
    file.open("file.txt", ios::in);
    if(!file)
    {
        cout<<"File not found!";
    }

    else
    {
        cout<<"File found!";
        char ch;
        while(!file.eof())
        {
            file.get(ch);
            cout<<ch;
        }
        file.close();
    }
    return 0;
}
