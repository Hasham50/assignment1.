//HASHAM BIN TARIQ
//FA20-BSCS-097
#include <iostream>
using namespace std;
 class pos{
 	public:
	  int num;
};
int DFA(char inpt,int &current_pos, int &i)
{
 	
 	pos q0,q1,q2,q3;
   
 	q0.num=0;
 	q1.num=1;
 	q2.num=2;
 	q3.num=3;
 	
 
 	if(current_pos==q0.num)
 	{
		if(inpt=='a')
 		{
 			current_pos=q1.num;
 			return q1.num;		
		}
		else if(inpt=='b')
		{
			current_pos=q3.num;
			return q3.num;
		}
	}
	if(current_pos==q1.num)
 	{
		 if(inpt=='a')
 		{
 			current_pos=q0.num;
 			return q0.num;		 
		}
		else if(inpt=='b')
		{
			current_pos=q2.num;
			return q2.num;
		}
	}
	if(current_pos==q2.num)
 	{
	if(inpt=='b')
		{
			current_pos=q1.num;
			return q1.num;
		}
	if(inpt=='a')
		{
			current_pos=q3.num;
			return q3.num;
		}
	}
	if(current_pos==q3.num)
 	{
	if(inpt=='a')
		{
			current_pos=q2.num;
			return q2.num;
		}
	if(inpt=='b')
		{
			current_pos=q0.num;
			return q0.num;
		}
	}
 }
 
 int main()
 {
   cout<<"It will accept only even a and b"<<endl;
 string chck_str;
 int final_state=0,final;
 cout<<"Enter the string: "<<endl;
 cin>>chck_str;
 
 int size=chck_str.length();
 for(int i=0;i<size;i++)
 {
 	final=DFA(chck_str[i],final_state,i);	
	}
	if(final==0)
		{
			cout<<"String accepted";
		}
	else
		{
			cout<<"String not accepted";
		}
 
 return 0;
 }
