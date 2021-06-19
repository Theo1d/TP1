#include <iostream>
#include<math.h>
#include<locale.h>
using namespace std;

int main()
{
    setlocale (LC_CTYPE, "Spanish");


    float a,b,c,x1,x2,R;

    cout << "Introducir los coeficientes de la ecuación ax^2 + bx + c" << endl;
    cin  >> a >> b >> c;

    R=b*b - 4*a*c;

    if(R<0)
    cout << "Imposible obtener raíces" << endl;

    else
    {

    x1= (-b - sqrt(R))/(2*a);

    x2= (-b + sqrt(R))/(2*a);

    cout << "X1: " << x1 << "   X2: " << x2 << endl;

    }

    return 0;
}
