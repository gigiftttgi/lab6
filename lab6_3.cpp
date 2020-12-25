#include<iostream>
using namespace std;

char before(char x){
	char re,an='0';
	if(x<='Z' and x>='A')
	{
		if(x=='A')
			{return 'Z';}
		re = x-1;
		return re;
	}
	else
		{return an;}
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
