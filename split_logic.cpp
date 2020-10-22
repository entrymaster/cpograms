#include<iostream>
#include<string>
using namespace std;
void split(int *ar,int *count,string str1){
	int idx = 0,i;
	for(i = 0;i < *count;i++){
		ar[i] = 0;
		while(idx < strlen(str1))
		{
			if(str1[idx] == ' '){
				idx++;
				break;
		}
			else{
				ar[i] = ar[i]*10 + ((int)str1[idx]-48);
				idx++;
		}
	}
	}
}
int main(){
	int n;
	cout << "Enter count of numbers : ";
    cin >> n;
	string s;
	cout << "Enter a string : ";
	cin >> s;
	int ar[n];
	split(ar,n,s);
	for(i=0;i<n;i++){
		printf("%d\n",ar[i]);
}
