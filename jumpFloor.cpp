class Solution {
        cout << "number:"<<number<<endl;
        long long  iTotal = 0;//int不够用
        int x,y,z;
        {
                //如果能除开
                        //计算此种情况的排列组合数
                        y = (number - x) / 2;
                        z = x + y;
                        cout << x << " " << y << " " << z << endl;
                        //计算Cxz或者Cyz
                        if(x == z || x == 0)
                        {
                                iTotal += 1;//加到总数
                        }
                        else
                        {
                                cout << "attention! x is " << x << endl;
                                cout << "before: z is " << z << endl;
                                long long  iResult = z;//int不够长
                                for(int i = 1;i < x;i++)//x为1时直接加上z
                                {
                                        cout << "i:"<<i << "  iResult:"<<iResult<<endl;
                                        iResult = iResult * (z - (i ));
                                        cout << "!!!! iResult is " << iResult << endl;
                                        if(iResult % (i + 1))
                                        {
                                                return 0;
                                        }
                                        iResult = iResult / (i + 1);//多虑了，先除也不会除不开，后除数太大，超过64位表示
，超了
                                        cout << "!!!! iResult is " << iResult << endl;
                                }
                                cout << "middle: iResult is " << iResult << endl;
                //              for(int i = 1;i < x;i++)//x可以为0
                //              {
                //                      iResult = iResult / (i + 1);//最后再除，是错误的
                //                      cout << "!!!! iResult is " << iResult << endl;
                //              }

                                cout << "after: iResult is " << iResult << endl;
                                iTotal += iResult;//加到总数
                        }
                        cout << "total = "<<iTotal<<endl;
                }
        }
        //汇总排列组合
        return iTotal;
    }
};

int main()
{
        Solution s1;
        cout << s1.jumpFloor(1) << endl;
        cout << s1.jumpFloor(2) << endl;
        cout << s1.jumpFloor(3) << endl;
        cout << s1.jumpFloor(4) << endl;
        cout << s1.jumpFloor(5) << endl;
        cout << s1.jumpFloor(29) << endl;

}
