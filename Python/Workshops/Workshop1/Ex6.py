def tri_bulle(a):
    
    for i in range(len(a)):
        for j in range(0, len(a) -i-1 ):
            if a[j] > a[j + 1]:

                a[j],a[j+1] =a[j + 1],a[j]
                
                

Arr = [78, 23, 632, 32, 4, 72, 63, 457]

tri_bulle(Arr)

for i in range(len(Arr)):
    print( Arr[i])