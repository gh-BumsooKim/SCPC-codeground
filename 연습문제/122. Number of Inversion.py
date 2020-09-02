import sys

#inf = sys.stdin 
inf = open('input.txt');

T = inf.readline();
length=int(inf.readline());

for t in range(0, int(T)):
    
    Answer=0;
    
    temp = str(inf.readline());
    temp = temp.replace("\n","")
    temp = temp.split(' ')
    
    for i in range(0 , len(temp)-1):
        for j in range(i , len(temp)):
            if( temp[i] > temp[j]):
                Answer+=1
	
    print('Case #%d' %(int(t)+1))    
    print(Answer)
    
inf.close()
