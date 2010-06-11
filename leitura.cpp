#include<iostream>
using namespace std;

int main(){
	string line;
	int i = 0;
	
	while( getline(cin,line) ){
		cout << "task ";
		for( i = 0; line[i] != ' ' ; i++)
			cout << line[i];
		if(line[++i] == 't')
			cout << ": cost 0";
		else
			cout << ": cost " << line[i];
		cout << endl;
	}
	
	return 0;
}