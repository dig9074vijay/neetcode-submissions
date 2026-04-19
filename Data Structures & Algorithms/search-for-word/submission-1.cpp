class Solution {
public:
    int m=0;
    int n=0;
    vector<int> dr = {-1,0,1,0};
    vector<int> dc = {0,-1,0,1};
    bool solve(int i,int j,int idx,vector<vector<char>>& board, string word)
    {

       
        if(word[idx]!=board[i][j]) return false;
         if(idx==word.size()-1)
            return true;
        char temp = board[i][j];
        board[i][j] = '#';
        for(int k=0;k<4;k++)
        {
            int nr = i+dr[k];
            int nc = j+dc[k];
            if(nr>=0&&nr<m && nc>=0 && nc<n)
            {
                bool exists = solve(nr,nc,idx+1,board,word);
                if(exists) return true; 
            }
        }  
        board[i][j] = temp;
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        m = board.size();
        n = board[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (solve(i, j, 0, board, word))
                    return true;
            }
        }

        return false;
    }
};
