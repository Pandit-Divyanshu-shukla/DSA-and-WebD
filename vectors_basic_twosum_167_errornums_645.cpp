#include <iostream>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;
    int st=0, end=nums.size()-1;
    int currSum=INT8_MIN;

    while(st<end){
        currSum=nums[st]+nums[end]; 
        cout<<currSum<<endl;
        if(currSum==target){
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
        else if(currSum>target ){
            end--;
        }
        else{
            st++;
        }
    }
    return ans;
}
vector<int> findErrorNums(vector<int>& nums) {
    int n=nums.size();
    vector<int> ans(2,0);
    vector<bool> isPresent(n+1,false);

    for(int i=0; i<n; i++){
        if(isPresent[nums[i]]){
            ans[0]=nums[i]; 
        }
        isPresent[nums[i]]=true;
    }


    for(int i=1; i<n+1; i++){
        if(!isPresent[i]){
            ans[1]=i;
            return ans;
    }  
        }
    
    return ans;   
}
int* func(){
    int* ptr=new int;
    *ptr=1200;
    cout<<"ptr points to: "<<*ptr<<endl;

    return ptr;
}
int main()
{
    vector<int> nums={1,1,3};

    vector<int> res=findErrorNums(nums);
    cout<<"[";
    for(int i: res){
        cout<<i<<" ";
    }
    cout<<"]";
    
    // 2D input
    // int r,c,temp;
    // cout<<"Enter the number of rows: ";
    // cin>>r;
    // vector<vector<int>> matrix(r); // here we have to write the number of rows also
    // for(int i=0; i<r; i++){
    //     cout<<"Enter the number of columns for row "<<i+1<<": ";
    //     cin>>c;
    //     cout<<"Enter elements of row "<<i+1<<": ";
    //     for(int j=0; j<c; j++){
    //         cin>>temp;
    //         matrix[i].push_back(temp);
    //     }
    // }
    // // 2D output
   
    // for(int i=0; i<matrix.size(); i++){
    //     for(int j=0; j<matrix[i].size(); j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    

    // int target=7;
    // vector<int> ans=twoSum(nums,target);
    // // for(int i: ans){
    // //     cout<<i<<",";
    // // }s
    // cout<<"["<<ans[0]<<","<<ans[1]<<"]";

    // // vector<int> vec(8,-1);
    // // cout<<vec.size()<<endl;
    // // for(int i=0; i<8; i++){
    // //     cout<<vec[i];
    // // }
    // // cout<<endl;

    // // cout<<"size: "<<vec.size()<<endl; //8
    // // cout<<"Capacity: "<<vec.capacity()<<endl; //8
    
    // // vec.push_back(2);
    // // cout<<"size: "<<vec.size()<<endl; //9
    // // cout<<"Capacity: "<<vec.capacity()<<endl; //16

    // // vec.pop_back();
    // // cout<<"size: "<<vec.size()<<endl; //8
    // // cout<<"Capacity: "<<vec.capacity()<<endl; //16

    // // int *x =func();
    // // cout<<*x<<endl;

    // // int row, col;
    // // cout<<"Enter number of rows and col: ";
    // // cin>>row>>col;

    // // int* *matrix = new int* [row];
    // // for(int i=0;i<row; i++){
    // //     matrix[i]=new int [col];
    // // }

    // // // data store
    // // int y=1;
    // // for(int i=0; i<row; i++){
    // //     for(int j=0; j<col; j++){
    // //         matrix[i][j]=y;
    // //         cout<<matrix[i][j]<<"   ";
    // //         y++;
    // //     }
    // //     cout<<endl;
    // // }
    // // cout<<*(*(matrix+1)+2)<<" = "<<matrix[1][2]<<endl;
    return 0;
}
