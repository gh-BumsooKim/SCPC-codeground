import sys

inf = open('input.txt');
#inf = sys.stdin 

T = inf.readline();

for t in range(0, int(T)):
    
    Answer=[];
    
    temp = str(inf.readline())
    temp = temp.replace("\n","")
    temp = temp.replace(":"," ")
    temp = temp.split(" ")
    
    Answer.append( int(temp[2])-int(temp[0]) )
    
    if( int(temp[3]) >= int(temp[1])):
        Answer.append(int(temp[3])-int(temp[1]))
    else:
        Answer.append(60 + (int(temp[3])-int(temp[1])))
        Answer[0]-=1
	    
    if( len(str(Answer[0])) == 1 ):
        Answer[0]= "0" + str(Answer[0])

    if( len(str(Answer[1])) == 1 ):
        Answer[1]= "0" + str(Answer[1])    
        
    for i in range(len(Answer)):
        Answer[i] = str(Answer[i])
        
    Answer[0] = str(Answer[0] + ":" + Answer[1])
        
    print('Case #%d' %(int(t)+1))    
    print(Answer[0])
inf.close()
