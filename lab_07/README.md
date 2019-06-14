Jessica Wong | Lab 7

For Joseph's code, I found it odd that there was a space between every single line of code. 
It was either his intention, or that it's just how Xcode decided to open it.
For smaller systems, it would be more difficult to open the code and edit due to the file having 2x the lines of code.f
But either way, the code is definitely easier to read if the system is run on at least an i5 5th generatin CPU with 8GB of RAM. 

Also, the difficult part I found was the single-letter variables. I did not know what they represented, so I didn't know what to change the variable name to. For example, he made 
```string w, after;``` 
and I did not know what w meant at first. Then I realized that it could mean "word", but I feel as if it could have been more explicit.

Some of his indentation was off for the opening and closing of loops and functions. This part was really hard to fix because
the code inside the ```while (getline(fin, line))``` was massive, holding a bunch of if/else statements and while loops. It was essentially a load that was hard to both read and fix.

However I liked some of his comments. One part he commented ```//end of main```. At first I thought it was pointless, but then I realized how useful it actually was: to differentiate the main from the rest of the functions.
Addition: For some, he did not explicitly state the end of the function. On top of that, the opening and closing brackets
were not aligned properly, so I was reading code that I thought was still in the method. It was until later that I realized that it was not part of the function.
Not sure if it was how I extracted the code in a bad way or something, but the intentations and brackets are throwing me off really hard, because they are really off.

There is also inconsistency with whether or not he wants to do
```for {
//code
}```
or ```for 
{
//code
}
```
