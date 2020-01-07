#include<iostream>
using namespace std;

string mixText(string a,string b){
	string x=a;
	int L1=a.size();
	string y=b;
	int L2=b.size();
	
	if(L1==L2){
		int i=0;
		while(i<L1){
			cout<<a[i]<<b[i];
			i++;
		}
	}else{
		cout<<"E";
	}
	return "";
}



int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}
