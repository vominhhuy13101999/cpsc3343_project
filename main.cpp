#include <bits/stdc++.h>
#include <iostream>
#include <ctime>

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
        
        }
        if (loc==i)
            continue;
        else
            swap(num,i,loc);
    }
    return;
}
void insertion_sort(int* num, int n){
    for (int i=1; i<n; i++){
        int j=i-1;
        int key=*(num+i);
        while (j>=0 && *(num+j)> key){
            *(num+j+1)=*(num+j);
            j--;

        }
        *(num+j+1)=key;
    }
    return;

}

int* merge(int *a1,int n1,int*a2,int n2){
    int i=0;
    int j=0;
    int pos=0;
    static int *arr=(int*)malloc((n1+n2)*sizeof(int));
    print(a1,n1);
    print(a2,n2);

    // srand( (unsigned)time( NULL ) );
    while (i<n1 & j<n2){
        if ((*(a1+i))<(*(a2+j))){
            *(arr+pos)=*(a1+i);
            pos++;
            i++;
            // cout<<*(arr+pos-1)<<endl;
            }
        else if ((*(a1+i))>(*(a2+j))) {
            *(arr+pos)=*(a2+j);
            pos++;
            j++;
            // cout<<*(arr+pos-1)<<endl;
        }
        else{
            *(arr+pos)=*(a2+j);
            pos++;
            *(arr+pos)=*(a2+j);
            pos++;
            i++;
            j++;
            // cout<<*(arr+pos-1)<<endl;
        }
    }

    if (i<n1){
        for (int _=i;_<n1;_++){
            *(arr+pos)=*(a1+_);
            pos++;
        }}
    else{
        for (int _ =j;_<n2;_++){
            *(arr+pos)=*(a2+_);
            pos++;
        }
    }
    print(arr,n1+n2);
    return arr;
}
pair<int*, int> merge_sort(int *num,int n){
    if (n==1)
        return make_pair(num,n);
    else if (n==2){
        if (*num>*(num+1)){
            swap(num,0,1);
            return make_pair(num,n);}
        return make_pair(num,n);

    }
    else{
        int m= (n-n%2)/2;
        pair<int*,int> left=merge_sort(num,m);
        pair<int*,int> right=merge_sort(num+m,n-m);
        int*a=merge(left.first,left.second,right.first,right.second);
        return make_pair(a,n);
    }

        
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
    int ar[30] = {322, 278, 644, 599, 928, 830, 517, 422, 302, 665, 375, 848, 502, 647, 447, 135, 813, 699, 169, 802, 152, 730, 415, 472, 973, 775, 681, 551, 557, 485};
    int n = sizeof(ar)/sizeof(ar[0]);
    

    print(&ar[0],n);
    cout<<&ar[0]<<endl;
    cout<<"----------------------------------------------"<<endl;
    pair<int*,int> store=merge_sort(&(ar[0]),30);
    cout<<"----------------------------------------------"<<endl;
    int n1 = sizeof(store);
    

    cout<<n1<<","<<store.first<<endl;

    cout<<"----------------------------------------------"<<endl;

    print(store.first,store.second);
    
    return 0;
}