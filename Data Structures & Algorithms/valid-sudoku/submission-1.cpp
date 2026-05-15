class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // row check , col check , 3x3 check
        unordered_map<int, int> mp;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    int num = board[i][j] - '0';
                    if (mp.find(num) != mp.end()) return false;
                    mp[num]++;
                }
            }
            mp.clear();
        }
        mp.clear();

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[j][i] != '.') {
                    int num = board[j][i] - '0';
                    if (mp.find(num) != mp.end()) return false;
                    mp[num]++;
                }
            }
            mp.clear();
        }

        // 3. 3x3 Box Check
        for (int rowOffset = 0; rowOffset < 9; rowOffset += 3) {
            for (int colOffset = 0; colOffset < 9; colOffset += 3) {
                // This clears the map for every NEW 3x3 box
                mp.clear();

                // These loops traverse inside the specific 3x3 box
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        char current = board[rowOffset + i][colOffset + j];
                        if (current != '.') {
                            int num = current - '0';
                            if (mp.count(num)) return false;
                            mp[num]++;
                        }
                    }
                }
            }
        }

        return true;
    }
};
