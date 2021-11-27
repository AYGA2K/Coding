def occurrence (a):
  dic={}
  for i in a:
    x=i
    occ=0
    for j in a:
     if x==j:
      occ+=1
      dic[x]=occ
     

  return dic

a=[11, 45, 8, 11, 23, 45, 23, 45, 89]
print(occurrence(a))