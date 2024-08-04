#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    for(int i=0; i<nums.size(); i++){
        int no=nums[i];
        int st=i+1, end=nums.size()-1;
        if(i>0 && nums[i]==nums[i-1]){
            continue;
        }
        while(st<end){
            int sum=nums[i]+nums[st]+nums[end];
            if(sum==0){
                vector<int> temp = {nums[i] , nums[st] , nums[end]};
                ans.push_back(temp);
                st++ ; end--;

                while(st<end && nums[st]==nums[st-1]){
                    st++;
                }

                while(st<end && nums[end]==nums[end+1]){
                    end--;
                }
            }
            else if(sum<0){
                st++;
            }
            else{
                end--;
            }
    }
}
return ans;
}
int main()
{
    vector<int>nums = {-2,0,0,2,2};
    vector<vector<int>> matrix=threeSum(nums);
    cout<<"[";
    for(int i=0; i<matrix.size(); i++){
        cout<<"[";
        for(int j=0; j<matrix[i].size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"]";
        cout<<",";
    }
    cout<<"]";
    return 0;
}