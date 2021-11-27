
def croisissant (a,b):
  tmp1,tmp2=[],[]
  for i in range(0,len(a)):
   if i%2!=0:
    tmp1.append(a[i]) 
  for x in range(0,len(b)):     
     if x%2==0:
      tmp2.append(b[x])
      
      
  return tmp1+tmp2

a=[3, 6, 9, 12, 15, 18, 21]
b=[4, 8, 12, 16, 20, 24, 28]
print(croisissant(a,b))