#Gaurav More
#PRN: 10303320181124510065 [DA]

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,a,b,c;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
	 cin>>v[i];
    cin>>c;
    v.erase(v.begin()+(c-1));
    cin>>a>>b;
    v.erase(v.begin()+(a-1),v.begin()+(b-1));
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
	cout<<v[i]<<" ";
}
