class Cell {
public:
    int r;
    int c;
    int h;
    Cell(int r, int c, int h) {
        this->r = r;
        this->c = c;
        this->h = h;
    }
    
    bool operator<(const Cell& cell) const {
        return (this->h < cell.h);
    }
    
    bool operator>(const Cell& cell) const {
        return (this->h > cell.h);
    }
    
    void Print() {
        cout<<"r:"<<r<<"\tc:"<<c<<"\th:"<<h<<endl;
    }
};

class Solution {
private:
    int dirs[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };
public:
    int trapRainWater(vector<vector<int>>& heightMap) {
        if (heightMap.size() == 0 || heightMap[0].size() == 0) {
            return 0;
        }
        
        int maxRow = heightMap.size();
        int maxCol = heightMap[0].size();
        // minHeap to hold all cells
        priority_queue<Cell, vector<Cell>, greater<Cell>> pq;
        // Boolean matrix to mark visited
        vector<vector<bool>> visited(maxRow, vector<bool>(maxCol, false));
        int maxWater = 0;
        
        
        // Add all the edge cells to the pq as they cannot hold any water and mark them visited as well
        
        // Add first and last row
        for (int col = 0; col < maxCol; col++) {
            visited[0][col] = true;
            visited[maxRow - 1][col] = true;
            pq.push(Cell(0, col, heightMap[0][col]));
            pq.push(Cell(maxRow - 1, col, heightMap[maxRow -1][col]));
        }
        
        // Add first col and last col
        for (int row = 0; row < maxRow; row++) {
            visited[row][0] = true;
            visited[row][maxCol - 1] = true;
            pq.push(Cell(row, 0, heightMap[row][0]));
            pq.push(Cell(row, maxCol - 1, heightMap[row][maxCol - 1]));
        }
        
        // Iterate over the pq and add traverse/visit each cell's neighbor if not already visited
        while (!pq.empty()) {
            Cell cell = pq.top();
            pq.pop();
            
            //cell.Print();
            
            // Traverse all four neighbors
            for (auto dir: dirs) {
                int row = cell.r + dir[0];
                int col = cell.c + dir[1];
                
                if (row > 0 && row < maxRow - 1 && col > 0 && col < maxCol - 1 && !visited[row][col]) {
                    // Mark the neighbor visited
                    visited[row][col] = true;
                    
                    maxWater += max(0, cell.h - heightMap[row][col]);
                    pq.push(Cell(row, col, max(cell.h, heightMap[row][col])));
                }
            }
            
        }
        
        return maxWater;
    }
};