def commune ( a ,b):
  z=[]
  x=list(a)
  y=list(b)
  for i in x:
    for j in y:
      if i==j:
        z.append(i) 
        
  for i in x:
    if i in z:
      x.remove(i)

  return set(x)

a={1,2,3,4,9}
b={1,9,3,5,10}

print(commune(a,b))
       