# include<conio.h>
#include <stdlib.h>
# include<graphics.h>
Binclude<dos.h>
void main()
1
int j,i,gd= DETECT, gm:
initgraph(&gd,&gm, "C:\turboc3\bgi"):
int poly[181=1100,100,70, 150,300,150,270,
100,240, 100,200,80, 170,80, 130, 100, 100, 100):
setbkcolor(MHITE);
setcolor (RED);
for(i=0;i <=200;i=i+2)
for(j=0: K=18: j=1+2)
poly[.j]=polyl.j]+2:
|setfillstyle(1, RED):
fillpoly(9, poly):
circle(150+i,150,15):
|setfillstyle(1, RED):
fillpoly(9, poly):
circle(150+i,150,15):
circle(150+i,150,16):
circle(150+i, 150,17):
circle(150+i,150,18):
circle(220+i,150,15):
circle(220+i,150,16):
circle(220+i,150,17):
circle(220+i, 150,18):
delay(10):
cleardevice();
//line(320,240, (-andom(i )%640), (random(i )"480))
/cleardevice();
/bar(100, 100,120,150):
getch();
closegraph():
}