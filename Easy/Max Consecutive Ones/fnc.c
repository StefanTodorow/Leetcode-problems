int findMaxConsecutiveOnes(int* nums, int numsSize){
    int i;
    int max = 0;
    int counter = 0;
    for(i = 0; i < numsSize; i++) {
        if(nums[i] == 1) {
            counter++;
            max = (max < counter ? counter : max);
            continue;
        }
        counter = 0;
    }
    return max;
}