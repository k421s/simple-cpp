#include<iostream>
#include <string>
using namespace std;

struct Toppings {
   string  name;
   int  QOH;
   int cost;

}topping[10]; 

struct CrustTypes {
   string  name;
   int  QOH;
   int cost;
}crust[3]; 



struct PizzaSize {
   string  name;
   int  size;
   int noOfSlices;
   int price;

}pizza[6]; 

void populateData(){

	// Pizza Toppings
	topping[0].name=" Cheese ";
	topping[1].name=" Pepperoni ";
	topping[2].name=" Mushroom * ";
	topping[3].name=" Onions * ";
	topping[4].name=" Sausage * ";
	topping[5].name=" Hamburger ";
	topping[6].name=" Bacon Bits * ";
	topping[7].name=" Black Olives ";
	topping[8].name=" Green Peppers ";
	topping[9].name=" Pineapple * ";

	topping[0].QOH= 200;
	topping[1].QOH= 100;
	topping[2].QOH= 100;
	topping[3].QOH= 100;
	topping[4].QOH= 100;
	topping[5].QOH= 100;
	topping[6].QOH= 100;
	topping[7].QOH= 100;
	topping[8].QOH= 100;
	topping[9].QOH= 50;

	topping[0].cost= 0;
	topping[1].cost= 0;
	topping[2].cost= 1;
	topping[3].cost= 1;
	topping[4].cost= 0;
	topping[5].cost= 0;
	topping[6].cost= 1;
	topping[7].cost= 0;
	topping[8].cost= 0;
	topping[9].cost= 1;


	// Pizza Crust Types
	crust[0].name="Thin Crust";
	crust[1].name="Flatbread";
	crust[2].name="Thick Crust *";
	
	crust[0].QOH=100;
	crust[1].QOH=100;
	crust[2].QOH=100;

	crust[0].cost=0;
	crust[1].cost=0;
	crust[2].cost=2;

	//Pizza Sizes
	pizza[0].size=8;
	pizza[1].size=10;
	pizza[2].size=12;
	pizza[3].size=14;
	pizza[4].size=16;
	pizza[5].size=18;

	pizza[0].noOfSlices=6;
	pizza[1].noOfSlices=16;
	pizza[2].noOfSlices=8;
	pizza[3].noOfSlices=10;
	pizza[4].noOfSlices=10;
	pizza[5].noOfSlices=12;


	pizza[0].price=10;
	pizza[1].price=10;
	pizza[2].price=12;
	pizza[3].price=14;
	pizza[4].price=14;
	pizza[5].price=16;

	pizza[0].name=" Personal Pan  ";
	pizza[1].name=" Small ";
	pizza[2].name=" Medium ";
	pizza[3].name=" Large ";
	pizza[4].name=" Extra Large ";
	pizza[5].name=" NY Style ";



}

	void orderPizza(){
		int pizzaNo;
		bool flag=true;
		int crustNo;
		int toppingNo[10];
		int count=0;
		double Total=0;
		double individual;
		int NoOfPeople;
		char choice;

while(flag){
		cout<<"\n Welcome to Pizza Parlor, please enter a number from 1 to 6 to indicate the size pizza you want\n ";
		cin>>pizzaNo;
	

		
		switch (pizzaNo){
		
			case 1:
				cout<<" You have chosen to order a Personal Pan Pizza. This will feed 6 people ";
				flag=false;
				break;
			case 2:
				cout<<" You have chosen to order a Small Pizza. This will feed 6 people ";
				flag=false;
				break;
			case 3:
				cout<<" You have chosen to order a Medium Pizza. This will feed 8 people ";
				flag=false;
				break;
			case 4:
				cout<<" You have chosen to order a Large Pizza. This will feed 10 people ";
				flag=false;
				break;
			case 5:
				cout<<" You have chosen to order a Extra Large Pizza. This will feed 10 people ";
				flag=false;
				break;
			case 6:
				cout<<" You have chosen to order a NY Style  Pizza. This will feed 12 people ";
				flag=false;
				break;

			default:
				cout<<"\nYou made wrong choice. Please select again";

				break;
			}
		}

		Total+=pizza[pizzaNo-1].price;
		

		flag=true;

while(flag){
		cout<<" \n\n Please enter a number from 1 to 3 to indicate the type of crust you want.\n ";

		cin>>crustNo;
		
		switch (crustNo){
		
			case 1:
				cout<<" You have chosen Thin Crust as your crust ";
				flag=false;
				break;
			case 2:
				cout<<" You have chosen Flatbread as your crust ";
				flag=false;
				break;
			case 3:
				cout<<" You have chosen Thick Crust as your crust ";
				flag=false;
				break;

			default:
				cout<<"\nYou made wrong choice. Please select again";

				break;
			}
		}

Total+=crust[crustNo-1].cost;

		flag=true;
		count=0;
while(flag){
		cout<<" \n\n  Please enter a number from 1 to 10 to indicate what toppings you would like on your pizza\n ";
		
		cin>>toppingNo[count];
		
		switch (toppingNo[count]){
		
			case 1:
				cout<<" You have added cheese to your order. ";
				flag=false;
				break;
			case 2:
				cout<<" You have added Pepperoni to your order. ";
				flag=false;
				break;
			case 3:
				cout<<" You have added Mushroom to your order. ";
				flag=false;
				break;

			case 4:
				cout<<" You have added Onions to your order. ";
				flag=false;
				break;
			case 5:
				cout<<" You have added Sausage to your order. ";
				flag=false;
				break;
			case 6:
				cout<<" You have added Hamburger to your order. ";
				flag=false;
				break;

			case 7:
				cout<<" You have added Bacon Bits to your order. ";
				flag=false;
				break;
			case 8:
				cout<<" You have added Black Olives to your order. ";
				flag=false;
				break;
			case 9:
				cout<<" You have added Green Peppers  to your order. ";
				flag=false;
				break;

				case 10:
				cout<<" You have added Pineapple to your order. ";
				flag=false;
				break;

			default:
				cout<<"\nYou made wrong choice. Please select again";

				break;
			}
		Total+=topping [toppingNo[count]-1].cost;
		cout<<"Would you like to add more toppings (Y = Yes N = N) ";
		cin>>choice;
		if(choice=='Y' || choice=='y'){
			count++;
		flag=true;
		}

		}

//for(int i=0;i<count-1 ;i++){
//	Total+=topping [toppingNo[i-1]].cost;
//}


		flag=true;

while(flag){
		cout<<" \n\n  Please enter the number of guests you have in your party. \n ";
		
			//cout<<"\n\t count is is "<<count<<endl;
		cin>>NoOfPeople;
		
		if (NoOfPeople<=pizza[pizzaNo-1].noOfSlices){
		
			cout<<pizza[pizzaNo-1].size;

			cout<<"\n\n \t\t Great We are serving Pizza for "<<NoOfPeople<<". Please Wait.";

			cout<<"\n\n your total for today’s order at the Pizza Parlor was $"<< Total <<" \n";

			cout<<"\n\n Would you like an itemized list of your order? (Y = Yes N = No)  \n";
	
		cin>>choice;
		if(choice=='Y' || choice=='y'){
			cout<<"\n\n";
			cout<<pizza[pizzaNo-1].name<<"  $"<<pizza[pizzaNo-1].price;
			
			cout<<"\n\n";
			cout<<crust[crustNo-1].name<<"  $"<<crust[crustNo-1].cost;
			crust[crustNo-1].QOH--;
			for(int i=0;i<=count ;i++){
				cout<<"\n\t \333 "<<topping [toppingNo[i]-1].name <<"  $"<<topping [toppingNo[i]-1].cost<<endl;
				topping [toppingNo[i]-1].QOH--;
				}

		
		}
		

		cout<<"\n\n Thank you for eating at the Pizza Parlor! Please come again soon! ";
		cout<<"\n\n My total revenue for the night was $"<<Total;
		flag=false;

		}
		else{
		cout<<"\n  I am sorry you must enter a number less than or equal to "<< pizza[pizzaNo].size <<" for a large pizza. \n";
		

		}
		}



	}


	void DisplayQOH(){

		cout<<" \n Toppings   QOH\n";
		for(int i=0;i<10;i++){

			cout<<" \n "<<topping[i].name<<"  "<<topping[i].QOH;

		}
		cout<<" \n\n\n Crust   QOH\n";
			for(int i=0;i<3;i++){

				cout<<" \n "<<crust[i].name<<"  "<<crust[i].QOH;

		}
	
	}

int main (){


	populateData();
	orderPizza();
	DisplayQOH();


	


return 0;
}
