#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int main() 
{ 
  double a=0.0,b=0.0;
  double result=0.0,oldResult=0.0;
  int op;
  string s="",sy="";
  cout << "Enter first number" << endl;
  cin >>a;
   result=a;
   cout<<"Menu according to my calculator"<<endl;
   cout<<"------------------------------------------"<<endl;
   cout<<"1 Addition"<<endl;
   cout<<"2 Substraction"<<endl;
   cout<<"3 Multiplication"<<endl;
   cout<<"4 Division"<<endl;
   cout<<"5 Modulus"<<endl;
   cout<<"6 Power"<<endl;
   cout<<"7 Square root"<<endl;
   cout<<"8 Sin"<<endl;
   cout<<"9 Cos"<<endl;
   cout<<"10 Tan"<<endl;
   cout<<"11 Log"<<endl;
   cout<<"12 Exit"<<endl;
   cout<<"13 History"<<endl;
   cout<<"14 Clear"<<endl;
   cout<<"15 Result"<<endl;
cout<<"----------------------------------------------"<<endl;
  while(true)
  {
        cout<<"Enter your choice"<<endl;
        cin>>op;
        oldResult=result;
       if(op==15)
       {
        cout<<"Result"<<" "<<result<<endl;
        continue;
       }
       else if(op==14)
       {
        result=0;
        s="";
        cout<<"Data deleted"<<endl;

       }
       else if(op==13)
       {
        cout<<"Your History"<<" "<<s<<endl;
       }
       else if(op==12)
       {
        cout<<"Thank you for using my calculator"<<endl;
        break;
       }
       else if(op==7)
{
    sy="sqrt";

    if(result>=0)
    {
        result=sqrt(result);
        s = s + sy + "(" + to_string(oldResult) + ") = " + to_string(result) + "\n";
    }
    else
    {
        cout<<"Not possible"<<endl;
    }
}
       else if(op==8)
       {
        sy="sin";
                result=sin(result);
                s = s + sy + "(" + to_string(oldResult) + ") = " + to_string(result) + "\n";
                

       }
       else if(op==9)
       {
         sy="cos";
                result=cos(result);
                s = s + sy + "(" + to_string(oldResult) + ") = " + to_string(result) + "\n";
                

       }
       else if(op==10)
       {
        sy="tan";
                result=tan(result);
                s = s + sy + "(" + to_string(oldResult) + ") = " + to_string(result) + "\n";
            

       }
       else if(op==11)
       {
        sy="log";
                if(result>0)
                {
                     result=log(result);
                                     s = s + sy + "(" + to_string(oldResult) + ") = " + to_string(result) + "\n";
                     
                }
                else
                {
                    cout<<"Not possible"<<endl;
                    
                }
                
                
       }



      else
       {
          cout << "Enter  number" << endl;
            cin>>b;
           
            

        switch(op)
        {
            case 1:
            {
                sy="+";
                result+=b;
                break;
            }
            
            case 2:
            {
                sy="-";
                result-=b;
                 break;
            }
           
            case 3:
            {
                sy="*";
                result*=b;
                break;
            }
           
            case 4:
            {
                sy="/";
                if(b!=0)
                 {
                    result/=b;
                    break;
                }
                else
                {
                    cout<<"Sorry not possible to divide by 0"<<endl;
                    break;
                }
                 
            }
            case 5:
            {
                sy="%";
                if(b!=0)
                {
                    result = fmod(result, b);
                 

                }
                else
                {
                    cout<<"Not possible"<<endl;
                }
                break;
                 
            }
            case 6:
            {
                sy="^";
                result=pow(result,b);
                break;
            }
            
            
        
            default :
            {
                cout<<"Invalid operater"<<endl;
                break;
            }
        }
        if(op>=7 && op<=11)
             {
               s = s + sy + "(" + to_string(oldResult) + ") = " + to_string(result) + "\n";
             }
            else
        {
            s = s + to_string(oldResult) + " " + sy + " " + to_string(b) + " = " + to_string(result) + "\n";
           }
       
       }

    
       
  }
  

      
       



          

}