#include<iostream>

using namespace std;

void printkeypadaux(int num, string output, string * key)
{

	if(num==0)
	{
		cout<<output<<endl;
		return;
	}

	int current = num%10;
	int len = key[current].size();
	
	for(int i=0;i<len;i++)
	{
		printkeypadaux(num/10,output+key[current][i],key);
	}
}

void printkeypad(int num)
{
	string * key = new string[10];
	key[0]="";
  	key[1]="";
  	key[2]="abc";
  	key[3]="def";
  	key[4]="ghi";
  	key[5]="jkl";
  	key[6]="mno";
  	key[7]="pqrs";
  	key[8]="tuv";
  	key[9]="wxyz";

	string output = "";

	printkeypadaux(num,output,key);


}

int main()
{
	int num;
	cin>>num;

	printkeypad(num);
}
