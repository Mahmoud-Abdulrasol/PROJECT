#include <iostream>
#include<string>
using namespace std;
//VALIDATION
class validation{
    public:
static bool validName(string name)
{
        if(name.size()>=5 && name.size()<=20)
        {
            return true;
        }
        else{
                cout<<"name must be min=5 max=20";
                             return false;
                                }

}
static bool validPassowrd(string password)
{
     if(password.size()>=8 && password.size()<=20)
     {
         return true;
     }
     else{
            cout<<"password must more than 8";
            return false;

                    }
}
static bool validBalance(double balance)
{
  if (balance >= 1500) {
			return true;
		}
		return false;
	}
};
//__________________________________________________________________________
class person{
   private:
       int id;
       string name,password;
   public:
       //SETTER
    void setName(string name)
    {
        if(validation::validName(name))
        {
            this->name=name;
        }
        else{
            cout<<"incorrect name";
                     }
    }
    void setPassword(string password)
    {
        if(validation::validPassowrd(password))
        {
            this->password=password;
        }
        else{
              cout<<"incorrect pass";
                      }
    }
    void setID(int id)
    {
        this->id=id;
    }
    //GETTER
    string getName()
    {
        return name;
    }
    string getPassword()
    {
        return password;
    }
    int getID()
    {
        return id;
    }
    person(int id,string name,string password)
    {
        this->id=id;
        this->name=name;
        this->password=password;
    }

};
//_______________________________________________________________________________________
 class client:public person{
 private:
     double balance;
 public:
     //SETTER&GETTER
     void setBalance(double balance)
     {
         this->balance=balance;
     }
     double getBalance()
     {
         return balance;
     }
     //constractor inherit
    client(int id,string name,string password,double balance):person(id,name,password) {
	        	setBalance(balance);
	}
	void deposit(double amount)
	{
	    if(amount>0)
            this->balance+=amount;
	}
 };
int main()
{

}
