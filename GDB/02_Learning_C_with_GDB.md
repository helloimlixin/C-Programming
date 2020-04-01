# Learning C with GDB

GDB could serve as a *pseudo-REPL* tool for C, in this tutorial, we will go through several basic GDB commands and a review of the differences between arrays and pointers in C.

## GDB Introduction

Let's start by a simple C program:

```c
int main() {
    int i = 1337;
    return 0;
}
```

![](2020-04-01-05-33-45.png)

Now we compile it with the `-g` flag so that GDB has debugging information to work with and then feed it to GDB:

```bash
gcc -g simple.c -o simple
gdb ./simple
```

**NOTE**: here the `./` is important! GDB won't work without it.
We have the terminal output:

![](2020-04-01-06-46-53.png)

We can carry out simple arithmetic in C and print out the evaluation:

![](2020-04-01-05-39-19.png)

Note that even arithmetic can be tricky in C and GDB understands C arithmetic:

![](2020-04-01-05-41-10.png)

Now let's set a breakpoint in the `main` function and start the program:

![](2020-04-01-06-11-18.png)

Now the program is on line 2 of the C program:

```c
int i = 1337;
```

Before `i` gets initialized, we can peek its value for now using GDB:
