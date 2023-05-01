
#include<stdio.h>
#include<string.h>
int main()
{
      char msg[30],key[30],k[20],ct[20],pt[20];
      int lenm,lenk,i,j;
    
 
      printf("Enter Message (in small case): ");
      gets(msg);
      printf("Enter Key (a string for eg:-deception): ");
      gets(key);
      
      lenm=strlen(msg);
      lenk=strlen(key);

      // key with key word
      for(i=0;i<lenm;i++,j++)
      {
            if(j==lenk)
            {
                  j=0;
            }
            k[i]=key[j];
      } 

      // encrypting
      for(i=0;i<lenm;i++)
      { 
            ct[i]=((msg[i]+(k[i]%'a')));
            if(ct[i]>'z')
            {
                  ct[i]=((ct[i]-'z')+'a')-1;
            }
      }
      ct[i]='\0'; 

      // decrypting
      for(i=0;i<lenm;i++)
      {
            pt[i]=ct[i]-(k[i]%'a');
            if(pt[i]<'a')
            {
                  pt[i]='z'-('a'-pt[i])+1;
            }
      }
      pt[i]='\0'; 
      printf("\nEncrypted Message : %s", ct);
      printf("\nDecrypted Message : %s", pt);
  }
