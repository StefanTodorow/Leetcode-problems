void sortArr(int* arr, int arrSize) {
    int i, j;
    for(int i = 0; i < arrSize; i++) {
        int minIndex = i;
        for(j = i + 1; j < arrSize; j++) {
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int heightChecker(int* heights, int heightsSize){
    int* expected = (int*)malloc(heightsSize * sizeof(int));
    int i;
    int counter = 0;
    
    for(i = 0; i < heightsSize; i++) {
        expected[i] = heights[i];
    }
    sortArr(expected, heightsSize);
    
    for(i = 0; i < heightsSize; i++) {
        if(expected[i] != heights[i])
            counter++;
    }
    for (int i = 0; i < heightsSize; i++)
    {
        free(expected[i]);
    }
    
    return counter;
}