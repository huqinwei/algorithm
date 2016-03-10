#include<iostream>
#include<string.h>
using namespace std;
class Solution {
public:
        void replaceSpace(char *str,int length) {
                char * p = str;
                while(*p != '\0')
                {
                        if(*p == ' ')
                        {
                                memmove(p+3,p+1,strlen(str) - (p - str));
                                *p++ = '%';
                                *p++ = '2';
                                *p++ = '0';
                                continue;
                        }
                        p++;
                }
        }
};
int main(){
        char array[30] = "hello world";
        Solution s1;
        cout << array << endl;
        s1.replaceSpace(array,20);
        cout << array << endl;

}
