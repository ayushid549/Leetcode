class Solution {
public:
    int getWinner(vector<int>& arr, int k)
    {
        int winner = arr[0];
        int win_count = 0;

        for(int i=1;i<arr.size();i++)
        {
          if(winner > arr[i])
             win_count++;
          else
          {
             win_count = 1;
             winner = arr[i];
          }

          if(win_count == k)
             break;
        }
        return winner;
    }
};