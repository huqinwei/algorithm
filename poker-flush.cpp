class Solution {
public:
        bool IsContinuous( vector<int> numbers ) {
				if(numbers.size() < 5)
                    return false;
                vector<int>::iterator it;
                int min = 14;//超过最大
                int max = 0;//超过最小
                int array[14] = {0};//每个牌一个计数器
                for(it = numbers.begin();it != numbers.end();it++)
                {
                        array[*it]++;//计数器加1,*it刚好是指定位置
                        if(*it != 0)//0和普通数字分开，不然无法算差距
                        {
                                if(*it < min)
                                        min = *it;
                                if(*it > max)
                                        max = *it;                        
                        }
                        if(*it != 0 && array[*it] > 1)//只有0能重复
                                return false;
                        //最后可以检查一下非法输入，如果有必要
                }

                if(max - min > 4)
                        return false;
                if(max - min <  4 - array[0])
                        return true;
                cout <<"p"<<endl;
                return true;

        }

};
int main()
{
        Solution s1;
        vector<int> vec;
        vec.push_back(7);
        vec.push_back(5);
        vec.push_back(9);
        vec.push_back(0);
        vec.push_back(0);
        cout << "result: " << s1.IsContinuous(vec) << endl;
        printf("result:%d\n",s1.IsContinuous(vec));
        cout << true << endl;


}
