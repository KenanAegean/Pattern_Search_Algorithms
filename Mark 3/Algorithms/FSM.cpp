#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include <iomanip>

using namespace std;


double PCFreq = 0.0;
__int64 CounterStart = 0;
int currentLine=1;

void StartCounter()
{
    LARGE_INTEGER li;
    if(!QueryPerformanceFrequency(&li))
    cout << "QueryPerformanceFrequency failed!\n";

    PCFreq = double(li.QuadPart)/1000000.0;

    QueryPerformanceCounter(&li);
    CounterStart = li.QuadPart;
}
double GetCounter()
{
    LARGE_INTEGER li;
    QueryPerformanceCounter(&li);
    return double(li.QuadPart-CounterStart)/PCFreq;
}


void fsmSearch(string pattern ,string line )
{
    int currentState = 0;
    for(int x=0; x<line.size(); x++)
    {
        if(line[x] == pattern[currentState])
        {
            currentState++;
        }
        else if(currentState == pattern.size())
        {
            currentState = 0;
            //cout<<"line -> "<<currentLine<<". Pattern found at the index - > "<<x-pattern.size()<<endl;
        }
        else
        {
            currentState = 0;
        }
    }
    currentLine++;
}


int main()
{
    ifstream myFile("TheWitcherLastWish.txt");
    string line;
    StartCounter();
    if(myFile.is_open())
    {
        while(getline(myFile,line))
        {
            fsmSearch("The stranger followed in their tracks, sheathing his sword and dagger. As they passed the tables the remaining customers hid their faces from the dangerous stranger",line);
        }
    }
    else
    {
        cout<<"ERROR : while opening  'data.txt' "<<endl;
    }

    double var=GetCounter();
    cout<<var<<endl;



    return 0;
}
