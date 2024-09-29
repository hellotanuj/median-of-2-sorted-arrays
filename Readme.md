# Median of 2 sorted number
## taking 2 arrays as input from user

we took 2 iterators for defining both arrays as we are taking all the elements that user enter till it reaches the given size of array given by user

Here we named 2 arrays as nums1 and nums2 and their sizes we defined as m and n respectively

then we took variable "max" to give define the size of final array "merge" where "max" is equal to m + n.

now we take 3 variables a,b,c equal to 0. we use b for writing while loop for 1st array "nums1" where it keeps on looping till b is not lesser than "m" which is size of "nums1" and similarly for c with array "nums2" and size "n". Another while loop also where we check the condition for both where (b<m && c<n)

in loops it compares all the elements from 0 to m or n between 2 arrays. whichever element is smaller, it will be kept first into the new array "merge" whose size is "max".

now this "max" is checked if its odd or even, then we put the median formula for even if its even or else odd for odd.

