// #include <bits/stdc++.h>
// using namespace std;
// // 	pair<int ,int > p[3];
// // 	p[0] =  {1,2};
// // 	p[1] = {2,3};
// // 	p[2] = {3,4};
// // 	for(int  i = 0;i<3;i++){
// // 		cout<<p[i].first<<" "<<p[i].second<<endl;
// // 	}
// // }
// 	// int n;
// 	// cin>>n;
// 	// vector<int >v(n);
// 	// for(int i  =0 ;i<n;i++){
// 	// 	cin>>v[i];
// 	// }
// 	// for(int i  =0;i<n;i++){
// 	// 	cout<<v[i]<<" ";
// 	// }
// 	// cout<<v.size();
// //  	void printVec(vector<pair<int,int>> &p){
// //  		for(int i = 0;i<p.size();i++){
// //  			cout<<p[i].first<<" "<<p[i].second<<endl;
// //  		}
// //  	}
// // int main(){
// // 	// vector<pair<int,int>>p;
// // 	// int n ; 
// // 	// cin>>n;
// // 	// for(int i= 0;i<n;i++){
// // 	// 		int x,y;
// // 	// 		cin>>x>>y;
// // 	// 		p.push_back({x,y});
// // 	// }
// // 	// printVec(p);

// // }
// void printVec(vector<int> &p){
// 		for(int i = 0;i<p.size();i++){
//   			cout<<p[i]<<" ";
// 		}
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	vector<int >p[n];
// 	for(int i = 0;i<n;i++){
// 		int N;
// 		cin>>N;
// 		for(int j = 0;j<N;j++){
// 			int x;
// 			cin>>x;
// 			p[i].push_back(x);
// 		}
// 	}
// 	for(int i=0;i<n;i++){
// 	printVec(p[i]);
// }
// }
// #include<bits/stdc++.h>
// using namespace std;
// void printVec(vector<int> &v){
//  		for(int i = 0;i<v.size();i++){
//   			cout<<v[i]<<" ";
//   		}
//   	}
// int main(){
// 	int N;
// 	cin>>N;
// 	vector<vector<int>>v;
// 	for(int i = 0;i<N;i++){
// 		int n ;
// 		cin>>n;
// 		v.push_back(vector<int> ());
		
// 		for(int j = 0;j<n;j++){
// 			int x;
// 			cin>>x;
// 			v[i].push_back(x);
// 		}
		
// 		for(int  i =0;i<N;i++){
// 			printVec(v[i]);
// 		}
// 	}
// }
// #include<bits/stdc++.h>

// using namespace std;
// int main(){
// 	vector<int>v = {1,2,3,4,5};
// 	for(int i = 0;i<v.size();i++){
// 		cout<<v[i]<<" ";
// 	}
// 	cout<<endl;
// 	vector<pair<int , int>> v_p = {{1,2},{2,3},{3,4}};
// 	vector<pair<int ,int>>:: iterator it;
// 	for(auto &value: v_p){
// 		cout<<(value.first)<<" "<<(value.second)<<endl;
// 	}

// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// 	map<int,string>m;
// 	m[1] = "abc";
// 	m[2] = "cdv";
// 	m[5] = "rdf";
// 	m.insert({4,"trt"});
// 	map<int,string>:: iterator it;
// 	for(auto par:m){
// 		cout<<(par).first<<" "<<(par ).second<<endl;
// 	}


// 	map<string,int> m;
// 	int n;
// 	cin>>n;
// 	for(int i  = 0;i<n;i++){
// 		string s;
// 		cin>>s;
// 		m[s]++;

// 	}
// 	for(auto it:m){
// 		cout<<(it).first<<" "<<(it).second<<endl;
// 	}

// }

// #include <iostream>
	// using namespace std;
// using namespace std;
// int main(){
// int a,b,c; 
// cin>>a>>b>>c;

// }
// void print(set<string>&s){
// 	for(string value: s){
// 		cout<<value<<endl;
// 	}
// }

// int main( ){
	// set<string>s;
	// s.insert("abc");
	// s.insert("zsdf");
	// s.insert("s;ldk");
	// s.insert("sdff");
	// auto it = s.find("abc");
	// print(s); 
	// cout<<*it<<endl;
// 	unordered_set<string>s;
// 	int n;
// 	cin>>n;
// 	for(int i = 0 ;i<n;i++){
// 		string str;
// 		cin>>str;
// 		s.insert(str);
// 	}
// 	int q;
// 	while(q--){
// 		string str;
// 		cin>>str;
// 		if(s.find(str)==s.end()){
// 			cout<<"no"\n;
// 		}
// 	}
// 	for(auto value:s){
// 		cout<<value<<endl;
// 	}
// }
// std::cout<<"hello";
// return 0 ;
// }
// #include <iostream>
// using namespace std;
// int main() {
//   int a, b, c;
//   cout << "\n enter a&b=";
//   cin >> a >> b;
//   c = a + b;
//   cout << "\n addition" << c;
//   c = a - b;
//   cout << "\n substraction" << c;
//   c = a * b;
//   cout << "\n multiplication" << c;
//   c = a / b;
//   cout << "\n division" << c;
//   return 0;
// }
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
double distance,  x1 ,x2 ,y1 ,y2;
cin>>x1>>x2>>y1>>y2;
distance = sqrt((x1-x2) *(x1-x2)+(y1-y2) *(y1-y2));
cout<<"distance="<<distance<<endl;
return 0;
}