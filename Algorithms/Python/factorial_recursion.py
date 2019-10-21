# Function to calculate factorial using recursion
def fact(n):
	if n == 1 or n == 0:
		return 1
	else:
		return n*fact(n-1)

#Taking input from the user
a = int(input())
print("Factorial of ", a,":",fact(a))