//
// Created by botao on 16-12-17.
//

#include <algorithm>
#include <vector>
#include <math.h>
#include <iostream>
using namespace std;

/*
 * Adjust the subtree of node i to be a max heap
 */
int adjust_Heap(vector<int> &Nums, int i, int Length){
    int leftChild = 2*i + 1;
    int rightChild = 2*i + 2;

    int max = i;

    if (leftChild < Length && Nums[max] < Nums[leftChild]){
        max = leftChild;
    }

    if (rightChild < Length && Nums[max] < Nums[rightChild]){
        max = rightChild;
    }

    if (max != i){
        swap(Nums[max], Nums[i]);
        adjust_Heap(Nums, max, Length);
    }
}

int heapConstruct(vector<int> &Nums, int Length){
    for (int i = Length/2 - 1; i >= 0; --i){
        adjust_Heap(Nums, i, Length);
    }
}

int HeapSort(vector<int> &Nums, int Length){
    heapConstruct(Nums, Length);
    for(int i = Length - 1; i >= 0; --i){
        swap(Nums[0], Nums[i]);
        adjust_Heap(Nums, 0, i);
    }
}

int main(int argc, char* argv){
    vector<int> nums = {4,5,1,2,6,3,7,9,8};

    HeapSort(nums, nums.size());

    for(auto iter: nums){
        cout << iter << " ";
    }
    cout << endl;
}