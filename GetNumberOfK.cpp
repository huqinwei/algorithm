#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
    int GetNumberOfK(vector<int> data,int k) {
        int counter = 0;
        vector<int>::iterator it;
        for(it = data.begin();it != data.end();it++)
                if(*it == k)
                        counter++;
        return counter;
    }
};
int main(){
        vector<int> vec;
        vec.push_back(1);
        vec.push_back(2);
        vec.push_back(2);
        vec.push_back(3);

        Solution s1;
        cout << s1.GetNumberOfK(vec,1)<<endl;
        cout << s1.GetNumberOfK(vec,2)<<endl;
        cout << s1.GetNumberOfK(vec,3)<<endl;
}
