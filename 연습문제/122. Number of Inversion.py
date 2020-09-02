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

	#############################################################################################
	#
	#  Implement your algorithm here.
	#  The answer to the case will be stored in variable Answer.
	#
	#############################################################################################
	
	# Print the answer to standard output(screen).
    print('Case #%d' %(int(t)+1))    
    print(Answer)
    
inf.close()