void duplicateZeros(int* arr, int arrSize){
    int i, j;
    for(i = 0; i < arrSize; i++) {
        if(arr[i] == 0) {
            for(j = arrSize-2; j >= i; j--) {
                arr[j+1] = arr[j];
            }
            i++;
        }
    }
}