#include<iostream>
#include<string.h>
#include <bits/stdc++.h>


using namespace std;

int check_if_exist(int arr[],int temp,int i)
{
  for(int j=0;j<i;j++)
  {
    if(arr[j]==temp)
      return 1;
  }
  return 0;
}

int main()
{

int size;

string plain;


cout<<"\nEnter the plain text: ";
getline(cin,plain);

size=plain.length();

int space=count(plain.begin(),plain.end(),' ');
remove(plain.begin(),plain.end(),' ');
plain.resize(size-space);

size=plain.length();
char enc[size],cipher[26],dec[size];
 

// create refrence array

int index=1;
int temp;
int ref_array[26];
ref_array[0]=rand()%26;

  while(index!=26)
  {
      temp=rand()%26;
      if(!check_if_exist(ref_array,temp,index))
      {
        ref_array[index]=temp;
        ++index;
      }
  }

for(int i=0;i<26;i++)
{
  cipher[i]='a'+ref_array[i];
  
}

cout<<"following letters are replaced by letters below:\n";
for(int i=0;i<26;i++)
{
  cout<<char('a'+i)<<" ";
}
cout<<endl;
for(int i=0;i<26;i++)
{
  cout<<cipher[i]<<" ";
}
cout<<endl<<endl;


// encrypt


cout<<"plain text: "<<plain<<endl<<"cipher text: ";

for(int i=0;i<size;i++)
{
  cout<<cipher[plain[i]%'a'];
}


}


