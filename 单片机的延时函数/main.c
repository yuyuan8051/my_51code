#include <REGX52.H>

typedef unsigned int u16;

void Delay(u16 xms)		//@12.000MHz
{
    u16 k = 0;
    unsigned char i, j;
    for(k = 0; k <xms; k++)
    {

        i = 2;
        j = 239;

        do
        {
            while (--j);
        } while (--i);
    }
}

int main(void)
{
    Delay(500);
    return 0;
}