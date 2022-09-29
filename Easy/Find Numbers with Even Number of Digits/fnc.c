int findNumbers(int* nums, int numsSize){
    int i;
    int even = 0;
    for(i = 0; i < numsSize; i++) {
        int counter = 0;
        while(nums[i]) {
            nums[i] = nums[i] / 10;
            counter++;
        }
        if(counter % 2 == 0) even++;
    }
    return even;
}