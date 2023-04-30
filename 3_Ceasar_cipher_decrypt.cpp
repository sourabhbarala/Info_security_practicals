#include<iostream>
 #include<stdio.h>
using namespace std;
 
int main()
{
    char message[100], ch;
    int i, key;
    cout << "Enter a message to decrypt : ";
    cin.getline(message, 100);
    cout << "Enter key (integer): ";
    cin >> key;
    for(i = 0; message[i] != '\0'; ++i)
    {   ch = message[i];
        if(ch >= 'a' && ch <= 'z')
        {   ch = ch - key;
            if(ch < 'a')
                ch = 'z' - ('a'-ch) + 1;
            

            message[i] = ch;
        }
        else if(ch >= 'A' && ch <= 'Z'){
        ch = ch - key;
        if(ch < 'A'){
        ch =  'Z' - ('A'-ch) + 1;
        }
        message[i] = ch;
        }
    }
    cout << "Decrypted message: " << message<<endl;
    return 0;
}
