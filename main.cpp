#include <iostream>
#include <string>

using namespace std;

bool checkVowel(char x) {
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
        return true;
    } else {
        return false;
    }
}
int main() 
{
   string pwd, nwPwd;
   int key, dif;
   char add;
   
   cin >> pwd;
   
   cin >> key;
   
   
   for(int i = 0; i < pwd.length(); i++)
   {         
      if(!checkVowel(pwd[i]))
      {
         if((int(pwd[i]) + key) > 122)
         {
            pwd[i] = char(int(pwd[i] + key - 123 + 97));
         }
         else
            pwd[i] = char(int(pwd[i] + key));
      }
   }
   //to reverse
   int end = pwd.length() - 1;
   
   for(int i = 0; i <= (pwd.length()-1)/2; i++, end--)
   {
      swap(pwd[i], pwd[end]);
   }
   cout  << pwd;
   return 0;
} 
   

   