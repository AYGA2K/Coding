
def convert(n):
  a=[]
  while n>1:
     a.append(int(n%2))
     n=n/2

  b=a[::-1]
  
  print (b)

convert(15)


