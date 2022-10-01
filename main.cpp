
#include "iostream"
#include "TXLib.h"

int main()
    {
    txCreateWindow (1200, 766);

    txSetColor (TX_BLACK,3);
    txSetFillColor (TX_WHITE);
    txClear();
    txSetFillColor (TX_BLACK);



    HDC pic=txLoadImage ("fon.bmp");






    int n=1;
    for (int i=0; i<500; i++)
    {

    txBitBlt (txDC(), 0-i*2, 0, 1600, 600, pic);
    //  рисуем tarakan
        txSetFillColor (TX_BLACK);
        txEllipse (200, 150, 280, 180);
        txEllipse (270, 150, 310, 180);

        //лапа лв 1


        if (n==1)
        {
        txLine(210,155,230,120) ;
        txLine(260,155,280,120) ;
        n=2;
        }

        //лапа лв 1
        else
        {
        txLine(210,155,205,118) ;
        txLine(260,155,255,118) ;
        n=1;}

        txSetFillColor (TX_WHITE);
        txSleep(200);
        txClear();



      }
      cout<<"vsfbnf"<<endl;


    return 0;
    }
