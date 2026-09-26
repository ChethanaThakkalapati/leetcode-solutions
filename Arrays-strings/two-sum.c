#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i, j;

    int* result = (int*)malloc(2 * sizeof(int));

    for (i = 0; i < numsSize; i++) {
        for (j = i + 1; j < numsSize; j++) {

            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }

    *returnSize = 0;
    return result;
}

int main() {
   int nums[] = {3, 3};
   int target = 6;
   int returnSize;

    int* result = twoSum(nums, 2, target, &returnSize);

    printf("Output: [%d, %d]\n", result[0], result[1]);

    free(result);

    return 0;
}