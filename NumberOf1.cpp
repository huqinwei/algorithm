class Solution {
public:
     int  NumberOf1(int n) {
         int counter = 0;
         while(n != 0)
         {
         	n = n & (n - 1);    
             counter++;
         }
         return counter;
     }
};
