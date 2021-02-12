#include<iostream>
using namespace std;


class myMoney{
	public:
		int myHouse(int price);
};


int myMoney::myHouse(int price){
	cout<<"I have a house of Rs "<<price;
}

int main(){
	myMoney Obj;
	cout<<Obj.myHouse(3500000);
	return 0;}
