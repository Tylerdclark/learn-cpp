# 2.1 — Introduction to functions

A **function** is a reusable sequence of statements that is tailored to do specific job.

To avoid the main function from being increasingly large, it becomes important to introduce **user-defined functions** which are aptly named.

``` nohighlight
return-type identifier() // identifier replaced with the name of your function
{
// Your code here
}
```

**Function body** - Curly braces and statements in between.

!! When calling a function, don't forget to include the parentheses ()!!

**Nested functions are not supported!!** The following code is not allowed!:

```c++
#include <iostream>
 
int main()
{
    int foo() // Illegal: this function is nested inside function main()
    {
        std::cout << "foo!\n";
        return 0;
    }
 
    foo(); // function call to foo()
    return 0;
}
```
