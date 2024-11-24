#include <iostream>
#include <Windows.h>
#include <string>
#include <string.h>
#include <fstream>
#include<map>
using namespace std;

string rus = "russian.txt";
string eng = "english.txt";
string dic = "dictionary.txt";


int main()
{
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);
    map<string, string> p;
    string line;
    string rusline;
    fstream in(dic);
    if (in.is_open())
    {
        while (getline(in, line, ';')) {
            getline(in, rusline);
            p.insert(pair<string, string>(line, rusline));
        }
    }
    in.close();
    fstream out(rus, ios::app);
    fstream in(eng);
    if (out.is_open()&& in.is_open())
    {
        while (getline(in,line,';'))
        {
            out << p[line] << endl;
        }
        out.close();
        in.close();
    }
}
