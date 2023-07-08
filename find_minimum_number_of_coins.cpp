#include <iostream>
using namespace std;

string smallestStr(string str, int n){
	int i, j;
	int chk[26];
	for(i=0; i<26; i++){
		chk[i]=-1;
    }
	for(i=0; i<n; i++){
		if(chk[str[i]-'a']==-1){
			chk[str[i]-'a']=i;
		}
	}
	for(i=0; i<n; i++){
		bool flag=false;
		for(j=0; j<str[i]-'a'; j++){
			if(chk[j]>chk[str[i]-'a']){
				flag=true;
				break;
			}
		}
		if(flag){
			break;
		}
	}
	if(i<n-1){
		char ch1=str[i];
		char ch2=char(j+'a');
		for(i=0; i<n; i++){
			if(str[i]==ch1){
				str[i]=ch2;
            }
			else if(str[i]==ch2){
				str[i]=ch1;
			}
		}
	}
	return str;
}

int main(){
	string str;
	cin>>str;
	int n=str.length();
	cout<<smallestStr(str, n);
	return 0;
}

