class Solution {
public:
    void swap(vector<int> &num, int i, int j)
    {
        int temp = num[i];
        num[i] = num[j];
        num[j] = temp;
    }
    void permute(vector<int> &num, int index, vector<vector<int> > &result)
    {
        if(index==num.size()-1)
        {
            result.push_back(num);
            return;
        }
        map<int,bool> mymap;
        for(int i=index;i<num.size();i++)
        {
            if(mymap.find(num[i])!=mymap.end())
                continue;
            mymap[num[i]]=1;
            swap(num,index,i);
            permute(num,index+1,result);
            swap(num,index,i);
        }
    }
    vector<vector<int> > permuteUnique(vector<int> &num) {
        sort(num.begin(),num.end());
        vector<vector<int> > result;
        permute(num,0,result);
        return result;
        
        
    }
};