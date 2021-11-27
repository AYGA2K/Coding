def tri_insertion(a):

	for i in range(1, len(a)):

		k = a[i]
		j = i-1
		while j >=0 and k < a[j] :
				a[j+1] = a[j]
				j -= 1
		a[j+1] = k

a = [12, 11, 13, 5, 6]
tri_insertion(a)
for i in range(len(a)):
	print (a[i])

