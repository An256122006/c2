#include <stdio.h>
int main()
{
 int a=3, b=4, tong, hieu, tich;
 float thuong;
 tong = a + b;
 hieu = a - b;
 tich = a * b;
 thuong = a / b;
 printf ("tong cua %d va %d la:%d\n", a,b,tong);
 printf ("hieu cua %d va %d la:%d\n", a,b,hieu);
 printf ("thuong cua %d va %d la:%.2f\n",a,b,thuong);
 printf ("tich cua %d va %d la:%d\n",a,b,tich);
 return 0;
 } 
