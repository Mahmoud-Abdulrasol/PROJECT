#include <iostream>
#include<string>
using namespace std;
 class client{
 protected:
     int id;
     string name,password;
     double balance;
 public:
     void setId(int id)
     {
         this->id=id;
     }
     int getID()
     {
         return id;
     }
     client(string name,string password,double balance)
     {
         setName(name);
         setPassword(password);
         setBalance(balance);
     }
       static void setName(string name)
    {

         while(true){
                if(name.size()>=5 && name.size()<=20)
    {
        this->name=name;
        break;
                        }
     else{cout<<"name must min=5 and max=20"<<endl;
           cout<<"enter anthor name:";
             cin>>name;                               }

    }

    }

     static void setPassword(string password)
    { while(true){
                 if(password.size()>=8 && password.size()<=20)
        {
        this->password=password;
        break;
                                }
      else{cout<<"passowrd must be min=8 max=20";
            cout<<"enter anther pass";
             cin>>password;                          }
                         }

    }
     void setBalance(double balance)
    { while(true){
        if(balance>=1500)
    {
         this->balance=balance;
         break;
                               }
       else{cout<<"min balance must be 1500 or higher";
            cout<<"enter again balance:";
            cin>>balance;

                                   }
                         }
    }
    string getName()
    {
        return name;
    }
    string getPassword()
    {
        return password;
    }
    double getBalance()
    {
        return balance;
    }


 };
int main()
{

}
