#include <iostream>
#include<string>
using namespace std;

//VALIDATION
class Validation{
public:
    static bool ValidName(string name){
        if (!(name.size() >= 5 && name.size() <= 20)) {
			cout << "the size of name must be >=5 and <=20"<<endl;
			return false;
		}

		for (int i = 0; i < name.size(); i++) {
			if (!(name[i] >= 'a' && name[i] <= 'z' || name[i] >= 'A' && name[i] <= 'Z')) {
				return false;
			}
		}
		return true;
	}

    static bool Validatepassword(string password) {
		if (password.size() >= 8 && password.size() <= 20) {
			return true;
		}
		else
		{
			cout << " the password must be >= 8 And <= 20\n";
			return false;
		}
	}

	static bool ValidateBalance(double balance) {
		if (balance < 1500) {
			return false;
		}
		return true;
	}
	static bool ValidateSalary(double salary) {
		if (salary < 5000) {
			return false;
		}
		return true;
	}
};

//=========================================================================================
class person{
   private:
       int id;
       string name,password;
   public:
       //SETTER
    void setName(string name){
        if(Validation::ValidName(name)){
            this->name=name;
        }
        else{
            cout<<"incorrect name";
                     }
    }
    void setPassword(string password){
        if (Validation::Validatepassword(password))
			this->password = password;
        else{
              cout<<"incorrect pass";
                      }
    }
    void setID(int id){
        this->id=id;
    }
    //GETTER
    string getName(){
        return name;
    }
    string getPassword(){
        return password;
    }
    int getID(){
        return id;
    }

    Person() {
		id = 0;
		name = "";
		password = "";
	}

    person(int id,string name,string password){
        this->id=id;
        this->name=name;
        this->password=password;
    }

};
//===============================================================================================
 class client:public person{
 private:
     double balance;
 public:
     //SETTER&GETTER
    void setBalance(double balance){
		if (Validation::ValidateBalance(balance))
			this->balance = balance;
		else cout << "Invalid balance"<<endl;
	}
     double getBalance(){
         return balance;
     }



    //constractor inherit

    client(int id,string name,string password,double balance):person(id,name,password) {
	        	setBalance(balance);
	}

	//methods
	void deposit(double amount)
	{
	    if(amount>0)
            this->balance+=amount;
	}

	void withdraw(double amount) {
		if (amount <= balance && amount > 0)
			this->balance -= amount;
	}
	void transferTo(double amount, client& recipient) {
		withdraw(amount);
		recipient.deposit(amount);
	}
	void checkBalance() {
		cout<<"Balance : "<<balance<<endl;
	}
	void display() {
		cout << "Balance : " << balance << endl;
	}

 };

//=====================================================================================



int main()
{

}
