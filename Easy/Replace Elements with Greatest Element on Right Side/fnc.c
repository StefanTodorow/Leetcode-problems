int* replaceElements(int* arr, int arrSize, int* returnSize){
    int i;
    *returnSize = arrSize;
    int currMax = -1;
    
    for(int i = arrSize - 1; i >= 0; i--) {
        int temp = arr[i];
        arr[i] = currMax;
        currMax = (currMax > temp ? currMax : temp);
    }
    
    return arr;
}