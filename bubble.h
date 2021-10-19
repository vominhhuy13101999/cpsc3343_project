#ifndef __BUBBLE_H__
#define __BUBBLE_H__
#include <functional>
#include <string>
#include <vector>

class bubble
{
    public:
        
        // A function to implement bubble sort
        bubble();
        void Sort(int arr[], int n)    ;              //sort int array
        void swap(int a, int b);               //swap element
        void print(int* arr, int size);
};

#endif