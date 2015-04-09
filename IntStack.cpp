#include<iostream>
using namespace std;

#define MAXN 100

class intStack{
	int Num[MAXN];
	int Dep;
public:
	intStack(){	
		clear();
		}
	int depth(){
		return Dep;
		}
	void push(int a){
		Num[Dep]=a;
		Dep++;
		}
	int pop(){
		return Num[Dep--];
		}
	void clear(){
		Dep=0;
		memset(Num,0,sizeof(Num));
		}
	void print(){
		cout<<"Top"<<endl;
		for(int i=Dep;i>=0;i--){
			cout<<Num[i]<<endl;
			}
		cout<<"Rear"<<endl;
		}
	};

int main(){
	int x=0,num=0,flag=1;
	intStack intstack;
	while(flag){
		system("cls");
		cout<<"1.push"<<endl<<"2.pop"<<endl<<"3.depth"<<endl<<"4.clear"<<endl<<"5.print all"<<endl;
		cin>>x;
		switch(x){
			case 1:cin>>num;intstack.push(num);break;
			case 2:cout<<intstack.pop()<<" pop"<<endl;break;
			case 3:cout<<intstack.depth();break;
			case 4:intstack.clear();break;
			case 5:intstack.print();break;
			default:flag=0;break;
			}		
		}
	return 0;
}
