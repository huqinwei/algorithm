class Solution {
public:
    bool Find(vector<vector<int > > array,int target) {
        vector<vector<int>>::iterator it1;

        vector<int>::iterator it2;
       // for(it1 = array.begin();it1 != array.end();it1++)
        for(int i = 0; i < array.size(); i++)
        {
                //for(it2 = *it1->begin();it2 !=*it1->end();it2++)
                for(it2 = array[i].begin();it2 != array[i].end();it2++)
                        if(*it2 == target)
                                return true;

        }
        return false;
    }
};
