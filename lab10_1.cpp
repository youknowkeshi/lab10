#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>
using namespace std;
int main()
{
	cout << "Press Enter 3 times to reveal your future.";
	srand(time(0));
	cin.get();
	cin.get();
	cin.get();
	string x[] = {"A","B+","B","C+","C","D+","D","F","W"};
	int i = rand()%9;
	cout << "You will get " << x[i] << " " << "in this 261102." ;
}