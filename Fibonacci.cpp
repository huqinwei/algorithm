#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
class Solution {
public:
    int Fibonacci(int n) {
        if(n <= 0)
                return 0;
        int i = 1;
        int j = 1;
        int temp = 0;
        if(n < 3)
                return j;
        while(n > 2)
        {
                temp = i+j;
                i = j;
                j = temp;
                n--;
        }
        return j;
    }
};
int main(){
        Solution s1;
        cout << s1.Fibonacci(1)<<endl;
        cout << s1.Fibonacci(2)<<endl;
        cout << s1.Fibonacci(3)<<endl;
        cout << s1.Fibonacci(4)<<endl;
        cout << s1.Fibonacci(5)<<endl;
        cout << s1.Fibonacci(6)<<endl;
}
