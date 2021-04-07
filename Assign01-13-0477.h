#include<iostream>

using namespace std;
class Customer
{ private:
	char  Customer_Name[20], Title[20], E_mail[30];
	long int Customer_ID;
long int Telephone_Number;
char  Address[50], NIC_NO[25];
public:
	
	void Add_New_Customer(long int id,char name[20],char title[20],char email[30],long int telephone,char address[50],char nic[25])
	{ Customer_ID=id;
	strcpy(Customer_Name,name);
	strcpy(Title,title);
	strcpy(E_mail,email);
	Telephone_Number=telephone;
	strcpy(Address,address);
	strcpy(NIC_NO,nic);


	}
	void Display_Customer_Record()
	{cout<<"customer id is  "<<Customer_ID<<endl;
	cout<<"customer name is  "<<Customer_Name<<endl;
	cout<<"Title is  "<<Title<<endl;
	cout<<"Email is  "<<E_mail<<endl;
	cout<<"Telephone number is  "<<Telephone_Number<<endl;
	cout<<"Address is  "<<Address<<endl;
	cout<<"Cnic number is"<<NIC_NO<<endl;
	}
};
class Account
{    private:
	long int Account_ID;
	char Customer_ID[20], Account_Type[20];
	double Balance;
	char Date_of_Creation[20];
     public:
		 void addnewaccount(long int accountid, char customerid[20],char accounttype[20],double bal,char date[20])
		 {
			 Account_ID=accountid;
			 strcpy(Customer_ID,customerid);
			 strcpy(Account_Type,accounttype);
			 Balance=bal;
			 strcpy(Date_of_Creation,date);
		 }
		 void Display_Account_Details()
	{cout<<"customer id is  "<<Customer_ID<<endl;
	cout<<"Account id is  "<<Account_ID<<endl;
	cout<<"Account Type is  "<<Account_Type<<endl;
	cout<<"Date of creation is  "<<Date_of_Creation<<endl;
	cout<<"Total Balance is is  "<< Balance<<endl;
	
	}
};
class Transaction
{private:
	long int Transaction_ID;
	char Account_ID[20], Transaction_Type[20];
double Amount_Transacted;
public:
	void Make_New_Transaction(long int tans_id,char account_id[20],char transiction_type[20],double amount_transacted)
	{    Transaction_ID=tans_id;
	strcpy( Account_ID,account_id);
	strcpy(Transaction_Type,transiction_type);
	Amount_Transacted=amount_transacted;
	}
	void Display_Transaction()
	{
		cout<<"Transaction id is "<<Transaction_ID<<endl;
		cout<<"Account id is"<<Account_ID<<endl;
		cout<<"Transaction Type is "<<Transaction_Type<<endl;
		cout<<"Amount Transacted is "<<Amount_Transacted<<endl;
	}
};