//university cafe
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
using namespace std;

// Variables
float amount=0;		//for total amount
int size=0;			//total items in cart

//Store the items & generate bill
struct Items
{
	int id;
	char item[20];
	int qty;
	float rate;
	float amt;
}I[20];

//Function Prototyping
void drawLine();	//for presentation
void Header();		//for displaying title font in Invoice
void menu();		//for showing of items in menu
void showBill();	//fee bill

void drawLine()
{
	for(int i=1;i<50;i++)
		cout<<"_-_-";
	cout<<endl;
}

void Header()
{
	cout<<setw(10)<<"I.D: "
	    <<setw(20)<<"Product Name: "
	    <<setw(10)<<"Quantity Chosen: "
	    <<setw(10)<<"Price: "
		<<setw(10)<<"Amount: "
		<<endl;
}

void showBill()
{
	system("cls");
	drawLine();
	cout<<"\t\t\tITEMIZED INVOICE\n";
	drawLine();
	Header();
	drawLine();
	for(int i=0;i<size;i++)
	{
		cout<<setw(10)<<I[i].id
		    <<setw(20)<<I[i].item
		    <<setw(10)<<I[i].qty
		    <<setw(10)<<I[i].rate
			<<setw(10)<<I[i].amt
			<<endl;
	}
	cout<<endl;
	cout<<setw(50)<<"Total Amount : "
	    <<setw(10)<<amount<<endl;
	drawLine();
}

void menu()
{
	drawLine();
	cout<<"\t\tTHE TUCK SHOP\n";
	drawLine();
	cout<<"Items Available\t\tRate\n";
	drawLine();
	cout<<"0. Exit\n";
	cout<<"1. Big Apple\t\t60\n";
	cout<<"2. Tea\t\t\t50\n";
	cout<<"3. Soda\t\t\t60\n";
	cout<<"4. Juice\t\t120\n";
	cout<<"5. Special Combo\t500\n";
	cout<<"Enter your choice: ";
}

int main()
{
	int ch, i=0, qty;
	char choice='n';
	start:
	do
	{
		system("cls");
		menu();	
		cin>>ch;
		switch(ch)
		{
			case 0:  break;
			case 1:	
				cout<<"No. of big apples: ";
				cin>>I[i].qty;
				I[i].id=i+1;
				strcpy(I[i].item,"Big Apple");
				I[i].rate=50;
				I[i].amt=I[i].qty*I[i].rate;
				amount+=I[i].amt;
				i++;
				size++;
			break;
			
			case 2:	
				cout<<"No. of Teas: ";
				cin>>I[i].qty;
				I[i].id=i+1;
				strcpy(I[i].item,"Tea");
				I[i].rate=30;
				I[i].amt=I[i].qty*I[i].rate;
				amount+=I[i].amt;
				i++;
				size++;
			break;
			
			case 3:	
				cout<<"No. of Sodas: ";
				cin>>I[i].qty;
				I[i].id=i+1;
				strcpy(I[i].item,"Soda");
				I[i].rate=20;
				I[i].amt=I[i].qty*I[i].rate;
				amount+=I[i].amt;
				i++;
				size++;
			break;
			
			case 4:	
				cout<<"No. of Juices: ";
				cin>>I[i].qty;
				I[i].id=i+1;
				strcpy(I[i].item,"Juice");
				I[i].rate=100;
				I[i].amt=I[i].qty*I[i].rate;
				amount+=I[i].amt;
				i++;
				size++;
			break;
			
			case 5:	
				cout<<"No. of Special Combos: ";
				cin>>I[i].qty;
				I[i].id=i+1;
				strcpy(I[i].item,"Special Combo");
				I[i].rate=200;
				I[i].amt=I[i].qty*I[i].rate;
				amount+=I[i].amt;
				i++;
				size++;
			break;
			
			default: break;
		}
		cout<<"\nDo You Want to Add More (Y/N)? ";
		cin>>choice;
	
		if(choice=='Y'||choice=='y')
			goto start;
		else if(choice!='Y'||choice!='y')
			ch=0;
			
	}while(ch!=0);

	if((choice!='y'||choice!='Y') && amount>0)
			showBill();
	else
			cout<<"\nNo Order Placed Yet...\n";
	system("pause");
}
