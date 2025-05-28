#include <bits/stdc++.h>
using namespace std;

int main()
{
    char numOrCharacter;
    cin >> numOrCharacter;

    int anyNumber = numOrCharacter;

    if (anyNumber >= 48 && anyNumber <= 57)
    {
        cout << "IS DIGIT";
    }
    else if (anyNumber >= 65 && anyNumber <= 90)
    {
        cout << "ALPHA" << endl
             << "IS CAPITAL";
    }
    else if (anyNumber >= 97 && anyNumber <= 122)
    {
        cout << "ALPHA" << endl
             << "IS SMALL";
    }

    return 0;
}