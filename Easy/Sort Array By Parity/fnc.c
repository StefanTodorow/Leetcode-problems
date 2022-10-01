int* sortArrayByParity(int* nums, int numsSize, int* returnSize){
    int i;
    int evenPtr = 0;
    for(i = 0; i < numsSize; i++) {
        if(nums[i] % 2 == 0) {
            int temp = nums[evenPtr];
            nums[evenPtr++] = nums[i];
            nums[i] = temp;
        }
    }
    
    *returnSize = numsSize;
    return nums;
}