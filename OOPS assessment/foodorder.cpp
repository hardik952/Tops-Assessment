#include<iostream>
using namespace std;
class info{
	public:
		string name;
		int getname()
		{
	cout<<"\t\t\t\t-----------Top Tech. Fast Food-------------\n"<<endl;
	cout<<"Please enter your name: ";
	cin>>name;
	cout<<"Hello "<<name<<endl;
        }
        int getchoice()
		{
		       // Select food from menu.
			cout<<"\nWhat would you like to order?\n"<<endl;
			cout<<"\t\t\t\t\t----------Menu---------\n"<<endl;
			cout<<"1) Pizza    2) Burger    3) Sandwich    4) Rolls    5) Biryani"<<endl; 
		}
};
class quantity:public info{
	public:
		int num,i,number,qty;
		char ans,Ans;
		int total=0;
		int totalamt=0;
		int getqty()
		{
			cout<<"\nPlease enter the choice: ";
			cin>>num;
		switch(num) // switch case for selelcted diffrert food
			{
		case 1:{
			//  Different Pizzas 
				cout<<"1. Margherita pizza   RS 300/-"<<endl;
				cout<<"2. Chessy 7 pizza     RS 300/-"<<endl;
				cout<<"3. Farm villa pizza   Rs 300/-"<<endl;
				cout<<"\nSelect which Pizza you would like to order: ";
				cin>>number;
			if(number>=1 && number<=3) // If condition for get Qauntity
			{
				cout<<"Please Enter Quantity: ";
				cin>>qty;
			for(i=1;i<=qty;i++) 
			{
				total= qty*300;
			}
    		}
			else{
				cout<<"Please Enter Correct Number.\nWould you like to start again y/n : "<<endl; // if you selected incorrect number
 				cin>>ans;
					if(ans=='y')
					{
						getchoice();
						getqty();
		           	}   	
		        }
			    break;
		    }
	   	case 2:{
		    	cout<<"1. Chees Burger       RS 170/-"<<endl;
				cout<<"2. Maxican Burger     RS 170/-"<<endl;
				cout<<"3. Chicken Burger     Rs 170/-"<<endl;	
				cout<<"\nSelect which Burger you would like to order: ";
				cin>>number;
			if(number>=1 && number<=3)
			{
				cout<<"Please Enter Quantity: ";
				cin>>qty;
			for(i=1;i<=qty;i++)
			{
				total= qty*170;
			}
			}
			else{
				cout<<"Please Enter Correct Number.\nWould you like to start again y/n : "<<endl;
				cin>>ans;
					if(ans=='y'){
						getchoice();
						getqty();
		               	}
		        }
			    break;
		    }
	   	case 3:{
		    	cout<<"1. Chees Grill Sandwich     RS 100/-"<<endl;
				cout<<"2. Chees Toast Sandwich     RS 100/-"<<endl;
				cout<<"3. Italian Sandwich         Rs 100/-"<<endl;
				cout<<"\nSelect which Sandwich you would like to order: ";	
		    	cin>>number;
			if(number>=1 && number<=3)
			{
				cout<<"Please Enter Quantity: ";
				cin>>qty;
			for(i=1;i<=qty;i++)
			{
				total= qty*100;
			}
			}
			else{
				cout<<"Please Enter Correct Number.\nWould you like to start again y/n : "<<endl;
				cin>>ans;
					if(ans=='y'){
						getchoice();
						getqty();
		               	}
		        }
			    break;
		    }
       	case 4:{
	       		cout<<"1. Chees Roll       RS 60/-"<<endl;
				cout<<"2. Chicken Roll     RS 60/-"<<endl;
				cout<<"3. Paneer Roll      Rs 60/-"<<endl;
				cout<<"\nSelect which Roll you would like to order: ";
		    	cin>>number;
			if(number>=1 && number<=3)
			{
				cout<<"Please Enter Quantity: ";
				cin>>qty;
			for(i=1;i<=qty;i++)
			{
				total= qty*60;
			}
			}
			else{
				cout<<"Please Enter Correct Number.\nWould you like to start again y/n : "<<endl;
				cin>>ans;
					if(ans=='y'){
						getchoice();
						getqty();
		               	}
		        }
			    break;
		    }
	    case 5:{
		    	cout<<"1. Veg Biryani         RS 260/-"<<endl;
				cout<<"2. Chicken Biryani     RS 260/-"<<endl;
				cout<<"3. Egg Biryani         Rs 260/-"<<endl;
				cout<<"\nSelect which Biryani you would like to order: ";
	       		cin>>number;
			if(number>=1 && number<=3)
			{
				cout<<"Please Enter Quantity: ";
				cin>>qty;
			for(i=1;i<=qty;i++)
			{
				total= qty*260;
			}
			}
			else{
				cout<<"Please Enter Correct Number.\nWould you like to start again y/n : "<<endl;
				cin>>ans;
					if(ans=='y'){
						getchoice();
						getqty();
		               	}
		        }
			    break;
		    }
	    default:
			{
				cout<<"Please Enter Correct Number: "<<endl;
				getchoice();
				getqty();
				break;
			}
    	}           	
    }
    	int getbill()
    	{
    		totalamt+=total; //total amount is for all total values
			cout<<"\nTotal Amount is: "<<totalamt<<endl;
			cout<<"\nWould you like to order anything else Y / N : ";
			cin>>Ans;
			if(Ans=='y' || Ans=='Y')
			{
				getchoice();
				getqty();
				getbill();
			}
			else{
				cout<<"\nYour Bill is: "<<totalamt<<" Rs/-"<<endl;
			    cout<<"Your Order will be delivered in 40 Minunts"<<endl;
				cout<<"Thank You for Ordering food from Tops Tech Fast Food"<<endl;
				
			}
		}
};
int main()
{
	info n;
	quantity q;
	n.getname();
	n.getchoice();
	q.getqty();
	q.getbill();
	return 0;
}

