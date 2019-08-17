# Question: Reversal algorithm for right rotation of an array
# Given an array, right rotate it by k elements. 
# For example: [1,2,3,4,5,6,7,8,9,10]
# After k=3 rotation, [8,9,10,1,2,3,4,5,6,7]

# Recursive solution:
# let a = array[n-1], where n = array length 
# move (n-2-i)-th to (n-1-i)-th for i =0, to n-2
# let array[0]=a
# repeat the process until k times 
# complexiteies O(kn)

# define traverse function 
def array_traverse(arr,n):
	"""Print the array from 0 to n-1.

	Args:
	  arr: array 
	  n: array size 

	 Returns:
	 NULL
	"""
	assert len(arr) == n
	for i in range(n):
		print(arr[i], '\n')
	return

# define one-round reverse
def one_round_reverse(arr,n):
	a = arr[n-1]
	for i in range(1,n):
		arr[n-i] = arr[n-i-1]
	arr[0] = a

# define reverse function
def right_rotate_recursive(arr,n,k):
	"""Rotate the right k elements.

	Args:
	  arr: array
	  n: array size
	  k: the right k elements

	Returns:
	  array after rotation
	"""
	while k>0:
		one_round_reverse(arr,n)
		k = k-1

# More Efficient solution 
# reversion the whole array
# then, reverse the first d
# then, reverse the last n-d
# complexity 2*n

# define function to revserse from index start to end
def reverse_any(arr, start, end):
	while (start < end):
		arr[start], arr[end] = arr[end], arr[start]
		start = start + 1
		end = end -1

def right_rotate(arr, n, k):
	reverse_any(arr,0,n-1)
	reverse_any(arr,0,k-1)
	reverse_any(arr,k,n-1)

if __name__=='__main__':
	arr = list(range(1,11))
	n = len(arr)
	k = 3
	print('the origin array is: \n')
	array_traverse(arr,n)
	right_rotate_recursive(arr,n,k)
	print('after the rotate:\n')
	array_traverse(arr,n)
	print('after the second rotate:\n')
	right_rotate(arr,n,k)
	array_traverse(arr,n)


