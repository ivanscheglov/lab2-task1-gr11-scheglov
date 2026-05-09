#include "lucky.h"




int
is_lucky(int n)
{
        int     d1, d2, d3, d4, d5, d6;


        d6 = n % 10;
        d5 = (n / 10) % 10;
        d4 = (n / 100) % 10;
        d3 = (n / 1000) % 10;
        d2 = (n / 10000) % 10;
        d1 = (n / 100000) % 10;


        return (d1 + d2 + d3) == (d4 + d5 + d6);
}
