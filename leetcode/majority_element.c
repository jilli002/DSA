/*Majority Element Algorithm
input: array nums of size numsSize
output: the element that appears more than the 
    floor(n/2) times.

algorithm:
    We can define a majority element leader to be
    the element that has a greater number of occurrences
    k than the occurrences of all other elements together in the 
    array.
    
    Hence, given the size of the array to be n we have k > n-k
    such that n-k is the sum of other occurrences of the 
    other elements in the array (equivalently n-k is the number
    of other elements in the array that are not the leader)
    
    step 1. leader <-- nums[0], i <-- 0, flag <-- 0
    step 2. if i >= numsSize -1, STOP return leader
    step 3. evaluate leader and nums[i]
        (a) nums[i] == leader, flag <-- flag + 1
        (b) nums[i] != leader and flag > 0, flag <-- flag - 1
        (c) nums[i] != leader and flag == 0, leader <-- nums[i + 1]
    step 4. i <-- i + 1
    step 5. go to step 2
*/

int majorityElement(int* nums, int numsSize)
{
    int leader = nums[0];
    int i = 0;
    int flag = 0;
    
    
    while(i < numsSize-1)
    {
        if(nums[i] == leader) {flag++;}
        else if(nums[i] != leader && flag) {flag--;}
        else {leader = nums[i+1];}
        i++;
    }
    return leader;
}

