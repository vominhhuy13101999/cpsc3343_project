#include <bits/stdc++.h>
#include <iostream>
#include <ctime>
#include "sort.h"
#include <iterator>
#include <algorithm>
#include <time.h>
#include <string>


using namespace std;



int main()
{   
    string input,name;
    int in;
    cout<<"Please choose type of test (n: normal,a:ascend,d:descend)(N/a/d): ";
    cin>>input;
    cout<<"Please choose size of test (15/30/70/130/250): ";
    cin>>in;
    string a="aAdD";




    if (in!=15 && in!=30 && in!=70 && in!=130 && in!=250 )
        in=15;
    if (input.compare(a.substr(0,1))==0 || input.compare(a.substr(1,1))==0){
        if (in ==250)
            name=test4();
        else
            name=test2(in*1000);
    }
    else if(input.compare(a.substr(2,1))==0 || input.compare(a.substr(3,1))==0){
        if (in ==250)
            name=test5();
        else
            name=test3(in*1000);}
    else
        name=test(in*1000);




        cout<<"Please check file: "<<name<<endl;







    
    return 0;
}
