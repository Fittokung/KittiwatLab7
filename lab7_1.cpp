#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y;
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

int main(){
	string word;
    cout << "Input text: ";
	cin >> word;
    cout << "Reversed text: " << func1(word) << endl;
	if(func2(func1(word)) == func2(word)){
		cout << "Palindrome: Yes";
	}else{
		cout << "Palindrome: No";
	}
    return 0;
}
