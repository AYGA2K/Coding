def frequence (a,char):
  comt=0
  for i in a:
      if i==char:
       comt+=1
  return comt

a="ayoaub"

print(frequence(a,'a'))       
