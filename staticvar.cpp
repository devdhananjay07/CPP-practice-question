#include<iostream>
using namespace std;
int count(){
	static int count=1;
	cout<<"function called "<<count<<" times"<<endl;
	return count++;
}
int main(){
	count();
	count();
	return 0;
}
