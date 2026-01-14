# Maths for Dsa required
1. Prime number 
2. count the number in a digit -- formula logn10(n);
3. Armstrong number--Armstrong number is a number that is equal to the cubes of its digits; ex-153  1^3 + 5^3 + 3^3 = 153

4. GCD(HCF) to calculate gcd we use hcf method or recursion method gcd(a,b)=gcd(a-b,b) if a>a and (a,b-a) if b>a;

'Euclid's' Algorithm
ex-gcd(20,28)=gcd(20,28-20)=gcd(20,8)=gcd(20-8,8)=gcd(12,8).......so gcd(0,4) =4;        
Note a=0-> then b is gcd     
     b=0-> then a is gcd       


In this subtraction can perform repeated task of subtraction so we take modulo of of a and b to minimize the repeated operation 

like gcd(20,28)= gcd(20,28%20)
