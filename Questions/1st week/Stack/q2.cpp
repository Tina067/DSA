// Nearest Greater element to left
#include<bits/stdc++.h>
using namespace std;

//using stack
// void func(vector<int>&arr){
//     vector<int>ans;
//     stack<int>s;
//     int n = arr.size();
//     for(int i=0; i<n; i++){
//         if(s.size() == 0)
//         ans.push_back(-1);
//         else if(s.size()>0 && s.top() > arr[i])
//         ans.push_back(s.top());
//         else if(s.size()>0 && s.top()<=arr[i]){
//             while(s.size()>0 && s.top() <=arr[i])
//             s.pop();

//             if(s.size() == 0)
//             ans.push_back(-1);
//             else 
//             ans.push_back(s.top());
//         }
//         s.push(arr[i]);
//     }

//     for(auto i : ans){
//         cout<< i << " ";
//     }
// }

// for loop
void func(vector<int>&arr){
    int n = arr.size();
    vector<int>ans;
    for(int i=0; i<n; i++){
        int flag =0; 
        for(int j=i-1; j>=0; j--){
            if(arr[j]>arr[i]){
              ans.push_back(arr[j]);
              flag = 1;
              break;
            }
        }
        if(flag==0){
            ans.push_back(-1);
        }
    }
    for(auto i : ans){
        cout<< i << " ";
    }
}

int main(){
    vector<int>arr = {1, 3, 2, 4};
    func(arr);
    return 0;
}