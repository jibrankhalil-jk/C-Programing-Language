#include <stdio.h>

// data types in c

int main()
{
    // Basic Data types in c are as folowing
    // size is in byte , for more information check the comouter memor.txt file

    int a;    // size=4 Range( -2,147,483,648 to 2,147,483,647 )
    char b;   // size 1
    float c;  // size=4 Range( 1.2E-38 to 3.4E+38 )
    double d; // size=8 Range( 1.7E-308 to 1.7E+308 )

    //----- Int ------------------------------------
    short int shor;    // size=2 Range( -32,768 to 32,767  )
    long int li;       // size=4 (-2,147,483,648 to 2,147,483,647)
    long long int lli; // size=8 Range( -(2^63) to (2^63)-1 )

    // Unsigned and Signed int
    // Signed integers can represent both positive and negative values. (-+)
    // Unsigned integers only represent non-negative values (zero and positive integers).(+)
    unsigned int ui = -4234; // no egtaive number
    signed int si = -23414;  // all integers
    // all int and float have signed and unsigned data typess

    //----- Float ------------------------------------
    float flo;         // size=4
    double doub;       // size=8  Range( 1.7E-308 to 1.7E+308 )
    long double ldoub; // size=16 Range( 3.4E-4932 to 1.1E+4932 )

    return 0;
}