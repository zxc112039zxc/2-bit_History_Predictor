#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int myPredict[4] = {0, 0, 0, 0};

string levels[4] = {"SN", "WN", "WT", "ST"};

int main()
{
    string inputStr;

    cout << "Enter input: ";
    cin >> inputStr;

    vector<char> inputArr(2,'N');

    for (size_t i = 0; i < inputStr.length(); i++)
    {
        inputArr.push_back(inputStr[i]);
    }

    int position = 2;
    while (position < inputArr.size())
    {
        int predictPos = 0;
        char predict = ' ';
        if (inputArr[position - 1] == 'T')
        {
            predictPos += 1;
        }
        if (inputArr[position - 2] == 'T')
        {
            predictPos += 2;
        }

        if (myPredict[predictPos] == 0 || myPredict[predictPos] == 1)
        {
            predict = 'N';
        }
        else
        {
            predict = 'T';
        }

        cout << "               State     Pred     Outcome     Correct" << endl;
        cout << "(" << bitset<2>(predictPos) << ", " << levels[myPredict[0]] << ", " << levels[myPredict[1]] << ", " << levels[myPredict[2]] << ", " << levels[myPredict[3]] << ")";
        cout << setw(9) << predict << setw(12) << inputArr[position];
        if (predict == inputArr[position])
        {
            cout << setw(12) << "YES" << endl;
        }
        else
        {
            cout << setw(12) << "No" << endl;
        }

        cout << "-----------------------------------------------------" << endl;

        if (inputArr[position] == 'T' && myPredict[predictPos] != 3)
        {
            myPredict[predictPos]++;
        }
        if (inputArr[position] == 'N' && myPredict[predictPos] != 0)
        {
            myPredict[predictPos]--;
        }

        position++;
    }
}