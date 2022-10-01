/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    int* result = (int*)malloc(2 * sizeof(int));
    result[0] = -1;
    result[1] = -1;
    int i;
    
    for(i = 0; i < numsSize; i++) {
        if(nums[i] > target)
            break;
        if(nums[i] == target && result[0] == -1) {
            result[0] = i;
            result[1] = i;
        }
        else if(nums[i] == target) {
            result[1] = i;
        }
    }
    
    *returnSize = 2;
    return result;
}