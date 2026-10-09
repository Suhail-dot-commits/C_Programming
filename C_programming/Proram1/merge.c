#include<stdio.h>
void main()
{
int ar1[20],ar2[20],ar3[40];
int m,n;
void readarry(int[],int);
void printarry(int[],int);
void merge(int[],int[],int,int)
printf("no of elements in 1 st array[1-20]:");
scanf("%d",&m);
printf("enter elemnts in non decreasing order:");
readarray(ar1,m);

print("Enter elemnts in 2st array:")
scanf("%d",&n);

print("enter elemnts in non decreasing order:")
readeaary(ar2,n);
merge(ar1,ar2,ar3,m,n);
print("merged array: \n");
printarray(ar3,m+n);
}
void readarray(int a[],int n)
{
int i;
for(i=0;i<n;++1)
scanf("&d",ar[i]);
return ;
}
void merge(int a[],int b[],int c[],int m[],int n[])
{
int i,j,k;
i=j=k=0;
while(i<m&&j<n)
if(a[i]<b[j])
{
c[k]=a[i];
i=i+1,k=k+1;
}
else
{
c[k]=b[j];
j=j+1;
k=k+1;

}


while(i<m)
c[k++]=a[i++]
while(j<n)
c[k++]=b[j++];
}








