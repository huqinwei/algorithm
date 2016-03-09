//在数组中的冗余问题
//有一个数只出现一次，其他数都出现3次
//找出这个数字，时间复杂度O(n)
//在数组中的冗余问题
//有一个数只出现一次，其他数都出现3次
//找出这个数字，时间复杂度O(n)
#include<stdio.h>
int main()
{
        int i,j,result = 0;
        int array[] = {3,3,3,5,5,5,100,100,12,100,12,12,4};
        int bit[32] = {0};
        for(i = 0; i < sizeof(array) / sizeof(int); i++)
        {
                for(j = 0; j < 32; j++)
                {
                        int k = 0x1 << j;//做标记
                        if(array[i] & k)//与运算
                        {
                                bit[j]++;
                        }
                }
        }
        //除法取余,并转换成整型
        for(j = 0;j < 32;j++)
        {
                bit[j] = bit[j] % 3;
                if(bit[j] == 1)
                {
                        result |= 0x1 <<j;
                }
        }

        printf("result is %d\n",result);
        return 0;
}
