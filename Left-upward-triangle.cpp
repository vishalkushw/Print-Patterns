#include<iostream>
using namespace std;

int main() {
	int n;
	cout<<("Enter number of rows you want to display : ");
	cin>>n;
		
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=i; j++) {
			cout<<" *";
		}
		cout<<"\n";
	}
	
}


