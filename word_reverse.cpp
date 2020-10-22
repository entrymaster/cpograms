#include<iostream>
using namespace std;
int counter(string a){   // word size counting function
	int c = 0,i;
	while(a[i] != '\0'){
		c++;
		i++;
	}
	return c;
}
string reverse(string a,int n){    // word reverisng function
	for(int i=0,j=n-1;i<j;i++,j--){
		char temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
	return a;
}
int main(){
	string word , rev_word;
	cout << "Enter any word : ";
	cin >> word;           // Input your word 
	int c;
	c = counter(word);     // counter function call
	rev_word = reverse(word,c);   // word reversing function call
	cout << "Reverse word is : " << rev_word;    // printing the reversed word 
}
