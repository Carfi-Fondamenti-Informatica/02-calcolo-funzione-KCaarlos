#include <iostream>
using namespace std;

int main() {
   
int a=0,b=0,x=0,y=0,z=0;
   
cin>>a>>b>>c>>d;
   
   if(x<0 && y>0){
   
       z=a*x-b*y;
      cout<<z<<endl;

  } else if (x>=0 && y<=0){
      
       z=a*(x^2)-b*y;
      cout<<z<<endl;
   
}  
   
   else  {
      
       z=a*x+b*(y*2);
      cout<<z<<endl;
   }
   
 
   
   return 0;
}
