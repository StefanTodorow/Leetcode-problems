/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize){
    int i;
    int* arr = (int*)malloc(numsSize * (sizeof(int)));
    *returnSize = numsSize;
    int left = 0;
    int right = numsSize-1;
    for(int i = numsSize-1; i >= 0; i--) {
        int l = nums[left] * nums[left];
        int r = nums[right] * nums[right];
        if(l >= r) {
            arr[i] = l;
            left++;
        }
        else
        {
            arr[i] = r;
            right--;
        }
    }
    
    return arr;
}