#include <bits/stdc++.h>
#include <iostream>
#include <ctime>
#include "sort.h"


using namespace std;
void print(int *num,int n);
void swap(int *num,int i,int j) {
    print(num,j);
    int c=*(num+i);
    *(num+i)=*(num+j);
    *(num+j)=c;
    
} 
void bubble_sort(int *num,int n){
    // cout<<"----------------------------------------------"<<endl;

    // cout<<num<<endl;
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
    int *arr=(int*)malloc((n1+n2)*sizeof(int));

    while (i<n1 && j<n2){
        if ((*(a1+i))<(*(a2+j))){
            arr[pos]=*(a1+i);
            pos++;
            i++;
            // cout<<i<<","<<j<<endl;

            // print(arr,n1+n2);
            }
        else if ((*(a1+i))>(*(a2+j))) {
            arr[pos]=*(a2+j);
            pos++;
            j++;
            // cout<<i<<","<<j<<endl;
            // print(arr,n1+n2);
            // // cout<<*(arr+pos-1)<<endl;
        }
        else{
            arr[pos]=*(a2+j);
            pos++;
            arr[pos]=*(a2+j);
            pos++;
            i++;
            j++;
            // cout<<i<<","<<j<<endl;

            // print(arr,n1+n2);

            // cout<<*(arr+pos-1)<<endl;
        }
    }
    // cout<<"----------------------------------------------"<<endl;

    // print(a1,n1);
    // print(a2,n2);
    // cout<<i<<","<<j<<endl;
    if (i<n1){
        for (int _=i;_<n1;_++){
            arr[pos]=*(a1+_);
            pos++;
        }}
    else{
        for (int _ =j;_<n2;_++){
            arr[pos]=*(a2+_);
            pos++;
        }
    }
    // print(arr,n1+n2);
    return arr;
}
int* merge_sort(int *num,int n){
    if (n==1){
        int *a=(int*)malloc(sizeof(int));
        a[0]=*num;
        return a;}
    else if (n==2){
        if (*num>*(num+1)){
            int*a=merge(num,1,num+1,1);
            return a;
            }
        int *a=(int*)malloc(2*sizeof(int));
        a[0]=*num;
        a[1]=*(num+1);
        return a;

    }
    else{
        int m= (n-n%2)/2;
        int* left=merge_sort(num,m);
        int* right=merge_sort(num+m,n-m);
        int*a69=merge(left,m,right,n-m);
        return a69;
    }

        
}
int partition(int* num,int n,int l,int h){
    int pivot=*(num+l);
    int i=l;
    int j=h;
    while(i<j){
        while (*(num+i)<=pivot && i<n-1){
            i++;
        }
        while (*(num+j)>pivot && j>0){
            j--;
        }
        if (i<j)
            swap(num,i,j);
    
    }
    swap(num,j,l);
    return j;
}
void quick_sort(int* num,int n,int l, int h){
    if (l<h){
        int index=partition(num,n,l,h);
        quick_sort(num,n,l,index);
        quick_sort(num,n,index+1,h);
    }
    return;
}

void shell_sort(int*num,int n){
    int gap=(n-n%2)/2;
    int i,j,key;
    while (gap>0){
        for (i=gap;i<n;i++){
            key=*(num+i);
            j=i-gap;
            while (*(num+j)>key && j>=0){
                *(num+j+gap)=*(num+j);
                j-=gap;
            }
            *(num+j+gap)=key;

        }
        gap=(gap-gap%2)/2;
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
void print(int** num,int size){
    cout<<"[ ";
    for (int i = 0; i<size; i++){
        

        cout<<*(num+i)<<", ";
        }
    cout<<"]"<<endl;
}

string generate_array(int size,int sample){
    int r;
    string name=to_string(size)+"__"+to_string(sample);
    ofstream myfile;
    string filename="array_"+name+".txt";
    myfile.open(filename);
    for (int _=0;_<sample;_++){
        for (int i =0; i<size;i++){
            r=rand() % INT_MAX; 
            myfile<<r<<" ";
        }
        myfile<<"\n ";
    }
    myfile.close();
    return filename;

}
void read_dataset(int **arr,string filename,int size,int sample){
    int element;
    ifstream myfile (filename);
    if (myfile.is_open())
    {   
        for( int _ =0;_<sample;_++) {
            int i = 0;
            // cout<<i<<endl;
            int* arr_i=*(arr+_);
            while (i<size) {
                myfile >> element;

                *(arr_i+(i++)) = element;
            }
            }
        myfile.close();
    }

    else cout << "Unable to open file";
}
int ** generate_carrier(int size,int sample){
    int** carrier=(int**)(malloc(sample*size*sizeof(int)));
    for(int i=0;i<sample;i++ ){
        carrier[i]=(int*) malloc(size*sizeof(int));
    }
    return carrier;
}
string generate_array_ascend(int size,int sample){
    int r;
    ofstream myfile;
    string name=to_string(size)+"__"+to_string(sample);

    string filename="Ascending_array_"+name+".txt";
    myfile.open(filename);
    int m=0;
    for (int _=0;_<sample;_++){
        for (int i =0; i<size;i++){
            r=rand() % 10000000+m; 
            myfile<<r<<" ";
            m=r;
        }
        myfile<<"\n ";
    }
    myfile.close();
    return filename;

}

string generate_array_descend(int size,int sample){
    int r;
    ofstream myfile;
    string name=to_string(size)+"__"+to_string(sample);

    string filename="Descending_array_"+name+".txt";
    myfile.open(filename);
    int m=INT_MAX;
    cout<<"______________________________________________"<<endl;

    for (int _=0;_<sample;_++){
        for (int i =0; i<size;i++){
            r=rand() % m;
            r=r+((r+m)-(r+m)%2)/2; 
            myfile<<r<<" ";
            m=r;
            cout<<m<<endl;
            if (m==0){
                cout<<"I told you so. Pre pare for error ...";
            }
        }
        myfile<<"\n ";
    }
    myfile.close();
    return filename;

}




























