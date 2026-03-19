// In a perfect sequence without missing numbers the i'th number should be i+1, if any number is missing then arr[i] becomes greater then i+1 and the number of missing elements before arr[i] is arr[i]-(i+1)

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low=0, high=arr.size()-1;

        while(low<=high){
            int mid=low+(high-low)/2;

            int missing=arr[mid]-(mid+1);

            if(missing<k){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return low+k;
    }
};

