#include <bits/stdc++.h>
using namespace std;

int *dynamicArray(int num)
{
    int *integerArray = new int[num];

    for (int i = 0; i < num; i++)
    {
        /* code */
        cin >> integerArray[i];
    }

    return integerArray;
}

int main()
{
    int num;
    cin >> num;

    int *result = dynamicArray(num);

    for (int i = 0; i < num; i++)
    {
        /* code */
        cout << result[i] << " ";
    }

    return 0;
}