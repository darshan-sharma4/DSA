## STL (Standard Template library)
1. Containers
2. Iterators
3. Algorithms
4. Functors

**Containers**    
a. vector functions   
->size & capacity    
->push_back & pop_back    
->emplace_back     
-> at() or[]    
->front & back     
->erase    
->insert    
->clear    
->empty       
b. Vector iterator     
->vec.begin    
->vec.end    (Its is not referencing the last index it reference the last+1 index which may have stored the garbage value)

**Note**
List are created by using the doubly linked list so we can not access random index as like as array or vector.     
Deque are use dyanamic array for creation so it possible to access random address like array and vector.    

c.Stack        
i) push,emplace    
ii)top   
iii)pop     
iv)size    
v)empty    
vi)swap     

d. Queue      
e.priority queue            
-->In priority queue the greatest value always store on top of the queue. But if we want to store small value we use functor to do this.
`priority_queue<int,vector<int>,greater<int>>q;`   

`greater<int>` it is comparator function which take some input and perform some function 

f. Map           
i) insert, emplace       
ii)count           
iii)erase    
iv)find          
v)size,empty,erase
**Types of map**          
i) Multi Map    (time Complexity=O(logn))    
ii)Unordered Map    (tc=O(1)or O(n)in rare case)       
<br>
g.Set        
Set are a contianer which store unique value in a particular sorted ordered manner.           
i) insert, emplace       
ii)count           
iii)erase    
iv)find          
v)size,empty,erase
vi)lower_bound        
vii)upper_bound    
<br>   
**Types of sets**          
i) Multi set    (time Complexity=O(logn))    
ii)Unordered set    (tc=O(1)or O(n)in rare case)     

2. Algorithm 
i) sorting      
sort(arr,arr+n)       
sort(arr,arr+n,greater`<int>`())       
sort(v.begin(),v.end())            
ii)reverse    
reverse(v.begin(),v.end())          
iii)Next permutation   
next_permutation(v.begin(),v.end())          
iv)swap    
v)min & max          
vi)max & min element    
max_element(v.begin(),vend())      
min_element(v.begin(),vend())         
vii) count set bits        
__bulitin_popcount(n)
__bulitin_popcountl(n)
__bulitin_popcountll(n)
