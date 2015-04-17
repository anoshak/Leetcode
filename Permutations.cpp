class Solution {
public:
    vector<vector<int> > permute(vector<int> &num) {
        vector<vector<int> > result;
        if(num.size()==0)
            return result;
        if(num.size()==1)
        {
            vector<int> t;
            t.push_back(num[0]);
            result.push_back(t);
            return result;
        }
        int tmp = num.back();
        num.pop_back();
        vector<vector<int> > temp = permute(num);
        vector<int> t;
        vector<int>::iterator it;
        for(int i=0;i<temp.size();i++)
        {
            t = temp[i];
            for(int j=0;j<t.size();j++)
            {
                vector<int> t2 = t;
                it = t2.begin();
                t2.insert(it+j,tmp);
                result.push_back(t2);
            }
            t.push_back(tmp);
            result.push_back(t);
        }
        return result;
    }
};