#include<iostream>
using namespace std;

int main(){
	int N;
	cout << "Enter the number of student: ";
	cin >> N;
	
	string name[N];
	int age[N];
	int x=0;
	while(x<N){
		cout << "Name of student = ";
		cin >> name[x];
		cout << "Age of student = ";
		cin >> age[x];
		x++;
	}
	int key;
	cout << "--------------------------------------\n";
	cout << "Enter an age to search: ";
	cin >> key;
	cout << "--------------------------------------\n";
	int i=0;
	while(i<N){
		if(key==age[i]){
			cout<<name[i]<<"\n";
			i++;
		}
		else{
			i++;
		}
	}

	
	cout << "--------------------------------------\n";
	
	return 0;
}
