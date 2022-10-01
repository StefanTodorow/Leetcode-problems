int validMountainArray(int* arr, int arrSize){
    if(arrSize < 3)
        return 0;
    int i;
    for(i = 1; i < arrSize-1; i++) {
        if(arr[i] == arr[i-1])
            return 0;
        if(arr[i] < arr[i-1]) {
            for(; i < arrSize-1; i++) {
                if(arr[i] == arr[i-1] || arr[i] > arr[i-1])
                    return 0;
            }
            break;
        }
    }
    if(arr[0] < arr[1] && arr[arrSize-1] < arr[arrSize-2])
        return 1;
    
    return 0;
}