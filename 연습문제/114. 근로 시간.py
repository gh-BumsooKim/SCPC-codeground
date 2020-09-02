'''
You should use the standard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful. 
'''

import sys

'''
	The method below means that the program will read from input.txt, instead of standard(keyboard) input.
	To test your program, you may save input data in input.txt file,
	and call below method to read from the file when using open() method.
	You may remove the comment symbols(#) in the below statement and use it.
	But before submission, you must remove the open function or rewrite comment symbols(#).
'''

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
	#############################################################################################
	#
	#  Implement your algorithm here.
	#  The answer to the case will be stored in variable Answer.
	#
	#############################################################################################
	
	# Print the answer to standard output(screen).
    
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