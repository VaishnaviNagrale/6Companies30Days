#include<bits/stdc++.h>
using namespace std;

class Solution
{ public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        //Better - Hashing - TC:O(n),SC:O(n)
        int hash[n+1]={0};
        for(int i=0;i<n;i++){
            hash[arr[i]]++;
        }
        int repeating=-1,missing=-1;
        for(int i=1;i<=n;i++){
            if(hash[i]==2){
                repeating=i;
            }
            else if(hash[i]==0){
                missing=i;
            }
            else if(repeating!=-1 && missing!=-1){
                break;
            }
        }
        return {repeating,missing};
        
        //Brute Force - TC:O(n^2),SC:O(1)
        // int repeating=-1,missing=-1;
        // for(int i=1;i<=n;i++){
        //     int cnt=0;
        //     for(int j=0;j<n;j++){
        //         if(arr[j]==i){
        //             cnt++;
        //         }
        //     }
        //         if(cnt==2){
        //             repeating=i;
        //         }
        //         else if(cnt==0){
        //             missing=i;
        //         }
        //         else if(repeating!=-1 && missing!=-1){
        //             break;
        //         }
        // }
        // return {repeating,missing};
    }
};