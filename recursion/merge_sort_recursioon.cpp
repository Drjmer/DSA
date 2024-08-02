#include <bits/stdc++.h>
using namespace std;
void merge(int *arr, int s, int e)
{

    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *first = new int[len1];
    int *second = new int[len2];

    // copyiing inital or original array in two new arays
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }
    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }
    int index1 = 0;
    int index2 = 0;
    int k = s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[k++] = first[index1++];
        }
        else
        {
            arr[k++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[k++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[k++] = second[index2++];
    }
}
void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
        return; // base case
    int mid = s + (e - s) / 2;
    // left part ko sort kar
    mergeSort(arr, s, mid);

    // right part ko sort kar
    mergeSort(arr, mid + 1, e);

    // merge both the arrays
    merge(arr, s, e);
}
int main()
{
    int arr[10] = {31, 143, 34, 1, 23, 45, 34, 55, 45, 67};
    mergeSort(arr, 0, 10);
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}