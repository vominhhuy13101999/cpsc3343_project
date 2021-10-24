#include <bits/stdc++.h>
#include <iostream>
#include <ctime>
#include "sort.h"

using namespace std;



int main()
{
    int ar[30] = {322, 278, 644, 599, 928, 830, 517, 422, 302, 665, 375, 848, 502, 647, 447, 135, 813, 699, 169, 802, 152, 730, 415, 472, 973, 775, 681, 551, 557, 485};
    int n = sizeof(ar)/sizeof(ar[0]);
    static int *l1=(int*)malloc((2)*sizeof(int));
    static int *r1=(int*)malloc((3)*sizeof(int));

    // int r1[3]={422, 517, 830};
    // print(l1,2);
    // print(r1,3);

    // print(&ar[0],n);
    // cout<<&ar[0]<<endl;
    cout<<"----------------------------------------------"<<endl;
    // int* store=merge_sort(ar,30);
    // int *n1=merge(l1,2,r1,3);
    cout<<"----------------------------------------------"<<endl;

    // print(store,30);
    shell_sort(&ar[0],n);
    print(ar,n);
    
    cout<<"----------------------------------------------"<<endl;

    
    return 0;
}