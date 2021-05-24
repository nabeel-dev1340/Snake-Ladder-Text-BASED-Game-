#include<iostream>
#include<ctime>
#include<string.h>
#include<cstdlib>
#include<iomanip>

using namespace std;

int rand(int &scr);

int main()
{       
     int p1scr=0,p2scr=0,scr;
     string Player1;
     string Player2;
	char X[100];
	 X[05]='L';          X[11]='S';
	 X[35]='L';          X[23]='S';
	 X[25]='L';          X[50]='S';
	 X[44]='L';          X[75]='S';
	 X[85]='L';          X[99]='S';
	 cout<<setw(45)<<"****************"<<endl;
	 cout<<setw(33)<<"*"<<setw(3)<<"*"<<setw(3)<<"*"<<setw(3)<<"*"<<endl;
	 cout<<setw(33)<<"*"<<setw(3)<<"*"<<setw(3)<<"*"<<setw(3)<<"*"<<endl;
	 cout<<setw(45)<<"****************"<<endl;
	 cout<<setw(55)<<"_^_^_  SNAKE  AND  LADDER  GAME  _^_^_"<<endl<<endl<<endl;
	 cout<<"D E V E L O P E D    B Y :::: "<<endl<<endl;
	 cout<<" SYED  NABEEL  SHARAFAT  (2018468)"<<endl<<endl;
	 cout<<" SUFYAN  IRFAN           (2018445)"<<endl<<endl<<endl<<endl; 
	 cout<<"ENTER  PLAYER  1  NAME : ";
	 cin>>Player1;
	 cout<<endl<<endl;
	 cout<<"ENTER  PLAYER  2  NAME : ";
	 cin>>Player2;
	 srand(time(0));
	 cout<<endl<<endl;
	 
	 
	 while(p1scr<=100 && p2scr<=100)
	 {                        
	   
	   cout<<Player1;
	   cout<<" !!!  Its Your Turn(Press any Key).."<<endl;
	   cin.get();
	   rand(p1scr);
	   p1scr=p1scr+scr;
	   cout<<"Your Score is "<<p1scr<<endl<<endl<<endl<<endl;
		
			   
	   if( X[p1scr]=='L')
	   
	   {
	   cout<<"\a"<<"Hurrah!You Got A Ladder"<<endl;
	   p1scr=p1scr+5;
	   cout<<" Now Your Score is "<<p1scr<<endl<<endl<<endl<<endl;
       }
       
       if(X[p1scr]=='S')
       
       {
       	cout<<"\a"<<"OoopS!Snake in The Head"<<endl;
       	cout<<endl;
       	p1scr=p1scr-7;
       cout<<"Your Score is "<<p1scr<<endl<<endl<<endl<<endl;
	   }
	   if(p1scr>100)
	   {
	   	p1scr=p1scr-6;
	   	cout<<" AIM  FOR  HUNDRED ..."<<endl;
	   	cout<<Player1<<"Your New Score is "<<p1scr<<endl<<endl<<endl<<endl;
	   	
	   }
	   if(p1scr==100)
	   
	   {
	   	cout<<Player1<<"   You WON!!! CONGRATUALTIONS!!!"<<endl<<endl;
	   	cout<<Player2<<"   HARD LUCK BUDDY :(";
	   	break;
	   }
	   	   
	   cout<<Player2<<" !!!  Its Your Turn(Press any Key).."<<endl;
	   cin.get();
	   rand(p2scr);	   
	   p2scr=p2scr+scr;
	   cout<<"Your Score is "<<p2scr<<endl<<endl<<endl<<endl;
		 
	   if( X[p2scr]=='L')
	   
	   {
	   cout<<"\a"<<"Hurrah!You Got A Ladder"<<endl;
	   p2scr=p2scr+5;
	   cout<<" Now Your Score is "<<p2scr<<endl<<endl<<endl<<endl;
       }
       
       if( X[p2scr]=='S')
       
       {
       	cout<<"\a"<<"OoopS!Snake in The Head"<<endl;
       	p2scr=p2scr-7;
       	cout<<" Now Your Score "<<p2scr<<endl<<endl<<endl<<endl;
	   }
	   if(p2scr>100)
	   {
	   	p2scr=p2scr-6;
	   	cout<<" AIM  FOR  HUNDRED..."<<endl;
	   	cout<<Player2<<"  Your New Score "<<p2scr<<endl<<endl<<endl<<endl;
	   	
	   }
	   if(p2scr==100)
	   
	   {
	   	cout<<Player2<<"   You WON!!! CONGRATULATIONS!!!"<<endl<<endl;
	   	cout<<Player1<<"   HARD LUCK BUDDY :(";
	   	break;
	   	
	   }
	   
	    }
	  
	 return 0;
}
	 
	 int rand(int &scr)
	 
	 {
	 	int random;
	 	random=1+rand()%6;
	 	scr=random+scr;
	 	return scr;
	 }
	 
	 
