#include <iostream>
using namespace std;

int main() {
    int arr[]={3,4,-2,5,8,20,-10,8};
    int n=8;

    int ans=0;
    int totalSum=0;

    for(int i=0;i<n;i++){
        totalSum+=arr[i];
    }

    int prefix=0;

    for(int i=0;i<n-1;i++){
        prefix+=arr[i];
        ans=totalSum-prefix;

        if(ans==prefix){
            cout<<"it is possible"<<endl;
            return 1;
        }
    }

    cout<<"not possible"<<endl;
    return 0;

    return 0;
}