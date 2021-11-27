def recherche_element(a, elem):
    for i in range (len(a)):
        for j in range(len(a[i])):
            if a[i][j] == elem:
                return [i, j]
    

a=[[4,5,5],[1,2,9]]
print (recherche_element(a,1))

