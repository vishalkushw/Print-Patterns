// 02 Character pertern

#include <iostream>
 using namespace std;
 int main(){
	int n;
	cout<<" enter number : ";
	cin>>n;
	
	for(int i =1 ; i<=n; i++){
		
		for(int j=1 ;j<=n;j++){
			cout<<(char)(j+64);
		}
		cout<<endl;
	}
}

//n=4
//ABCDEF
//ABCDEF
//ABCDEF
//ABCDEF
