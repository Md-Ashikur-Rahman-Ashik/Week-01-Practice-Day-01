#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arraySize;
    cin >> arraySize;

    int integerArray[arraySize];
    for (int i = 0; i < arraySize; i++)
    {
        /* code */
        cin >> integerArray[i];
    }

    int j = arraySize - 1;

    for (int i = 0; i < arraySize; i++)
    {
        /* code */
        if (i < j)
        {
            swap(integerArray[i], integerArray[j]);
        }

        j--;
    }

    for (int i = 0; i < arraySize; i++)
    {
        /* code */
        cout << integerArray[i] << " ";
    }

    return 0;
}