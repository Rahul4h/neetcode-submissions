class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<char, int>mp;
        bool f=true;
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(mp[board[i][j]]==0)
                {
               mp[board[i][j]]++;
                }
             else if(mp[board[i][j]]!=0 && board[i][j]!='.')
                {
                    f=false;
                    break;
                }
            }
            if(!f)
            {
                break;
            }
            mp.clear();

        }
        for(int j=0;j<9;j++)
        {
            for(int i=0;i<9;i++)
            {
                if(mp[board[i][j]]==0)
                {
                    mp[board[i][j]]++;
                }
             else if(mp[board[i][j]]!=0 && board[i][j]!='.')
                {
                    f=false;
                    break;
                }
            }
            if(!f)
            {
                break;
            }
            mp.clear();
        }
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(mp[board[i][j]]==0)
                {
                    mp[board[i][j]]++;
                }
             else if(mp[board[i][j]]!=0 && board[i][j]!='.')
                {
                    f=false;
                    break;
                }
            }
            if(!f)
            {
                break;
            }
        }
        mp.clear();
        for(int i=0;i<3;i++)
        {
            for(int j=3;j<6;j++)
            {
                if(mp[board[i][j]]==0)
                {
                    mp[board[i][j]]++;
                }
             else if(mp[board[i][j]]!=0 && board[i][j]!='.')
                {
                    f=false;
                    break;
                }
            }
            if(!f)
            {
                break;
            }
        }
        mp.clear();
        for(int i=0;i<3;i++)
        {
            for(int j=6;j<9;j++)
            {
                if(mp[board[i][j]]==0)
                {
                    mp[board[i][j]]++;
                }
                 else if(mp[board[i][j]]!=0 && board[i][j]!='.')
                {
                    f=false;
                    break;
                }
            }
            if(!f)
            {
                break;
            }
        }
        mp.clear();
        for(int i=3;i<6;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(mp[board[i][j]]==0)
                {
                    mp[board[i][j]]++;
                }
                 else if(mp[board[i][j]]!=0 && board[i][j]!='.')
                {
                    f=false;
                    break;
                }
            }
            if(!f)
            {
                break;
            }
        }
        mp.clear();
        for(int i=3;i<6;i++)
        {
            for(int j=3;j<6;j++)
            {
                if(mp[board[i][j]]==0)
                {
                    mp[board[i][j]]++;
                }
                 else if(mp[board[i][j]]!=0 && board[i][j]!='.')
                {
                    f=false;
                    break;
                }
            }
            if(!f)
            {
                break;
            }
        }
        mp.clear();
        for(int i=3;i<6;i++)
        {
            for(int j=6;j<9;j++)
            {
                if(mp[board[i][j]]==0)
                {
                    mp[board[i][j]]++;
                }
                 else if(mp[board[i][j]]!=0 && board[i][j]!='.')
                {
                    f=false;
                    break;
                }
            }
            if(!f)
            {
                break;
            }
        }
        mp.clear();
        for(int i=6;i<9;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(mp[board[i][j]]==0)
                {
                    mp[board[i][j]]++;
                }
                 else if(mp[board[i][j]]!=0 && board[i][j]!='.')
                {
                    f=false;
                    break;
                }
            }
            if(!f)
            {
                break;
            }
        }
        mp.clear();
        for(int i=6;i<9;i++)
        {
            for(int j=3;j<6;j++)
            {
                if(mp[board[i][j]]==0)
                {
                    mp[board[i][j]]++;
                }
                 else if(mp[board[i][j]]!=0 && board[i][j]!='.')
                {
                    f=false;
                    break;
                }
            }
            if(!f)
            {
                break;
            }
        }
        mp.clear();
        for(int i=6;i<9;i++)
        {
            for(int j=6;j<9;j++)
            {
                if(mp[board[i][j]]==0)
                {
                    mp[board[i][j]]++;
                }
                else if(mp[board[i][j]]!=0 && board[i][j]!='.')
                {
                    f=false;
                    break;
                }
            }
            if(!f)
            {
                break;
            }
        }
        mp.clear();
        return f;
    }
};
