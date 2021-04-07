#include<iostream>

#include"Assign01-13-0477.h"

using namespace std;
int main()
{ 
	Customer  c[3];
	int a=2;
	int choice;
	for(;;)
	{
	
  cout<<"1. Add New Customer"<<endl;
  cout<<"2. Open An Account"<<endl;
  cout<<"3. Make a Transaction (The Cusomter_ID & Account_ID should already exist) "<<endl;
  cout<<"4. Display/Search/Modify/Delete Customer"<<endl;
  cout<<"5. Display/Search/Modify/Delete Account"<<endl;
  cout<<"6. Display/Search transactions"<<endl;
  cout<<"7. exit from program"<<endl;

  cin>>choice;
	 int b=112;
	if(choice==1)
	{a++;
	b++;
	

	}
	//c=(Customer*)malloc(a*sizeof(Customer));

c[0].Add_New_Customer(111,"qamar","saving","qamarshahzad08@gmail.com",123456,"i8-4 street no 100","37405-3211845-1");
c[1].Add_New_Customer(112,"ali","saving","ali98@gmail.com",223345,"b1-08 islamabad","1232323");
if(choice==1)
{	
		if(cin.peek()=='\n') cin.ignore();
		char cname[20],title[20],email[30],address[50],cnic[25];
     long int telephoneno;
	 cout<<"Name of customer:"<<endl;
     cin.getline(cname,20);
	 cout<<"type of account"<<endl;
	 cin>>title;
	 cout<<"Email of customer"<<endl;
	 cin>>email;
	 cout<<"NIC Number of customer"<<endl;
	 cin>>cnic;
	 if(cin.peek()=='\n') cin.ignore();
	 cout<<"Adress of Customer"<<endl;
	 cin.getline(address,50);
	 cout<<"enter customer telephone no"<<endl;
	 cin>>telephoneno;
	 
	 c[2].Add_New_Customer(b,cname,title,email,telephoneno,address,cnic);
   
}

	
if(choice==4)
{ cout<<"value of A is"<<a<<endl;
	
	c[2].Display_Customer_Record();
   
}
if(choice==7)
{
	break;
}
}


	
	//free(c);


 
	return 0;
	
}