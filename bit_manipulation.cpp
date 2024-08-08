#include <bits/stdc++.h>
#include <cmath>
using namespace std;
void OddorEven(int num){
    if(num & 1){
        cout<<"odd"<<endl;
    }
    else{
        cout<<"even"<<endl;
    }
}
void getIth(int num, int i){
    int bitmask=1<<i;
    if((num & bitmask)){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }
}
int setIth(int num, int i){
    int bitmask=1<<i;
    return (num | bitmask);
}
int clearIth(int num, int i){
    int bitmask=~(1<<i);
    return (num & bitmask);
}
bool power_2(int num){
    int bitmask=(num-1);
    if(!(num & (num-1))){
        return true;
    }
    return false;
}
int updateith(int num, int i, int val){
    num=num & ~(1<<i);
    num= num | (val<<i);
    return num;
}
void clearibits(int num, int i){
    int bitmask=(~0)<<i;
    num=num & bitmask;
    cout<<num;
}
int fastExponentiation(int x, int n){
    int ans=1;
    while(n){
        if(n & 1){
        ans=ans*x;;
    }
        x=x*x;
        n=n>>1;
    }
    return ans;
}
int hammingWeight(int n) {
        int count=0;
        int last=0;
        while(n){
            last= n & 1;
            if(!last){
                count=count+0;
            }
            else{
                count=count+1;
            }
            n=n >> 1;
        }
        return count;

    }
void clear_range_bits(int num, int i, int j){
    int a = (~0) << j+1;
    int b= (1 << i) - 1;
    int bitmask = a | b;
    //cout<<bitmask;
    num=num & bitmask;
    cout<<num<<endl;
}
int singleNumber(vector<int>& nums) {
    int ans=0;
    for(int i = 0; i<nums.size(); i++){
        ans=ans^nums[i];
    }
    return ans;
}
int xorBeauty(vector<int>& nums) {
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            ans=ans^nums[i];
        }
        return ans;
    }

long divide_bit(long dividend, long divisor){
    if(dividend==divisor){
        return 1;
    }
    if(divisor==1 || dividend==0){
        return dividend;
    }
    if(divisor==-1 ){
        if(dividend!=pow(-2,31)){
            return -dividend;
        }
        return pow(2,31)-1;
    }
    long ans=0;
    bool sign = true;
    if((dividend<=0 && divisor>0) || (dividend>=0 && divisor<0)){
        sign = false;
    }
    long n=abs(dividend);
    long d=abs(divisor);
    divisor=abs(divisor);
    while(n>=d){
        int count=0;
        while(n >= (d<<count+1)){
            count++;
        }
        ans+=1<<count;
        cout<<ans;
        n-=(d<<count);
    }
    if(!sign){
        return -ans;
    }
    return ans;
    
}
int main()
{
    // OddorEven(26);
    vector<int> nums={15,45,20,2,34,35,5,44,32,30};
    // cout<<hammingWeight(128)<<endl;
    // cout<<fastExponentiation(2,10)<<endl;
    // cout<<singleNumber(nums);
    // cout<<xorBeauty(nums<<endl;
    cout<<divide_bit(pow(-2,31),-1);
    //cout<<pow(-2,31)/-1;
    return 0;
}