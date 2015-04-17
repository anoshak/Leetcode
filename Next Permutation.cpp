class Solution {
public:
    void nextPermutation(vector<int> &num) {
        int i;
        for(i=num.size()-1;i>0;i--)
        {
            if(num[i] > num[i-1])
                break;
        }
        if(i==0)
        {
            sort(num.begin(),num.end());
            return;
        }
        else
        {
            int start = i-1;
            int min = num[i];
            int pos = i;
            while(i<num.size())
            {
                if(num[i] < min && num[i] > num[start])
                {
                    min = num[i];
                    pos= i;
                }
                i++;
            }
            num[pos] = num[start];
            num[start] = min;
            sort(num.begin()+start+1,num.end());
            return;
        }
    }
};