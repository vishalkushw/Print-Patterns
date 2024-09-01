#include<iostream>
using namespace std;

int main() {
	int n;
	cout<<("Enter number of rows that you want to display : ");
	cin>>n;

		
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=i; j++) {
			cout<<("*");
		}
		
		for(int k=i; k<n ; k++) {
			cout<<" ";
		}
		
		for(int m=i; m<n; m++) {
		cout<<" ";
		}
		
		for(int l=(1); l<=i; l++) {
			cout<<"*";
		}
	
		cout<<"\n";
	}
}
