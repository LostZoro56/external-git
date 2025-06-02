#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

void maxSumOfNonAdjacent(std::vector<int>&arr,int i, int sum , int& maxSum){
    if(i>= arr.size()){
        maxSum = std::max(maxSum , sum);
        return;
    }

    maxSumOfNonAdjacent(arr,i+2,sum+arr[i],maxSum);
    maxSumOfNonAdjacent(arr,i+1,sum,maxSum);
}

int main(){
    std::vector<int>arr;
    arr.resize(5);
    arr = {2,1,4,6,7};
    int maxSum = INT_MIN;

    maxSumOfNonAdjacent(arr,0,0,maxSum);
    std::cout<<maxSum;
}