#include<stdio.h>
#include<string.h>
void insert_at_beg(int a[],int n){ int m;
printf("enter number to be insert\n"); scanf("%d",&m);
for(int i=0;i<n;i++){

a[n-i]=a[n-i-1];
}

a[0]=m;
printf("modify array is\n"); for(int i=0;i<=n;i++){
printf("%d ",a[i]);
}
printf("\n");

}
void insert_at_end(int a[],int n){ int m;
printf("enter number to be insert\n"); scanf("%d",&m);
a[n]=m;
printf("modify array is\n"); for(int i=0;i<=n;i++){
printf("%d ",a[i]);
}

printf("\n");
}

void insert_at_location(int a[],int n)

{

int m,l;
printf("enter number to be inserted\n"); scanf("%d",&m);
printf("enter the position where number should be inserted\n"); scanf("%d",&l);
for(int i=0;i<=l;i++){

a[n-i]=a[n-i-1];
}

a[l]=m;
printf("modify array is\n"); for(int i=0;i<=n;i++){
printf("%d ",a[i]);
}
printf("\n");

}
void delete_at_beg(int a[],int n){ printf("modify array is\n"); for(int i=1;i<n;i++){
printf("%d ",a[i]);
}
printf("\n");
}
void delete_at_end(int a[],int n){ printf("modify array is\n"); for(int i=0;i<=n-2;i++){
printf("%d ",a[i]);
}

printf("\n");
}
void delete_at_location(int a[],int n){

int m,l;
printf("enter the position where number should be deleted\n"); scanf("%d",&l);
for(int i=1;i<n;i++){ a[i]=a[i+1];
}
printf("modify array is\n"); for(int i=0;i<=n-2;i++){
printf("%d ",a[i]);
}
printf("\n");


}
void ascending(int a[], int n){ int temp;
for(int i=0;i<=n-1;i++){ for(int j=0;j<=n-2;j++){
if(a[j]>a[j+1]){ temp=a[j]; a[j]=a[j+1]; a[j+1]=temp;
}
}
}
printf("modify array is\n"); for(int i=0;i<n;i++){
printf("%d ",a[i]);
}

printf("\n");
}
void descending(int a[], int n){

int temp;
for(int i=0;i<=n-1;i++){ for(int j=0;j<=n-2;j++){
if(a[j]<a[j+1]){ temp=a[j]; a[j]=a[j+1]; a[j+1]=temp;
}
}

}
printf("modify array is\n"); for(int i=0;i<n;i++){
printf("%d ",a[i]);
}
printf("\n");

}
void search(int a[], int n){ int count=0,m;
int i;
printf("enter number to be searched\n"); scanf("%d",&m);
for(i=0;i<n;i++){ if(m==a[i]){
count++;

break;
}

}
if(count){
printf("%d element is present at %d position\n",m,i);
}
else{

printf("entered number is not present in given array\n");

}
}
void merge(int a[],int n){ int b[100],c[100];
int m,k=0;
printf("enter the length of an array to be merge\n"); scanf("%d",&m);
printf("enter the array to be merge one by one\n"); for(int i=0;i<m;i++){
scanf("%d",&b[i]);
}
for(int i=0;i<n;i++){ c[k]=a[i];
k++;
}for(int i=0;i<m;i++){ c[k]=b[i];
k++;
}
printf("modify array is\n"); for(int i=0;i<n+m;i++){
printf("%d\n",c[i]);
}


}
void dublicate(int a[], int n){ int k=0;
for(int i=0;i<n;i++){ for(int j=i+1;j<n;j++){
if(a[i]==a[j]){
for(int k=j;k<n-1;k++){

a[k]=a[k+1];

}
n--;
j--;

}

}
}
printf("modify array is \n"); for(int i=0;i<n;i++){
printf("%d ",a[i]);
}

printf("\n");
}

void traverse(int a[], int n){ printf("Entered aray is\n"); for(int i=0;i<n;i++){
printf("%d ",a[i]);
}
}
int main(){
int x,a[100],n;
printf("enter number of elements\n"); scanf("%d",&n);
printf("enter an array one by one\n"); for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
do{
printf("press 0 for quit\n"); printf("press 1 for insert at beg\n"); printf("press 2 for insert at end\n");

printf("press 3 for insert at given location\n"); printf("press 4 for delete at beg\n");  printf("press 5 for delete at end\n"); printf("press 6 for delete from given location\n"); printf("press 7 for search\n");
printf("press 8 for merge\n");
printf("press 9 for sorting ascending order\n"); printf("press 10 for sorting descending order\n"); printf("press 11 for removing duplicate\n\n"); printf("press 12 for traversing through array\n"); printf("enter your option\n");
scanf("%d",&x);


switch (x)
{
case 1:insert_at_beg(a,n);break; case 2:insert_at_end(a,n);break; case 3:insert_at_location(a,n);break; case 4:delete_at_beg(a,n);break; case 5:delete_at_end(a,n);break;
case 6:delete_at_location(a,n);break; case 7:search(a,n);break;
case 8:merge(a,n);break; case 9:ascending(a,n);break;
case 10:descending(a,n);break; case 11:dublicate(a,n);break; case 12:traverse(a,n);break;

}

}while(x!=0);





return 0;
}
