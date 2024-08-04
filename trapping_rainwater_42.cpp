#include <bits/stdc++.h>
using namespace std;
int trap(vector<int>& height) {
    int h=height.size();
    int maxwater=0;
    vector<int> leftmax(20000,0);
    leftmax[0]=INT_MIN;

    vector<int> rightmax(20000,0);
    rightmax[h-1]=INT_MIN;
    for(int i=1; i<h; i++){
        leftmax[i]=max(height[i-1],leftmax[i-1]);
    }

    for(int i=h-2; i>=0; i--){
        rightmax[i]=max(height[i+1],rightmax[i+1]);
    }
    int currwater=0;

    for(int i=1; i<h-1; i++){
        currwater=min(leftmax[i],rightmax[i])-height[i];
        if(currwater>0){
            maxwater+=currwater;
        }
    }
    return maxwater;
}
int main()
{
    vector<int>height = {4,2,0,3,2,5};
    cout<<trap(height);
    return 0;
}