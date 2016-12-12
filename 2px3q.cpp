#include <iostream>
#include <map>
#include <set>
#include <utility> 
#include <algorithm>
#include <vector>
#include <string>
#include <cstdio>
#include <math.h> 
using namespace std;

void wypisz(vector<int> zbior){
	vector<int> :: iterator it;
	for(it=zbior.begin(); it!=zbior.end(); it++) {
		//cout <<"_" << (*it).first << "_" << (*it).second << endl;
		printf("_%d_\n",*it);
		//printf("_%d_\n",it);
	}
}

void wypisz(set<int> zbior){
	set<int> :: iterator it;
	for(it=zbior.begin(); it!=zbior.end(); it++) {
		//cout <<"_" << (*it).first << "_" << (*it).second << endl;
		printf("_%d_\n",*it);
		//printf("_%d_\n",it);
	}
}

void wypisz(vector< pair<int,int> > zbior){
	vector< pair<int,int> > :: iterator it;
	for(it=zbior.begin(); it!=zbior.end(); it++) {
		//cout <<"_" << (*it).first << "_" << (*it).second << endl;
		printf("_%d_%d_\n",(*it).first, (*it).second);
		//printf("_%d_\n",it);
	}
}

void wypisz(set< pair<int,int> > zbior){
	set< pair<int,int> > :: iterator it;
	for(it=zbior.begin(); it!=zbior.end(); it++) {
		//cout <<"_" << (*it).first << "_" << (*it).second << endl;
		printf("_%d_%d_\n",(*it).first, (*it).second);
		//printf("_%d_\n",it);
	}
}

int main() {
	
	vector<int> zbior;
	vector< pair<int,int> > zbior2;
	set< pair<int,int> > zbior3;
	set<int> zbior4;
	pair<int,int> dwa;
	pair<int,int> trzy;
	int d[4];
	d[0]=0;d[1]=0,d[2]=0;d[3]=0;
	int t[4];
	t[0]=0;t[1]=0;t[2]=0;t[3]=0;
	
	zbior4.insert(1);
	
	int a1,a2,a3,a4,a1a2,a3a4;
	
	while(zbior4.size() != 10){
		a1=pow(2,d[0])*pow(3,t[0]+1);
		a2=pow(2,d[0]+1)*pow(3,t[0]);
		a3=pow(3,d[1])*pow(2,t[1]+1);
		a4=pow(3,d[1]+1)*pow(2,t[1]);
		if( a1 <= a2 ) {
			t[0]+=1;
			//zbior4.insert(a1);
			a1a2=a1;
			cout << "a1=" << a1 << " a2=" << a2 << endl;
		}else{
			d[0]+=1;
			//zbior4.insert(a2);
			a1a2=a2;
			cout << "a1=" << a1 << " a2=" << a2 << endl;
		}
		
		if( a3 <= a4 ) {
			t[1]+=1;
			//zbior4.insert(a1);
			a3a4=a3;
			cout << "a3=" << a3 << " a4=" << a4 << endl;
		}else{
			d[1]+=1;
			//zbior4.insert(a2);
			a3a4=a4;
			cout << "a3=" << a3 << " a4=" << a4 << endl;
		}
		
		if(a1a2 <= a3a4){
			if(a3 <= a4){
				t[1]-=1;
			}else{
				d[1]-=1;
			}
			zbior4.insert(a1a2);
		}else{
			if(a1 <= a2){
				t[0]-=1;
			}else{
				d[0]-=1;
			}
			zbior4.insert(a3a4);
		}
		cout << "d[0]=" << d[0] << " t[0]=" << t[0] << " d[1]=" << d[1] << " t[1]=" << t[1] << endl;
	}

	wypisz(zbior4);
	
	//zbior.push_back(1);
	//zbior.push_back(3);
	//zbior.push_back(2);	
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			zbior.push_back(pow(2,i)*pow(3,j));
		}
	}
	
	//wypisz(zbior);
	sort(zbior.begin(),zbior.end());
	wypisz(zbior);
	cout << "." << zbior.at(10) << endl;
		

	

	return 0;
}
