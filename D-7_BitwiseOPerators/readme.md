## Bitwsie Operators & Scope of variables & Data Type modifiers.
1. Bitwise & -->Used to perform bitwise and operation between two number.
2. Bitwise | --> Bitwise or
3. Bitwise^ --> Bitwise xor
4. Bitwise << --> Bitwise left shift used to shift the bit by a given number of place 
5. Bitwise >> --> Bitwise right shift used to shift the bit right to the by a given number of place.

**NOTE**
--> When we are doing the left shift operation internally we are multiply that number by the 2 to power given number to shift

a<<b = a*2<sup>b

--> Similarly when we perform right shift we are dividing that number by 2<sup>given number

a>>b = a/2<sup>b


## Operator precendence 
1. Unary operators                    (!,++,--)  R-L
2. Airthematic operators              (*,/,%)    L-R
3. Airthematic operators              (+,-)      L-R
4. Relational operators               (<,<=,>,>=)L-R
5. Relational operators               (==,!=)    L-R
6. Logical Operators                  (&&)       L-R
7. Logical Operators                  (||)       L-R
8. Assignment operator                (=)        R-L

## Scope of a variable 
1. Local variable --> limited to a fixed scope ex - varaible uder if-else block , variable under loops, variable dclare under functions, variable under {} all are local they can't access out of their scope.
2. Global variable --> Variable which exits throught the program life cycle and can accessed by other functions and blocks ex variable declared under main function.

## Data Types Modifiers.
--> Data modifiers are used to change the storage capcity. Basically convert long storage to short and vice-versa.

we know int store 4byte of data = 32 bits range from (-2<sup>31) to (+2<sup>31) -1.    

1. long
2. short
3. long long
4. signed --> store both postive and negative value 
5. unsigned --> when variable declare unsigned means now threy can only store postive value.

NOTE 
when we declare variable unsigned now it store value upto 2<sup>32 -1 means now to range of storing data of that variable increses by double.

In int first most bit are reserved for storing the sign of data negative or postive therefore its range decrease by 2 means it store only 2<sup>31 data only
