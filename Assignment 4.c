//Question 1
//A
/*
An armstrong number is a n-digits number that is equal to the sum of the nth
power of its digits.
Examples :
6 = 61 = 6 (n=1 is the number of digits in 6)
371 = 33 + 73 + 13 = 371 ( n=3 is the number of digits in of 371)
*/
/* the algorithm for the armstrong number :
so the armstrong number is the number that we  take the last digit of it
and then we power it with each digit and we have and then their sum is the same number that we had in the first place
so fist we make the user enter a digit and after that we read it after reading it we take its last digit by the %10 method and after that we start a loop
in this loop it takes the number after the first time we moduled it and then it /10 and it repeats %10 and /10 until the number is less than 1
when the number is less than one it means that we got all the numbers
also in the loop each number we get
we save it to a variable this variable is power to the last digit of the number that has been input
until the end of the loop we will have the sum of the numbers we wanted*/
//but before we start with the armstrong number we should read B because they are all in the same program so i should do both in the same
//app while they are both just functions but i like working together not starting each alone cause the algorithm is enough



//B
/*
(B) A number is magical number if repeated adding of its digit gives 1. Examples:
19 is magical, since 1 + 9 = 10, 1 + 0 = 1 hence magical.
991 is magical, since 9 + 9 + 1 = 19, 1 + 9 = 10, 1 + 0 = 1.
However, 274 is not, 2 + 7 + 4 = 13, 1 + 3 = 4.
now lets understand it and write its algorithm
as to my understand we take any number lets take this 8461
we sum all the numbers together 8 + 4 +6 +1 = 19
since this is not a single number we take its sum
1 + 9 = 10
its also not a single number so we also take its sum
1 + 0 = 1
its a single digit now we verify if its 1 then yes its a magical number
if its not then no its not a magical number
so now if we spoke about an algorithm its like this
we start with reading the number ofcourse and after that we do out job which is putting the number in a loop
this loop checks if the number is less then 10 if its not
then we take the number and we do the module 10 and / 10 until we make the number less than 1 and also we have its sum
and after having its sum what we do exactly is this
we check if the sum is also less than 10 if not repeat but if it is then we check if its one or not if false then not magical if true then magical
*/
