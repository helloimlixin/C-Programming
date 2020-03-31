# A Brief Introduction to REPL

*Disclaimer: this article is mainly from Wikipedia.*

**Read-Eval-Print-Loop (REPL)** is a simple interactive computer programming environment that takes single user inputs (single expressions), evaluates (executes) them, and returns the result to the user, a program written in a REPL environment is executed piecewise. Common examples of this term include command line shells and similar environments for programming languages and the technique is very characteristic of *scripting languages*.

In a REPL, instead of entering an entire **compilation unit**, the user enters one or more expressions and REPL evaluates them and displays the results:

- **R**: the **read** function accepts an expression from the user, and parses it into a data structure in memory.
- **E**: the **eval** function takes the internal data structure and evaluates it.
- **P**: the **print** function takes the result yielded by *eval* and prints it out to the user.
- **L**: the **loop** step loops back to the **R** step.
