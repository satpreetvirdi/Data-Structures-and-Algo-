class Solution {
public:
    int shortestPath(vector<vector<int>>& grid, int k) {
        set<pair<pair<int,int>,int>> visited;
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<pair<int,int>,int>> q;
        vector<vector<int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

        q.push({{0,0},k});
        int step=0;
        while(!q.empty()){
            int size = q.size();
            for(int i=0;i<size;++i){
                int obstacle = q.front().second;
                int row = q.front().first.first;
                int col = q.front().first.second;
                q.pop();
                if(row == n-1 && col == m-1) return step;
                for(int j=0;j<4;++j){
                    int x = row + dir[j][0];
                    int y = col + dir[j][1];
                    if(x >=0 && y>=0 && x<n && y<m ){
                        if(grid[x][y] == 1 && obstacle>0 && !visited.count({{x,y},obstacle                        -1})){
                            q.push({{x,y},obstacle-1});
                            visited.insert({{x,y},obstacle-1});
                        }else if(grid[x][y] == 0 && !visited.count({{x,y},obstacle})){
                            q.push({{x,y},obstacle});
                            visited.insert({{x,y},obstacle});
                        }
                    }
                }
            }
            step++;
        }
        return -1;
    }
};