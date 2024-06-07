/*
Jack-o'-Lanterns Problem

Halloween is here, so according to the traditions, their is a competition held on making the Lanterns
So Jack-o'-Lanterns are basically Lanterns which are formed by Pumpkins.

There are two children Alice and Bob. Alice and Bob has 'n' pumpkins .
The weight of the pumpkins are given in the multiple of 5. You need to carve the extra weight from larger pumpkin and fill it into smaller pumpkins till they become of the equal weight. 
The opeartion which can be carried to remove the extra weight is :

o)in one operation you have to remove the weight from heaviest pumpkin and transfer it to any of the lighter pumpkin

The participant with the most number of equal weights of pumpkins wins the competition.

INPUT :

The first line contains a single integer t (1≤t≤10^4) — the number of test cases.

The second line contains four integers n i.e. total number of pumpkins with Alice and Bob

The third line contains 'n' space separated integers a1, a2, a3 ....... denoting the weight of each pumpkin with Alice.

The fourth line contains 'n' space separated integers b1, b2, b3 ....... denoting the weight of each pumpkin with Bob.

OUTPUT :

The first line of output should contain the winner's name i.e. if Alice wins, then print "ALICE" and if Bob wins, then print "BOB" or else if ther is a draw then print "DRAW".

TESTCASE:

1) 

INPUT -

n = 6
Alice - [0,5,5,10,20,25]
Bob - [5,10,10,10,15,30]

Output - ALICE


Explaination : 

Alice can form atmost 5 pumpkins of equal weights in 3 operations
[0,5,5,10,20,25] -> [5,5,5,10,20,20] -> [5,5,10,10,15,20] -> [5,10,10,10,10,20] -> [10,10,10,10,10,15]

Bob can form atmost 4 pumpkins of equal weights in 2 opeartions 
[5,10,10,10,15,30] -> [10,10,10,10,15,25] -> [10,10,10,15,15,20] -> [10,10,15,15,15,15]

So Alice wins the competition





*/