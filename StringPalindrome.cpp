//#Check Palindrome

/* Pronlem: Liitle pony has 3 strings A,B and C , Now he selects a non-empty substring a of A, 
a non empty dtring b of B and non empty substring c of C. Consider the string s=a+b+c. Little
Pony wants s to be a palindrome. Here p+q is he cancatenation of p and q.
Help little pony to find if he can selecte some a, b and c so that s is a palindrome.

=> All the string are in lower case.

=> OUTPUT: Return 1 if little pony find palindrome and 0 otherwise.

=>Example Input:  
	input1:
			A:"maccb"
			B:"pccgh"
			C:"absa"
			
	input2:
			A:"a"
			B:"a"
			C:"c"
			
=>Example input1 Explaination:
	One of the possible ways to selected a,b and c is-
		a="accb"
		b="cc"
		c="a"
		s=a+b+c="accbcca" which is a palindrome.
	
=>Output of input1:
		return 1
	
=>Example input2 Explaination:
	We can;t select any valid a,b and c.
	
=>Output of input2:
		return 0	
		
		
		
		HOW TO SELECT SUBSTRING FROM THE STRING:
									#include <string.h>
									#include <iostream>
									using namespace std;
 									int main()
									{
  								  	string s1 = "Geeks";
 									// Copy three characters of s1 (starting from position 1)
    								string r = s1.substr(1, 3);
 									cout << "String is: " << r;
 									return 0;
									}
*/


#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string A,B,C,a,b,c,s,q;
	int x,y,z;
	cout<<endl<<"Enter the input A"<<endl;
	cin>>A;
	x=A.length()/2;
	x=A.length()-x;
	cout<<endl<<x;
	cout<<endl<<"Enter the input B"<<endl;
	cin>>B;
	y=B.length()/2;
	y=B.length()-y;
	cout<<endl<<"Enter the input C"<<endl;
	cin>>C;
	z=C.length()/2;
	z=C.length()-z;
	
	try
	{
		if(x&&y&&z >1)
		{
			a=A.substr(1,x);
			cout<<endl<<a<<endl;
			
			b=B.substr(1,y);
			cout<<endl<<b<<endl;
			
			c=C.substr(1,z);
			cout<<endl<<c<<endl;
			
			s=a+b+c;
			cout<<endl<<"s="<<s;
			
			q=c+b+a;
			
			int cnt=0;
			for(int i=0;i<s.length();)
			{
				if(s[i]=q[i])
				{
					i++;
					if(i==s.length())
					{
						cout<<endl<<"palindrome";
					}
				}
				else
				{
				cout<<endl<<"Not palindrome";
				break;
			
				}
				
			}
			
		}
		else
		{
			throw(A);
		}
	}
	
	catch(string A)
	{
		cout<<endl<<"We can't select any valid "<<A<<B<<C;
	}
	return 0;
}

