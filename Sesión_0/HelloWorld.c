
#include <stdio.h>        /*is a header file library that lets us work with input and output functions, such as printf() (used in line 4). Header files add functionality to C programs*/
                          /*A blank line. C ignores white space. But we use it to make the code more readable.*/
int main() {              /*Another thing that always appear in a C program is main(). This is called a function. Any code inside its curly brackets {} will be executed.*/
  printf("Hello World! \n"); /* is a function used to output/print text to the screen. In our example, it will output "Hello World!".*/
  system("pause");        /*is a function that will pause the program until you press a key. This is useful because otherwise the program would execute and close before you can see the output.*/
  return 0;               /*Every C statement ends with a semicolon ;*/
}                         /*Do not forget to add the closing curly bracket } to actually end the main function.*/
