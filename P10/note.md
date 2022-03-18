# Pogramming Paradigms
## CS 107 - Lecture 10:    

- Function Call and Return
- Code Generation Examples
- Factorial Trace

### A simple function
    static int Add(int one, int two)
    {
      int temp, sum;
      sum = one + two;
      return sum;
    }

### The activation record
    two
    one
    saved PC
    temp
    sum

### generated code
    SP = SP -8         ; make space for local variables
    R1 = M[SP + 12]    ; load value of parameter one into R1
    R2 = M[SP + 16]    ; load value of parameter two into E2
    R3 = R1 + R2       ; do addition
    M[SP] = R3         ; store result in local variable sum
    RV = M[SP]         ; copy sum's value into RV register (return value)
    SP = SP + 8        ; clean up space used for local variables
    RET                ; return to caller, pick up at saved address
