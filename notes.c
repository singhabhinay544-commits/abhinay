type data convernion
int op int
float op float
int op float  {float take 4 byte and int take 2byte}

operater precedence 
* / % then + - then =

associativity law for same percedence
x = 4*6/7*8 it works left to right like --------> this

instruction
control instruction
use to determine flow of program           
sequence
decision
loop control
case control

operaters
arithmetic
relational 
logical
bitwise
assignment
ternary   

relational operater
== , >=,> , < , <=, !=

logical operater
&& AND {if all true then give true}{if all fasle then give fasle}
|| OR { if any one true then give true}
! NOT {ture flase kr do flase ko true kar do}

operater precedence
prority           operater
1                 !
2                 - , / , %
3                 + , _
4                 < , <= , > , >=
5                == , !=
6                 &&
7                 ||
8                 =

a = a + b can be a += b
a = a - b can be a -= b
a = a * b can be a *= b
a = a / b can be a /= b
a = a % b can be a %= b

  Chapter 3 conditional statements
  Types 
 1) if-else
 2) switch

  if (condition){
    //do something if true
  }
else {
    //do something if fasle
}

conditional operators
Ternary
condition? doSomething if TRUE :
doSomething if FALSE

    switch swith(number)
{
case C1: // do something
  break;
case C2: // do something
  break;
default: // do something
}

switch Properties
case can be in any oder

Nested switch (switch insides switch) are allowed





git thoda sa jaan loo 
git status
 ls for all file
 cd floder name 
 untracked git kon file k baare me pata nhi hai
 modified kuch file me change huaa hai 
 stage file  git me add karne ke liye ready hai
 unmodified file me change nhi huaa hai 
 ADD & COMMIT
 add - adds new or changed files in your working directory to the git staging area
 git add<-file name->

 commit - it is the record of change
 git commit -m "message" 

 PUSH COMMAND
git push - it is used to upload local repository content to a remote repository
FOR PUSHING COMMAND IS 
git push origin main 
