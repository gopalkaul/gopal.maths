#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main ()
{
    int disc,g,h, root1, root2,a,b,c;
    cout << " Welcome to Gopal's Program!!!" << "\n";
    cout << " You can easily find the roots of a quadratic equation in the form of ax^2+bx+c. You just need to enter a,b,c values.";
cout << " Enter a,b,c from the Quadratic Equation :" ;
cin >>a >>b >>c ;
disc = sqrt(b*b -4*a*c);
g=-b+disc;
h=-b-disc;
root1=g/2*a;
root2=h/2*a;
if (disc<0)
 {cout << "It does not have real roots.";
        return 0;
}
else
cout << "The roots are :" ;
cout << root1 << " and ";
cout << root2;
}







