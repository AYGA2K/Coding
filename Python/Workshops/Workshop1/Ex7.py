def tri_selection(a):

   for i in range(len(a)):

      
       min = i

       for j in range(i+1, len(a)):
           if a[min] > a[j]:
               min = j
                
       tmp = a[i]
       a[i] = a[min]
       a[min] = tmp

   return a


A = [100, 22, 45, 32, 2, 4, 63, 148]
 
print(tri_selection(A))

