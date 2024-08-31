//Nearst Smaller to Right
#include<bits/stdc++.h>
using namespace std;


//using for loop
void func(vector<int>&arr){
    int n = arr.size();
    vector<int>ans;
    stack<int>s;
    //using for loop
    // for(int i=0; i<n; i++){
    //     int flag =0;
    //     for(int j=i+1; j<n; j++){
    //         if(arr[j]<arr[i]){
    //             ans.push_back(arr[j]);
    //             flag = 1;
    //             break;
    //         }
    //     }
    //     if(flag==0){
    //         ans.push_back(-1);
    //     }
    // }


    // using stack
    for(int i = n-1; i>=0; i--){
        if(s.size() ==0)
        ans.push_back(-1);
        else if(s.size()>0 && s.top()<arr[i])
        ans.push_back(s.top());
        else if(s.size()>0 && s.top()>= arr[i]){
            while(s.size()>0 && s.top() >= arr[i])
            s.pop();

            if(s.size() == 0)
            ans.push_back(-1);
            else
            ans.push_back(s.top());
        }
        s.push(arr[i]);
    }

    reverse(ans.begin(), ans.end());

    for(auto i : ans){
        cout<< i <<" ";
    }
}

int main(){
    vector<int>arr = {4, 5, 2, 10, 8};
    func(arr);
    return 0;
}