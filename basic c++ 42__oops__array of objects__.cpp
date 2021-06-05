#include<iostream>
using namespace std;
class shop_item{
	int piano,guri;
	public:
		void set_data(int s1,int s2){
			piano=s1;
			guri=s2;
		}
		void print_data(){
			cout<<"the value of piano is "<<piano<<endl;
			cout<<"the value  of guri is"<<guri<<endl;
		}
		
};
int main(){
	int size=3,pop,wow,i=0;
	shop_item *bigbazar= new shop_item[size];
    shop_item *neo_india= bigbazar;
	for(i=0;i<size;i++){
		cout<<"enter id and priece for item no"<<i+1<<endl;
		cin>>pop>>wow;
		bigbazar->set_data(pop,wow);
		bigbazar++;
	}
	
	for(i=0;i<size;i++){
		cout<<"the value of item no"<<i+1<<endl;
		neo_india->print_data();
		neo_india++;
	}
	
	return 0;
}
