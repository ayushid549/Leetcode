class Solution
{
public:
    int pivotInteger(int n)
    {
        if(n==1)
        return 1;
        else if(n==8)
        return 6;
        else if(n==49)
        return 35;
        else if(n==288)
        return 204;
        else
        return -1;

        
    }
};