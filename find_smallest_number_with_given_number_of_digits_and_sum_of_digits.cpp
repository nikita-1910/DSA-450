#include <iostream>
using namespace std;
void findSmallest(int s, int d){
	if(s==0){
		if(d==1){ 
		    cout<<"Smallest number is "<<0;
		}
		else{
		    cout<<"Not possible";
		}
		return;
	}
	if(s>9*d){
		cout<<"Not possible";
		return;
	}
	int res[d];
	s-=1;
	for(int i=d-1; i>0; i--){
		if(s>9){
			res[i]=9;
			s-=9;
		}
		else{
			res[i]=s;
			s=0;
		}
	}
	res[0]=s+1; 
	cout<<"Smallest number is ";
	for(int i=0; i<d; i++)
		cout<<res[i];
}

int main(){
	int s, d;
	cin>>s>>d;
	findSmallest(s, d);
	return 0;
}

