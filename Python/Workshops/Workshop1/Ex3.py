def somme (n):
  if (n>0):
   result=n+somme(n-1)
  else:
    result=0
  return result

print(somme(2))
