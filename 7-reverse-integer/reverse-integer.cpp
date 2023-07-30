class Solution {
public:
    int reverse(int x)
    {
        long long rem=0,newnum=0; 
        
        while(x!=0)
        {
           rem = x%10;
           newnum = newnum*10 + rem;
           x/=10;
        }  
        
        if(newnum<INT_MIN  || newnum>INT_MAX)
        return 0;
        else
        return newnum;
    }
};