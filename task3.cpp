//HASHAM BIN TARIQ
//FA20-BSCS-097
#include <iostream>
using namespace std;
 class pos{
 	public:
	  int num;
 	
 };
 
int DFS(char inpt,int &current_pos, int &i)
 {
 	
 	cout<<inpt;
 	pos q0,q1,q2,q3;
   
 	q0.num=0;
 	q1.num=1;
 	q2.num=2;
 	q3.num=3;
 
 	if(current_pos==q0.num)
 	{
		 if(inpt=='c')
 		{
 			current_pos=q1.num;
 			return q1.num;		
		}
		else if(inpt=='a'||inpt=='b')
		{
			current_pos=q2.num;
			return q2.num;
	
		}
	}
	if(current_pos==q1.num)
 	{
		 if(inpt=='a' )
 		{
 			current_pos=q3.num;
 			return q3.num;		 
		}
		else if(inpt=='b'||inpt=='c')
		{
			current_pos=q2.num;
			return q2.num;
		}
	}
	if(current_pos==q2.num)
 	{
	if(inpt=='a'||inpt=='b'||inpt=='c')
		{
			current_pos=q3.num;
			return q3.num;
		}
	}
	if(current_pos==q3.num)
 	{
	if(inpt=='a'||inpt=='b'||inpt=='c')
		{
			current_pos=q3.num;
			return q3.num;
		}
	}
 
 }
 
 int main()
 {
  cout<<"It will accept string {ca,cb,a,b}"<<endl;	
 string check_str;
 int final_state=0,final;
 cout<<"Enter the string"<<endl;
 cin>>check_str;
 int size=check_str.length();
 for(int i=0;i<size;i++)
 {
 	final=DFS(check_str[i],final_state,i);	
	}
	if(final==2)
		{
			cout<<"String accepted";
		}
	else
		{
			cout<<"String not accepted";
		}
 
 return 0;
 }
