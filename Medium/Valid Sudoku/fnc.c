int isValidSudoku(char** board, int boardSize, int* boardColSize){
    int i, j;
    for(i = 0; i < boardSize; i++) {
        int tableA[10] = { 0 };
        int tableB[10] = { 0 };
        for(j = 0; j < *boardColSize; j++) {
            if(board[i][j] != '.') {
                int currentNumRow = board[i][j] - 48;
                tableA[currentNumRow]++;
                if(tableA[currentNumRow] > 1)
                    return 0;
            }
            if(board[j][i] != '.') {
                int currentNumCol = board[j][i] - 48;
                tableB[currentNumCol]++;
                if(tableB[currentNumCol] > 1)
                    return 0;
            }
        }
    }
    
    int k, l;
    for(k = 0; k < 9; k+=3){
        for(l = 0; l < 9; l+=3) {
            int table[10] = { 0 };
            
            for(i = k; i < k+3; i++) {
                for(j = l; j < l+3; j++) {
                    if(board[i][j] != '.') {
                        int currentNum = board[i][j] - 48;
                        table[currentNum]++;
                        if(table[currentNum] > 1)
                            return 0;
                    }
                }
            }
        }
    }
    
    return 1;
}