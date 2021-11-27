def somme(n):
  x=1
  s=0
  for i in range(1,n+1):
   x=x*i
   s=s+(x/i)
   
  return s
 

print( somme(5))
  


