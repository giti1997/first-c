//Programmed by: Giti Omidvar
//Student ID: 610394068

#include <iostream>

using namespace std;

string a[30] = {"" , "a" , "b" , "j"  , "d" , "h" , "v" , "z"   , ""  , "t"
               ,"" , "y" , "k" , "l"  , "m" , "n" , "s" , "\'a" , "f" , "" 
               ,"" , "q" , "r" , "sh" , ""  , ""  , "x" , ""    , ""  , "" };

void make(int n , string res , int y){
  if(n == 0){
    cout << res << endl;
    return;
  }else if(y == 5 || n < 0)
    return;
  for(int i = 0 ; i < 30; i++){
    if(a[i] == "")
      continue;
    int x = n;
    string last = res;
    res += a[i];
    if(i < 10)
      n -= i;
    else if(i < 20)
      n -= ((i%10)*10);
    else
      n -= ((i%20)*100);
    y++;
    make(n , res , y);
    y--;
    n = x;
    res = last;
  }
}
int main(){
  int n;
  cin >> n;
  make(n , "" , 0);
  
  return 0;
}
