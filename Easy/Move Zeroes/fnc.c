void moveZeroes(int* nums, int numsSize){
    int i;
    int notZero = 0;
    for(i = 0; i < numsSize; i++) {
        if(nums[i]) {
            int temp = nums[notZero];
            nums[notZero++] = nums[i];
            nums[i] = temp;
        }
    }
}