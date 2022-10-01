int** seen;

int island(int** grid, int i, int j, int gridSize, int gridColSize) {
    if(i < 0 || j < 0 || i >= gridSize || j >= gridColSize ||
       seen[i][j] || grid[i][j] == 0)
        return 0;
    seen[i][j] = 1;
    return (1 + island(grid, i, j+1, gridSize, gridColSize)
            + island(grid, i, j-1, gridSize, gridColSize)
           + island(grid, i+1, j, gridSize, gridColSize)
           + island(grid, i-1, j, gridSize, gridColSize));
}

int maxAreaOfIsland(int** grid, int gridSize, int* gridColSize){
    seen = (int**)calloc(gridSize, sizeof(int*));
    int i, j;
    int max = 0;
    for (i = 0; i < gridSize; ++i)
    {
        seen[i] = (int*)calloc(*gridColSize, sizeof(int));
    }
    
    for(i = 0; i < gridSize; i++) {
        for(j = 0; j < *gridColSize; j++) {
            if(grid[i][j]) {
                int curr = island(grid, i, j, gridSize, *gridColSize);
                if(curr > max) 
                    max = curr;
            }
        }
    }
    
    free(seen);
    return max;
}