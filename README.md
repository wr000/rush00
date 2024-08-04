# rush00

Hi. it is the repo for rush00 that we will do together.

Try to write the program that we made together yesterday.

The file should be named rush00.c

It should look like that.

    void rush00(void)
    {
      ...
    }
    
    int main(void)
    {
      rush00();
    }

It should have the next variables:

    char c;
    int i;

It should have one **while** loop.

It should **#include <unistd.h>**

And use function **write(1, &c, 1)** to display characters.

Your **goal** is to show the line
o---o

_________________________________
If you want a little challenge, you can change the rush00 function is such way, that it accepts the variable x that defines the length of the output line.

For x = 3 it should show<br>
o-o<br>
For x = 5 it should show<br>
o---o

Then the program will look like that

    void rush00(int x)
    {
      ...
    }
    
    int main(void)
    {
      int x;
    
      x = 5;
      rush00(x);
    }
