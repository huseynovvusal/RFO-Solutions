// https://basecamp.eolymp.com/az/problems/8361
#include<bits/stdc++.h>
using namespace std;
int a[101][101],x=50,y=50;
int main(){
    string s;
	cin>>s;
	int r=0,q=0;
	a[x][y]=1;
	for(int i=0; i<s.size(); i++){
		if(s[i]=='R'){
			r++;
			if(r>3)
			r-=4;
		}
		else if(s[i]=='L'){
			r--;
			if(r<0)
			r+=4;
		}
		else if(s[i]=='S'){
			q++;
			if(r==0){
				if(a[x+1][y]==1){
					cout<<q;
					return 0;
				}
				else{
					a[x+1][y]=1;
					x++;
				}
			}
			else if(r==1){
				if(a[x][y+1]==1){
					cout<<q;
					return 0;
				}
				else{
					a[x][y+1]=1;
					y++;
				}
			}
			else if(r==2){
				if(a[x-1][y]==1){
					cout<<q;
					return 0;
				}
				else{
					a[x-1][y]=1;
					x--;
				}
			}
			else if(r==3){
				if(a[x][y-1]==1){
					cout<<q;
					return 0;
				}
				else{
					a[x][y-1]=1;
					y--;
				}
			}
		}
	}
	cout<<-1;	
}