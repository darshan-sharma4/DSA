# Pointers
special variable that store the address of other  variables    

int* ptr = &a;  
float b = 100.21f;  
float* ptr = &a;

pointer to pointer    
int** parentPtr = &ptr;

# Deferencing of address
Getting the value store at some address variable
int c = *(&a);
 
# Null pointer
A pointer that doesn't point to any location.     
int* ptr = NULL;


# Pass by refernces 
1. Pointers
-->We pass the actual address of a variable.
2. References(alias)
--> Creating an alias of the actual variable but they both indicating the same adrress variable.

# Array pointer
Array is a constant pointer which store the first address of the block.

# Pointer Arithematic
1. Increment(++)
2. Decrement(--)
3. Add/ Subtract number +2 -2

Subtracting of two pointer is allowed but addition of 2 pointer is not allowed.
4. Compare(< ,> ,<=,>= , == ,!=)
