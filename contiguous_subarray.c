/* Code Challenge
 * ==============
 * Given an array of unsigned ints and array size, 
 * Return the largest sum contiguous subarray value.
 */

#include <stdio.h>

int maxSubArray(int* nums, int numsSize){
    int sub_result = 0, result = 0;
    for(int i=0; i < numsSize; i++) {
        sub_result += nums[i];
        if(sub_result < 0){
            if(result <= nums[i] || !(i ^ 0))
                result = sub_result;
            sub_result = 0;
            continue;
        }
        if(sub_result > result)
            result = sub_result;
    }
    return result;
}

int main() {
    int ret = -1;
    int nums[] = {-2,1,-3,4,-1,2,1,-5,4};
    //int nums[] = {-1,-2};
    size_t n = sizeof(nums) / sizeof(int);

    ret = maxSubArray(&nums, (int)n);
    printf("Contiguous Subarray Value: %d\n", ret);
    return ret;
}
