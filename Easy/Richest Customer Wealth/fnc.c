int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    int wealthiest = 0;
    int i, j;
    for(i = 0; i < accountsSize; i++) {
        int currentW = 0;
        for(j = 0; j < *accountsColSize; j++) {
            currentW += accounts[i][j];
        }
        if(currentW > wealthiest) wealthiest = currentW;
    }
    
    return wealthiest;
}