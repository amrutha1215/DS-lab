#include<stdio.h>
void main(){
int a[100];
int n;
printf("enter the size of array");
scanf("%d",&n);
for(int i=0;i<=1;i++){
scanf("%d",&a[i]);
}
int pos;
printf("enter the position:");
scanf("%d",&pos);
int ele;
printf("enter the element:");
scanf("%d",&ele);
for(int i=0;i<pos-1;i++){
a[i]=a[i-1];
}
a[pos-1]=ele;
for(int i=0;i<n;i++){
printf("%5d",a[i]);
}
return;
}

