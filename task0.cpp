#include<iostream>
using namespace std;
int main()
{
    int first[1000], second[1000], i, n;

    cout << "Enter the number of elements in the array ";
        cin >> n;

    cout << "Enter elements of first array"<<endl;

    for (i = 0; i < n; i++)
        cin >> first[i];

    cout << "Enter elements of second array"<<endl;

    for (i = 0; i < n; i++)
        cin >> second[i];
    return 0;
}