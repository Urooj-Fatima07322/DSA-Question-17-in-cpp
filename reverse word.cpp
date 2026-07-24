#include<iostream>
#include <algorithm>
using namespace std;

string reverseWord(string s,int len){
	string ans="";
	reverse(s.begin(),s.end());
	for(int i=0;i<len;i++){
		string word="";
		while(i<len&&s[i]!=' '){
			word+=s[i];
			i++;
		}
		reverse(word.begin(),word.end());
		if(word.length()>0){
			ans+=word+" ";
		}
	}
	return ans;
}

int main(){
	string s="the sky is blue";
	int len=s.length();
	string reverse=reverseWord(s,len);
	cout<<"the reverse of the string is: "<<reverse<<endl;
	return 0;
}