#include<bits/stdc++.h>
using namespace std;
class Box{
  private:
    int Length; 
    int Width;   
    int Height; 
    int v,s;
  public:
      void InitBox( int x, int y, int z);
      void setVolume( );           
      void setArea( );             
      void show( );              
};
void Box::InitBox(int x,int y,int z)
{
  Length=x;
  Width=y;
  Height=z;
}
void Box::setVolume( )
{
  v=Length*Width*Height;
}
void Box::setArea()
{
   s=2*Length*Width+2*Width*Height+2*Height*Length;
}
void Box::show( )
{
   cout<<Length<<" "<<Width<<" "<<Height<<endl;
   cout<<v<<endl;
   cout<<s<<endl;
}
int main()
{
	  int intLength, intWidth, intHeight;
     Box box;  
     cin>>intLength;
     cin>>intWidth;
     cin>>intHeight;
     box.InitBox(intLength,intWidth,intHeight); 
     box.setVolume(); 
     box.setArea(); 
     box.show(); 
	return 0;
}