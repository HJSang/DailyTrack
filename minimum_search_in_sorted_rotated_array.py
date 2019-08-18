# Question: Find the minimum element 
# in a sorted and rotated array

# Description: A sorted array is rotated at
# some unknown point, find the minimum element in it.
# examples: Input: {5, 6, 1, 2, 3, 4}
# Output: 1
# Input: {1, 2, 3, 4}
# Output: 1
# Input: {2, 1}
# Output: 1

# Solution: 
# Binary Search.
# The minimum element is the only element whose previous is greater than it.
# If minimum element is not at middle:
# If middle element is smaller than last element, 
# then the minimum element lies in left half
# Else minimum element lies in right half.

def search_minimum(arr, left, right):
	"""Binary Search  the minimum using Binary Search.

	Args:
	  arr: array
	  left: left index
	  right: right index

	 Returns:
	   the minimum 
	 """

	if right < left:
		return arr[0]

	if right == left:
		return arr[left]

	 # find the minimum 
	middle = int((left+right)/2)

	 ## check if the middle one is the minimum 
	if middle < right and arr[middle] < arr[middle-1]:
		return arr[middle]

	 # check which side
	if arr[right] > arr[middle]:
	 	# left side
	 	return search_minimum(arr, left, middle-1)
	else:
		return search_minimum(arr, middle+1, right)


# driver function

if __name__=='__main__':
	arr1 = [7,6,5,1,2,3,4]
	n1 = len(arr1)
	min1 = search_minimum(arr1,0,n1-1)
	print('The minimum is %d' %min1)






