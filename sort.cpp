#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#include "bubble.h"


void bubble::Sort(int arr[],int n) {

//sort int array
    // int size=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j]<arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
    
}           
void bubble::swap(int a, int b){
    int c=a;
    a=b;
    b=c;
}              //swap element
void bubble::print(int* arr, int size){
    for (int i=0; i<size;i++){
        cout<<*(arr+i)<<endl;
    }
}