/* Coding Challenge
 * ================
 * given an array of signed integers and array size, 
 * return the integer that does not have a duplicate
 */
 
#include <stdio.h>
int singleNumber(int* nums, int numsSize) {
        int XOR = 0;
    for(int i=0; i<numsSize; i++)
                XOR ^= nums[i];
        return XOR;
}

int main() {
        int num_array[] = {55,-99,11,-13,66,54,-13,9,66,9,11,54,-99};
        int myMatch;

        size_t n = sizeof(num_array) / sizeof(int);
        myMatch = singleNumber(num_array, (int)n);
        printf("Result: %d\n", myMatch);
}
