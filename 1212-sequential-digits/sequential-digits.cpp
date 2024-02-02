class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> v;
        
        for(int i=1;i<=9;i++)
        {
            int num = i;
            int next_digit = i+1;
            while(num<=high && next_digit<=9)
            {
                num = num*10 + next_digit;

                if(low<=num && num<=high)
                {
                    v.push_back(num);
                }
                next_digit++;
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
};