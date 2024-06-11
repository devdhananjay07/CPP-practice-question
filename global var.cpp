#include<iostream>
using namespace std;

int global=10;
void sample() {
	int local=5;
	cout<<"Local variable: "<<local<<endl;
	global +=5;
	cout<<"Global var (mod): "<<global<<endl;
}
int main() {
	cout<<"Global var"<<global<<endl;
//	global();
	cout<<"Global var(after): "<<global<<endl;
	return 0;
}
