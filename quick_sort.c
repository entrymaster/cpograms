#include<stdio.h>
void swap(int *i,int *j){
	int temp = *i;
	*i = *j;
	*j = temp;
}
int partition(int *ar,int l,int r){
	int pivot = ar[r];
	int j,i = l-1;
	for(j=l;j<=r-1;j++){
		if(ar[j] < pivot){
			i++;
			swap(ar+j,ar+i);
		}
	}
	swap(ar+r,ar+i+1);
	return i+1;
}
void qs(int *ar,int l,int r){
	int p;
	if(l>=r)
	return;
	p = partition(ar,l,r);
	qs(ar,l,p-1);
	qs(ar,p+1,r);
}
int main(){
	int n,i;
	printf("Enter size of array : ");
	scanf("%d",&n);
	int ar[n];
	for(i=0;i<n;i++){
		printf("Enter element %d : ",i);
		scanf("%d",&ar[i]);
	}
	qs(ar,0,n);
	for(i=0;i<n;i++){
		printf("%d ",ar[i]);
	}
}
