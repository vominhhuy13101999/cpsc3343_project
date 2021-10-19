#include <bits/stdc++.h>
using namespace std;
#include "bubble.h"

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble b;
    b.Sort(&arr,n);
    cout<<"Sorted array: \n";
    print(arr, n);
    return 0;
}