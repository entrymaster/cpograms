#include<iostream>
using namespace std;
int max(int *ar,int idx){   // max returns position of largest element in an array
	int max=0;
	for(int i=0;i<idx;i++){
		if(ar[i] > ar[max])
		max = i;
	}
	return max;
}
void freq(int n){   // freq() will count freq of all digits display most freq one/ones
	int d;
	int deg_freq[10];
	for(int i=0;i<10;i++)    // assigning 0 to all elemets initailly
		deg_freq[i] = 0;
	while(n>0){      // this will add freq of digits in dgt_count respectively
		d = n%10;
		deg_freq[d]+=1;
		n/=10;
	}
	int m = max(deg_freq,10);
	cout<<"Most freq number : "<<m;
}
int main(){
	int n;
	cout<<"Enter the number: ";
	cin >> n;
	freq(n);
}
