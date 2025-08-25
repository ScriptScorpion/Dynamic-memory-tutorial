# Whats is dynamic memory?
Dynamic memory - is that memory that are allocated to heap instead of stack. **Heap** - means that you can `free` or `delete` memory at any moement you want(DON'T FORGET TO DO THIS IF YOU ARE DOING NOT WITH SMART POINTER, or else you get memory leak that will consume Ram). **Stack** - means that you can't `free` or `delete` memory at any moment, memory will be automaticly deleted at the end of program. 

# Pros and Cons of using dynamic and static memory
**Dynamic memory:**
  + Resizable size (size of array can grow if not enough size)
  + Can control lifetime of variable or array
  - Can lead to memory leaks if you not deleted allocated memory
**Static memory:**
  + Auto deletion at the end of program (some say that is disadvantage but i think it is safer)
  + Don't need to worry about memory leaks because it is stack
  - Size of array is not rezisable it is hardcoded (if you try adding anything bigger then size of variable or array, will be error)
