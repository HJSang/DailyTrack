## Selection Sorting Algrothm 

def select_min_index(arr,i,n):
	"""Select the minimum index.

	Args: 
	  arr: array.
	  i: index to start.
	  n: arrar length

	Returns:
	  None
	"""
	min_index = i
	for index in range(i,n):
		if arr[index] < arr[min_index]:
			min_index = index
	temp = arr[min_index]
	arr[min_index] = arr[i]
	arr[i] = temp
	return None


def selection_sort(arr,n):
	"""Selection Sorting algorithm.
	"""
	for i in range(n):
		select_min_index(arr,i,n)
	return None

def print_array(arr,n):
	for i in range(n):
		print(arr[i])

## driver function 
if __name__ == '__main__':
	A = [64, 25, 12, 22, 11]
	n = len(A)
	print('Original Array:\n')
	print_array(A,n)
	selection_sort(A,n)
	print('After Sorting:\n')
	print_array(A,n)
	
