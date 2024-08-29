//WAP for writing and reading of user input of file

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("file.txt");
    if(!fout)
    {
        cout<<"File not found!";
    }
    else
    {
        cout << "File found!";
        string text;
        cout << "Enter the text: ";
        getline(cin, text);
        fout << text;
        fout.close();
    }
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
