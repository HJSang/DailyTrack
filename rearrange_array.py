# Rearrange array such that even positioned are greater than odd
# Given an array A of n elements, sort the array
# according to the following relations :
#    A[i] >= A[i-1]  , if i is even.
#    A[i] <= A[i-1]  , if i is odd.
#    Print the resultant array.

# Solution:
# sort the array first
# ssign largest [n/2] elements to the even positions
# rest of the elements to the odd positions

def rearrange(a,n):
	"""Rearrange array such that even positioned are greater than odd.

	Args:
	  a: array
	  n: size

	Returns:
	  Array
	"""
	a.sort()
	b = [0]*n
	i = 0
	j = n-1
	for index in range(n):
		if (index+1)%2 == 0:
			b[index] = a[j]
			j -=1
		else:
			b[index] = a[i]
			i +=1
	return b

def print_array(a):
	for i in a:
		print(i)

if __name__ == '__main__':
	a = [1,3,2,2,5]
	n = len(a)
	b = rearrange(a,n)
	print_array(b)





  
