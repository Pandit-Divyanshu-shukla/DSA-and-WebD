#include <iostream>
#include <vector>
#include <string>
using namespace std;
int countSeniors(vector<string>& details) {
    int count=0;
        for(int i=0; i<details.size(); i++){
            if(((details[i][11]-'0')*10 + (details[i][12]-'0'))>60){
                count++;
        }
    }
    return count;
}
int main()
{
    vector <string> details={"1313579440F2036","2921522980M5644"};
    cout<<countSeniors(details);

    return 0;
}
