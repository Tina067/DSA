//Stock Span Problem
#include<bits/stdc++.h>
using namespace std;

void func(vector<int>&arr){
    int n = arr.size();
    vector<int>ans;

    // Using for loop
    // for(int i=0; i<n; i++){
    //     int count = 1;
    //     for(int j=i-1; j>=0; j--){
    //         if(arr[j]>arr[i])
    //         break;
    //         count++;
    //     }
    //     ans.push_back(count);
    // }

    //Using Stack
    stack<int>s;
    for(int i=0; i<n; i++){
        if(s.size() == 0)
        ans.push_back(-1);
        else if(s.size()>0 && arr[s.top()]> arr[i])
        ans.push_back(s.top());
        else if(s.size() >0 && arr[s.top()] <= arr[i]){
            while(s.size()>0 && arr[s.top()] <= arr[i])
            s.pop();

            if(s.size() == 0)
            ans.push_back(-1);
            else 
            ans.push_back(s.top());
        }
        s.push(i);
    }
    for(int i=0; i<n; i++){
        ans[i] = i - ans[i];
    }

    for(auto i : ans){
        cout<<i << " ";
    }
}

int main(){
    vector<int>arr = {100, 80, 60, 70, 60, 75, 85};
    func(arr);
    return 0;
}