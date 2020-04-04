/* CODE CHALLENGE
 * Give an array of numbers and array size,
 * move all zeros to the end of the array
 * while keeping the original order of all non-zero integers
 */
 
#include <stdio.h>

void moveZeroes(int* nums, int numsSize){
    for(int i=0; i < numsSize; i++) {
        if(nums[i] == 0) {
            for(int j=i; j < numsSize; j++) {
                if((j+1) == numsSize)
                    nums[j] = 0;
                else
                    nums[j] = nums[j+1];
            }
            i--;
            numsSize--;
        }
    }
}

int main() {
    int nums[] = {0,0,0,0,0,1,0,300,2,0,0,5,0,0,0};
    size_t m_numsSize = sizeof(nums) / sizeof(int);
    moveZeroes(&nums, (int)m_numsSize);
    printf("\n\n=====================\n[");
    m_numsSize = sizeof(nums) / sizeof(int);
    for(int i=0; i < (int)m_numsSize; i++) {
        printf("%d, ", nums[i]);
    }
    printf("]\n\n");
}
