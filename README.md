# mikerep



1. Relationship Between Code and Memory

When a program runs, memory is divided into different segments.
 CODE Segment
This Stores compiled instructions of the program.
Contains:
- main()
- adder()
These functions are stored in the code section.

  DATA Segment
Stores global variables.
Example:
int g_num1 = 10;
This variable exists during the whole program execution.

  STACK Segment
Stores:
- Local variables
- Function parameters
- Return addresses
Example variables stored in stack:
- a
- b
- ptr1
- ptr2
- tmp
When adder() is called, a new stack frame is created
## HEAP Segment
Stores dynamically allocated memory.
Example:
ptr1 = (int*) malloc(sizeof(int) * 2);
ptr2 = (int*) malloc(sizeof(int) * 2);

Heap stores values:
ptr1 → [5, 100]
ptr2 → [5, 100]

Memory is released using:
free(ptr1);
free(ptr2);

 2. Explanation of Memory Segments

 CODE
Stores program instructions.
Does not change during execution.

  DATA
Stores global variables.
Exists for entire program.

 STACK
Stores local variables and function calls.
Automatically managed.

 HEAP
Stores dynamic memory.
Managed using malloc() and free().

