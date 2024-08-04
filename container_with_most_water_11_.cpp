#include <bits/stdc++.h>
using namespace std;
int maxArea(vector<int> height){
    int st=0, end=height.size()-1;
    int area=0;
    while(st<end){
        area=max(area,min(height[st],height[end])*(end-st));
        if(height[st]<height[end]){
            st++;
        }
        else{
            end--;
        }
    }
    return area;
}
int main()
{
    vector<int> height={1,8,6,2,5,4,8,3,7};
    cout<<maxArea(height);
    return 0;
}