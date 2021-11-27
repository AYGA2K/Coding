def deviser (a):
  b,c,d=[],[],[]
  x=int(len(a)/3)
  for i in range(0,x):
    b.append(a[i])
  
  for i in range(x,x*2):
    c.append(a[i])

  for i in range(x*2,len(a)):
    d.append(a[i])

  b.reverse()
  print(b)  

  c.reverse()
  print(c)

  d.reverse()
  print(d)


a=[11, 45, 8, 23, 14, 12, 78, 45, 89]

deviser(a)