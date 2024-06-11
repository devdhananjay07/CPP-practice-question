#include<iostream>
using namespace std;

int main() {
	int marks1=90;
	int marks2=95;
	int marks3=86;
	int totalmarks;
	float percentage;
	char grade;
	totalmarks=marks1+marks2+marks3;
	percentage=(totalmarks/300.0)*100;
	cout<<"percentage="<<percentage<<"%"<<endl;
}
