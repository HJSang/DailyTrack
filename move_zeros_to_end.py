# Move all zeroes to end of array
# Expected time complexity is O(n) and extra space is O(1).
# Examples:
# Input :  arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
# Output : arr[] = {1, 2, 4, 3, 5, 0, 0};

# Solutions:
# set count as the count of non-zero elements
# put non-zero element back to arr[count]
# append 0 unti the end

def print_array(arr):
	for i in arr:
		print(i)

def move_zeros(arr):
	nonzero_count = 0
	n = len(arr)
	for i in range(n):
		if arr[i] != 0:
			arr[nonzero_count] = arr[i]
			nonzero_count += 1

	# append 0
	while nonzero_count < n:
		arr[nonzero_count] =0
		nonzero_count +=1

if __name__ == '__main__':
	arr = [1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9]
	move_zeros(arr)
	print_array(arr)

