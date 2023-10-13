#include<stdio.h>
void main(){
int a[100];
int n;
printf("enter the size of array");
scanf("%d",&n);
for(int i=0;i<=n;i++){
scanf("%d",&a[i]);
}
int pos;
printf("enter the positon");
scanf("%d",&pos);
for(int i=pos-1;i<n-1;i++){
a[i]=a[i+1];
}
for(int i=0;i<=n;i++){
printf("%5d",a[i]);
}
return;
}
