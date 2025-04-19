#include <iostream>
using namespace std;
class sirket
{
 
public:
 
string sirketismi;
 
int sirketno;
 
int sirketkazanci;
};
int isimal(string isim)
{
 
cout<<"Sirket ismini giriniz=";
 
cin>>isim;
}
int noal(int no)
{
cout<<"Sirket kayit numarasini giriniz=";
cin>>no;
}
int kazanc(int x)
{
 
int a,b,c;
 
 
cout<<"1.yil kazanciniz=";
 
cin>>a;
 
 
cout<<"2.yil kazanciniz=";
 
cin>>b;
 
 
cout<<"3.yil kazanciniz=";
 
cin>>c;
 
 
cout<<"3 yillik kazanc toplami="<<a+b+c<<endl;
 
cout<<"Kazanc Ortalamasi="<<a+b+c/3<<endl;
 
}
int main(){
 
 
sirket sirket1;
 
isimal(sirket1.sirketismi);
 
noal(sirket1.sirketno);
 
kazanc(sirket1.sirketkazanci);
 
 
sirket sirket2;
 
isimal(sirket2.sirketismi);
 
noal(sirket2.sirketno);
 
kazanc(sirket2.sirketkazanci);
 
 
sirket sirket3;
 
isimal(sirket3.sirketismi);
 
noal(sirket3.sirketno);
 
kazanc(sirket3.sirketkazanci);
 
 
return 0;
}