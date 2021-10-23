#include <bits/stdc++.h>
#include <iostream>

using namespace std;
void print(int *num,int n);
void swap(int *num,int i,int j) {
    print(num,j);
    int c=*(num+i);
    *(num+i)=*(num+j);
    *(num+j)=c;
    
} 
void bubble_sort(int *num,int n){
    cout<<"----------------------------------------------"<<endl;

    cout<<num<<endl;
    for (int i =0;i<n;i++){
        int count=0;
        for (int j=0; j<n-1;j++){

            if (*(num+j)>*(num+j+1)){
                

                swap(&(*num),j,j+1);
                count++;
            }
        }
        if (count==0)
            return;
        
    }
    
    return;
}
void selection_sort(int* num,int n){
    for (int i=0; i<n;i++){
        int key=*(num+i);
        int loc=i;
        for (int j=i+1; j<n;j++){
            if (*(num+j)<key){
                key=*(num+j);
                loc=j;

            }
        if (loc==i)
            continue;
        else
            swap(num,i,loc);
        }
    }
    return;
}
void print(int*num,int size){
    cout<<"[ ";
    for (int i = 0; i<size; i++){
        

        cout<<*(num+i)<<", ";
        }
    cout<<"]"<<endl;
}

int main()
{
    int arr[] = {322, 278, 644, 599, 928, 830, 517, 422, 302, 665, 375, 848, 502, 647, 447, 135, 813, 699, 169, 802, 152, 730, 415, 472, 973, 775, 681, 551, 557, 485};
    int n = sizeof(arr)/sizeof(arr[0]);


    print(&arr[0],n);
    cout<<&arr[0]<<endl;
    cout<<"----------------------------------------------"<<endl;
    bubble_sort(&arr[0],n);
    print(&arr[0],n);

    return 0;
}