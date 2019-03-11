#include<bits/stdc++.h>
using namespace std;
int main(){
	string ins,operand;
	long long n;
	long long* num;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> ins >> operand;
		if(ins == "CLEAR")
			num = NULL;
		else if(ins == "NUM")
			*num = atoll(operand.c_str());
		else if(ins == "ADD")
			*num += atoll(operand.c_str());
		else if(ins == "SUB")
			*num -= atoll(operand.c_str());
		else if(ins == "MUL")
			*num *= atoll(operand.c_str());
		else if(ins == "")
	}
	return 0;
} 
