#include<bits/stdc++.h>
using namespace std;
int fun(int arr[],int element,int size){
        int s= 0;
        int e = size -1;

        int mid = s + (e-s) / 2;
        while(s<=e){
            if(element>arr[mid]){
                s = mid +1;
            }
            else if(element<arr[mid]){
                e = mid -1;
            }
            else{
                return mid;
            }
            mid = s + (e-s)/2;
        }
    return 0;

}
int main(){
    int arr[7] = {1,5,7,8,12,15,20};
    int element = 12;
    int size = 7;
    cout<<fun(arr,element,size);
    // cout<<sizeof(arr)/sizeof(arr[0]);
    return 0;
}