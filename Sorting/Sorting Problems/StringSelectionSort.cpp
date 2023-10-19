/*
Give an array of names of the fruits; you are supposed to sort it in
lexicographical order using the selection sort

Input: ["papaya", "lime", "watermelon", "apple", "mango", "kiwi"]
Output: ["apple", "kiwi", "lime", "mango", "papaya", "watermelon"]

Approach --> SELECTION SORT
*/

#include <bits/stdc++.h>
using namespace std;

void StringSelectionSort(char fruit[][60], int n)
{

    for (int i = 0; i < n - 1; i++)
    {

        // finding min element in unsorted array
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(fruit[minIndex],fruit[j])>0)
            {
                minIndex = j;
            }
        }

        // placing minimum element at the beginning
        if (i != minIndex)
        {
            swap(fruit[i], fruit[minIndex]);
        }
    }
    return;
}

int main()
{
    int n = 6;

    char fruit[][60] = {"papaya", "lime", "watermelon", "apple", "mango", "kiwi"};

    StringSelectionSort(fruit, 6);

    for (int i = 0; i < n; i++)
    {
        cout << fruit[i] << " ";
    }
    cout << endl;
    return 0;
}