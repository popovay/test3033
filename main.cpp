

#include "TXLib.h"

int main()
    {
    txCreateWindow (800, 600);

    txSetColor (TX_BLACK,3);
    txSetFillColor (TX_WHITE);
    txClear();
    txSetFillColor (TX_BLACK);



    HDC pic=txLoadImage ("fon.bmp");






    int n=1;
    for (int i=0; i<1000; i++)
    {

    txBitBlt (txDC(), 0-i*2, 0, 1600, 600, pic);
    //  ������ tarakan
        txSetFillColor (TX_BLACK);
        txEllipse (200, 150, 280, 180);
        txEllipse (270, 150, 310, 180);

        //���� �� 1


        if (n==1)
        {
        txLine(210,155,230,120) ;
        txLine(260,155,280,120) ;
        n=2;
        }

        //���� �� 1
        else
        {
        txLine(210,155,205,118) ;
        txLine(260,155,255,118) ;
        n=1;}

        txSetFillColor (TX_WHITE);
        txSleep(200);
        txClear();



      }


    return 0;
    }

