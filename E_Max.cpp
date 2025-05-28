#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arraySize, maxNumber = -1000000000;
    cin >> arraySize;

    int integerArray[arraySize];
    for (int i = 0; i < arraySize; i++)
    {
        /* code */
        cin >> integerArray[i];
    }

    for (int i = 0; i < arraySize; i++)
    {
        /* code */
        if(integerArray[i] > maxNumber){
            maxNumber = integerArray[i];
        }
    }
    
    cout << maxNumber;
    

    return 0;
}