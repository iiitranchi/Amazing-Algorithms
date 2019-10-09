def binary_search(l,x):
	left = 0
	right = len(l) - 1

	while(left <= right):

		middle = (left + right)//2

		if x < l[middle]:
			right  = middle - 1

		elif x > l[middle]:
			left = middle + 1

		elif x == l[middle]:
			print("index of ",x,"is",middle)
			break

l = [int (x) for x in input("Enter a sorted list").split()]
x = int(input("Enter the element to find"))

binary_search(l,x)