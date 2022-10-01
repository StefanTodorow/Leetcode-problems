int removeElement(int* nums, int numsSize, int val){
    int i = 0;
    int back = numsSize-1;
    while(i < numsSize) {
        if(nums[i] == val) {
            nums[i] = nums[back];
            nums[back--] = val-1;
            numsSize--;
            continue;
        }
        i++;
    }
    return numsSize;
}