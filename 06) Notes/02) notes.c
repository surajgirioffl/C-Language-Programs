//c language
/*06) Notes> */
/*02) notes.c */
//102
/*Q. error discussion, function return type, arguments etc discussion, strupr() function discussion and 2-3 dimesional array discussion */
//COMPLETED

/*
error: expected unqualified-id-- you have left semocolom
If no return statement appears in a function definition, control automatically returns to the calling function after the last statement of the called function is executed. In this case, the return value of the called function is undefined.
Actual arguments are the variables, values which are being passed while calling a function and formal arguments are the temporary variables which we declare while defining a function.

Remember: Number of actual arguments (the arguments which are going to be supplied while calling the function) must equal to number of formal arguments (the arguments which are declared while defining a function). 

jo particular hoga wo one dimensional hoga. Jo har roll or student ke sath vary 
karta hai. usmein ek se adhik dimension hoga. e.g. har student ka subjects alag
honge aur har subjects ka marks bhi alag alag hoga.


strupr() is a function of string which is used to convert all letters to uppercase. But probably it's not a standard string function
so, it is not accepted by modern compilor like clang, gcc etc. These copilor shows error as " implicit declaration of function 'strupr' is invalid in C99".
, "undefined reference to `strupr' ", "linker command failed with exit code 1 (use -v to see invocation) " etc. There is only way to uppercase each character
using toupper() library function stored in ctype.h header file.

any character writtern in double quotes is treat as string

Also please make it a habit to write trailing newlines in your printf calls. 
When you run your program in a terminal that will write the line you just printed.
 Otherwise with leading newline it will write the previous line (due to how the stdout buffering works), 
 as well as the last output will be seen as part of the terminal prompt.
 so, it's always recommended to use \n in last i.e trailing(means in last and leading means in begining) \n in printf() library function during call.

\n is a line terminator, not a line separator

jo particular hoga wo one dimensional hoga. Jo har roll or student ke sath vary 
karta hai. usmein ek se adhik dimension hoga. e.g. har student ka subjects alag
honge aur har subjects ka marks bhi alag alag hoga.

*/
