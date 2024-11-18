#include <stdio.h>
int main(){
	int a, b, chu_vi, dien_tich; 
	printf ("moi nhap gia tri a:");
	scanf ("%d" , &a);
	printf ("moi nhap gia tri b:");
	scanf ("%d" , &b);
	chu_vi = (a+b)*2;
	dien_tich = a*b;
	printf ("chu vi hinh chu nhat la:%d\n",chu_vi);
	printf ("dien tich hinh chu nhat la:%d\n",dien_tich);
return 0; 
}
