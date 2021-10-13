#include<iostream.h>
#include<conio.h>
#include<process.h>
class deletion
{private:inta[100],i,n,ele,pos;
 public:void input()
 {cout<<"enter array size";
  cin>>n;
  cout<<"enter array elements";
  for(i=0;i<n;i++)
    cin>>a[i];
  cout<<"enter position to be deleted";
  cin>>pos;
 }
 void compute()
 {if(pos>n-1)
 {cout<<"it is an invalid position";
  exit(O);
 }
  else
  {ele=a[pos];
   for(i=pos;i<n;i++)
     a[i]=a[i+1];
   n=n-1;
  }}
 void output()
 {cout<<"array after deletion is\n";
  for(i=0;i<n;i++)
    cout<<"\t"<<a[i];
 }
};
void main()
{deletion D;
 clrscr();
 D.input();
 D.compute();
 D.output();
 getch();
}
