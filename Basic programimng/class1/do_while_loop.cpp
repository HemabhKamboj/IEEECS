// C++ program to illustrate do-while loop
#include <iostream.h>
using namespace std;
 
int main()
{
    int i = 2; // Initialization expression
 
    do
    {
        // loop body
        cout << "Hello World\n";
 
        // update expression
        i++;
 
    }  while (i < 1);   // test expression
 
    return 0;
}

/* OUTPUT: Hello World 
Do while loop will run atleast once even if the condition is false */
