#include<iostream>
#include<unistd.h>
using namespace std;
#include<cstring>
class graph1
{
	int A[10][10];
	string city[20];
	int cost[10][10];
	int visited[10];
	int ch1;
	public:
		graph1()
		{
			city[0]="Mumbai"; city[1]="Pune"; city[2]="Nashik"; city[3]="Delhi";city[4]="Kolkata";city[5]="Goa";
			 for(int i=0;i<6;i++) 
                 		for (int j=0;j<6;j++)
                 		{
                       		 	A[i][j]=0;
                       		 	cost[i][j]=0;
                 		}
                       		 	
                      
		}	
		void create();
		void display();
		void exist();
		void dfs(int);
		void initvisited();
		void bfs(int);
		
};
void graph1::create()
{
	int m,choice;
	int v1,v2; 
     	 char ans,y,Y;
     	 do{
     	 		cout<<"\n";	
		       	for(int i=0;i<6;i++)
			{
		            cout <<i << ":" << city[i];
		            cout<<"\n";
			}
		       	cout <<"\n \nEnter the city from where you want to start travel: \n";
		       	cin >> v1;
			cout<<"\n";
		       	for(int i=0;i<6;i++)
			{
		            cout <<i << ":" << city[i];
		            cout<<"\n";
		       	}
		       	cout <<"\n \nEnter the city where you want to go:  ";
		       cin >> v2;
		       cout<<"\n";
		       
		       if(v2==v1)
			{
				cout<<"\nYou entered the same city... : (  Please add Destination city\n";
				 for(int i=0;i<6;i++)
				{
		           		 cout <<i << ":" << city[i];
		       		}
				cout<<"\n Enter the city where you want to go: ";
				cin>>v2;
				cout<<"\n";
			}
		
			
			if (v1==0&&v2==1)
			{
				A[v1][v2]=150;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==0&&v2==2)
			{
				A[v1][v2]=200;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==0&&v2==3)
			{
				A[v1][v2]=1450;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==0&&v2==4)
			{
				A[v1][v2]=2000;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==0&&v2==5)
			{
				A[v1][v2]=600;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			
			else if (v1==1&&v2==0)
			{
				A[v1][v2]=150;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==1&&v2==2)
			{
				A[v1][v2]=220;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==1&&v2==3)
			{
				A[v1][v2]=1300;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==1&&v2==4)
			{
				A[v1][v2]=1850;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==1&&v2==5)
			{
				A[v1][v2]=700;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			
			else if (v1==2&&v2==0)
			{
				A[v1][v2]=200;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==2&&v2==1)
			{
				A[v1][v2]=220;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==2&&v2==3)
			{
				A[v1][v2]=1250;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==2&&v2==4)
			{
				A[v1][v2]=1700;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==2&&v2==5)
			{
				A[v1][v2]=750;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			
			else if (v1==3&&v2==0)
			{
				A[v1][v2]=1450;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==3&&v2==1)
			{
				A[v1][v2]=1300;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==3&&v2==2)
			{
				A[v1][v2]=1250;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==3&&v2==4)
			{
				A[v1][v2]=1550;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==3&&v2==5)
			{
				A[v1][v2]=2000;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			
			else if (v1==4&&v2==0)
			{
				A[v1][v2]=2000;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==4&&v2==1)
			{
				A[v1][v2]=1850;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==4&&v2==2)
			{
				A[v1][v2]=1700;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==4&&v2==3)
			{
				A[v1][v2]=1550;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==4&&v2==5)
			{
				A[v1][v2]=2100;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			
			else if (v1==5&&v2==0)
			{
				A[v1][v2]=600;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==5&&v2==1)
			{
				A[v1][v2]=700;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==5&&v2==2)
			{
				A[v1][v2]=750;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==5&&v2==3)
			{
				A[v1][v2]=2000;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==5&&v2==4)
			{
				A[v1][v2]=2100;
				A[v2][v1]=A[v1][v2];
				cout<<"\nYou will travel "<<A[v1][v2]<<"  km";
			}		
		     
        
         do{
         	cout<<"\n\n Enter the way of transport 1)Flight  2)Bus  3)Car : ";
         	cin>>ch1;
         	cout<<"\n";
        	switch(ch1)
        	{
        		case 1:
        		{
        				do{
						cout<<"\n SELECT YOUR CLASS";
						cout<<"\n\n1>ECONOMY CLASS  2>BUSSINESS CLASS 3>FIRST CLASS ";
						cin>>choice;
						switch(choice)
						{
							case 1:
							{
								if(A[v1][v2]>=100&&A[v1][v2]<=250)
								{
									cost[v1][v2]=1500;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=251&&A[v1][v2]<=500)
								{
									cost[v1][v2]=3000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=501&&A[v1][v2]<=750)
								{
									cost[v1][v2]=4500;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=751&&A[v1][v2]<=1000)
								{
									cost[v1][v2]=6000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1001&&A[v1][v2]<=1400)
								{
									cost[v1][v2]=7000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1401&&A[v1][v2]<=1800)
								{
									cost[v1][v2]=8000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1801)
								{
									cost[v1][v2]=10000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								break;
							}
							case 2:
							{
								if(A[v1][v2]>=100&&A[v1][v2]<=250)
								{
									cost[v1][v2]=2000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=251&&A[v1][v2]<=500)
								{	
									cost[v1][v2]=4000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=501&&A[v1][v2]<=750)
								{
									cost[v1][v2]=6000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=751&&A[v1][v2]<=1000)
								{
									cost[v1][v2]=8000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1001&&A[v1][v2]<=1400)
								{
									cost[v1][v2]=10000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1401&&A[v1][v2]<=1800)
								{
									cost[v1][v2]=15000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1801)
								{
									cost[v1][v2]=17000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								break;
							}
							case 3:
							{
								if(A[v1][v2]>=100&&A[v1][v2]<=250)
								{
									cost[v1][v2]=2500;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=251&&A[v1][v2]<=500)
								{
									cost[v1][v2]=5000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=501&&A[v1][v2]<=750)
								{
									cost[v1][v2]=7000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=751&&A[v1][v2]<=1000)
								{
									cost[v1][v2]=10000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1001&&A[v1][v2]<=1400)
								{
									cost[v1][v2]=15000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1401&&A[v1][v2]<=1800)
								{
									cost[v1][v2]=25000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1801)
								{
									cost[v1][v2]=28000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								break;
							}
					
						}	
					}while(choice<0);	
					
					break;	
        		}
        		case 2:
        		{
        							if(A[v1][v2]>=100&&A[v1][v2]<=250)
								{
									cost[v1][v2]=2000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=251&&A[v1][v2]<=500)
								{	
									cost[v1][v2]=4000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=501&&A[v1][v2]<=750)
								{
									cost[v1][v2]=6000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=751&&A[v1][v2]<=1000)
								{
									cost[v1][v2]=8000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1001&&A[v1][v2]<=1400)
								{
									cost[v1][v2]=10000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1401&&A[v1][v2]<=1800)
								{
									cost[v1][v2]=15000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1801)
								{
									cost[v1][v2]=17000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
							
								break;
        		}
        		case 3:
        		{
        							if(A[v1][v2]>=100&&A[v1][v2]<=250)
								{
									cost[v1][v2]=1500;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=251&&A[v1][v2]<=500)
								{
									cost[v1][v2]=3000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=501&&A[v1][v2]<=750)
								{
									cost[v1][v2]=4500;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=751&&A[v1][v2]<=1000)
								{
									cost[v1][v2]=6000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1001&&A[v1][v2]<=1400)
								{
									cost[v1][v2]=7000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1401&&A[v1][v2]<=1800)
								{
									cost[v1][v2]=8000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1801)
								{
									cost[v1][v2]=10000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								
								break;
        		}
        	}     	
         }while(ch1<0);
        
         cout << "\n \nDo you want to travel to another cities: (y or n)?";
	cin >> ans;
 	}while(ans=='y'||ans=='Y');	
	 	
}
void printProgBar( int percent )
{
    string bar;

  for(int i = 0; i < 50; i++)
    {
        if( i < (percent/2))
        {
            bar.replace(i,1,"=");
        }
        else if( i == (percent/2))
        {
            bar.replace(i,1,">");
        }
	else
        {
            bar.replace(i,1," ");
        }
  }

  cout<< "\r" "[" << bar << "] ";
  cout.width( 3 );
  cout<< percent << "%     " << std::flush;
}
void graph1::display()
{		
		cout<<"\n THE ADJACENCY MATRIX IS:\n";
		cout<<"\t";
		for(int i=0;i<6;i++)
		{
			cout<<"\t"<<city[i]<<"\tcost";
		}
		
		cout<<"\n------------------------------------------------------------------------------------------------------------\n";
		for(int i=0;i<6;i++)
		{
			cout<<"\t"<<city[i]<<"\t|";
			for(int j=0;j<6;j++)
			{
				cout<<A[i][j]<<"\t";
				cout<<cost[i][j]<<"\t";
			}
			
		cout<<"\n";
		}	
		
}
	
/*void graph1::display()
{		
		cout<<"\n THE ADJACENCY MATRIX IS:\n";
		 for(int i=0;i<6;i++)
		{
                    	cout<< "\t\t" << city[i];
		}
                  for(int i=0;i<6;i++)
		  {
				cout << "\n"<< city[i]<<"\t";
		            	for (int j=0;j<6; j++)
		                	cout << "\t\t"<< A[i][j];
		  }
}*/
void graph1::exist()
{
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			if(A[i][j]!=0)
			{
				cout<<"\n You will travel from this path:"<<city[i]<<"====>"<<city[j]<<"\n";
			}
		}
	}
}
void graph1::dfs(int v1)
{
	       int v2;
               visited[v1]=1;
               cout << v1 << "\t";
               for (v2=0;v2<6;v2++)
               {
                   if (A[v1][v2]!=0 && !visited[v2])
                       dfs(v2);
               }
}
void graph1::initvisited()
{
	 for(int i=0;i<6;i++)			//mark as visited
             	  visited[i]=0;
}	
void graph1::bfs(int v1)
{
	int queue[20],front=0,rear=0;
	cout<<v1;
	visited[v1]=1;
	while(1)
	{
		for(int i=0;i<6;i++)
		{
			if(A[v1][i]!=0 && !visited[i])
			{
				cout<<i;
				visited[i]=1;
				queue[front]=i;
				front++;
			}
		}
		if(front==rear)
			break;
	
		v1=queue[rear];
		rear++;
	};
	
}
int main()
{
	graph1 m;
	int choice;
	char choice1;
	int password;
	password = 1234;
	cout << "Enter password:";
	cin >> password;
    	l1:
	if (password == 1234)
        {
      	    cout << "Access Granted...\n";
            cout<<"\n---------------LOADING-----------------------";
            int N = 100;

            for(int i = 0; i < N; i++)
            {
                float p = (i / (float) N) * (float) 100;
                printProgBar(p);
                usleep(19990);
            }
            printProgBar(100);
            cout << endl;

            goto step1;
        }

    	while(password != 1234)
        {
            cout << "Access Denied.....Invalid Username/Password:";
	    cout<<"\n enter correct password:";
	    cin>>password;
	    if(password==1234)
		goto l1;
	     
        }

    step1:
	
	do{
	cout<<"\n ********* WELCOME TO TRAVEL AGENCY********";
	cout<<"\n\n 1>create \n 2>display\n 3>existing path\n 4>dfs traversal\n 5>bfs traversal 6>exit\n";
	cout<<"\n\n Enter your choice";
	cin>>choice;
	switch(choice)
	{
		case 1:
		{
			m.create();
			break;
		}
		case 2:
		{
			m.display();
			break;
		}
		case 3:
		{
			m.exist();
			break;
		}
		case 4:
		{
			int v1;
			cout<<"\n enter the starting vertex:";
			cin>>v1;
			cout<<"\n dfs traversal is:";
			m.initvisited();
			m.dfs(v1);
			break;
		}
		case 5:
		{
			int v1;
			cout<<"\n enter the starting vertex:";
			cin>>v1;
			cout<<"\n bfs traversal is:";
			m.initvisited();
			m.bfs(v1);
			break;
		}
		case 6:
			exit(0);
		default:
			cout<<"\n enter valid choice:";
			
		}
	cout<<"\n do you want to continue:";
	cin>>choice1;
	}while(choice1=='y'||choice1=='Y');

return 0;
}
		
	
/*  

		OUTPUT

dell@dell-Inspiron-3542:~$ cd adsa19
dell@dell-Inspiron-3542:~/adsa19$ g++ mini.cpp
dell@dell-Inspiron-3542:~/adsa19$ ./a.out
Enter password:123
Access Denied.....Invalid Username/Password:
 enter correct password:1234
Access Granted...

[==================================================] 100%     

 ********* WELCOME TO TRAVEL AGENCY********

 1>create 
 2>display
 3>existing path
 4>dfs traversal
 5>bfs traversal 6>exit


 Enter your choice1

0:Mumbai
1:Pune
2:Nashik
3:Delhi
4:Kolkata
5:Goa

 
Enter the city from where you want to start travel: 
0

0:Mumbai
1:Pune
2:Nashik
3:Delhi
4:Kolkata
5:Goa

 
Enter the city where you want to go:  1

You will travel 150  km

 Enter the way of transport 1)Flight  2)Bus  3)Car : 2


 COST IS: 2000
 
Do you want to travel to another cities: (y or n)?y

0:Mumbai
1:Pune
2:Nashik
3:Delhi
4:Kolkata
5:Goa

 
Enter the city from where you want to start travel: 
2

0:Mumbai
1:Pune
2:Nashik
3:Delhi
4:Kolkata
5:Goa

 
Enter the city where you want to go:  3

You will travel 1250  km

 Enter the way of transport 1)Flight  2)Bus  3)Car : 1


 SELECT YOUR CLASS

1>ECONOMY CLASS  2>BUSSINESS CLASS 3>FIRST CLASS 2

 COST IS: 10000
 
Do you want to travel to another cities: (y or n)?y

0:Mumbai
1:Pune
2:Nashik
3:Delhi
4:Kolkata
5:Goa

 
Enter the city from where you want to start travel: 
2

0:Mumbai
1:Pune
2:Nashik
3:Delhi
4:Kolkata
5:Goa

 
Enter the city where you want to go:  4

You will travel 1700  km

 Enter the way of transport 1)Flight  2)Bus  3)Car : 1


 SELECT YOUR CLASS

1>ECONOMY CLASS  2>BUSSINESS CLASS 3>FIRST CLASS 3

 COST IS: 25000
 
Do you want to travel to another cities: (y or n)?y

0:Mumbai
1:Pune
2:Nashik
3:Delhi
4:Kolkata
5:Goa

 
Enter the city from where you want to start travel: 
3

0:Mumbai
1:Pune
2:Nashik
3:Delhi
4:Kolkata
5:Goa

 
Enter the city where you want to go:  4

You will travel 1550  km

 Enter the way of transport 1)Flight  2)Bus  3)Car : 3


 COST IS: 8000
 
Do you want to travel to another cities: (y or n)?n

 do you want to continue:y

 ********* WELCOME TO TRAVEL AGENCY********

 1>create 
 2>display
 3>existing path
 4>dfs traversal
 5>bfs traversal 6>exit


 Enter your choice2

 THE ADJACENCY MATRIX IS:
		Mumbai	cost	Pune	cost	Nashik	cost	Delhi	cost	Kolkata	cost	Goa	cost
------------------------------------------------------------------------------------------------------------
	Mumbai	|0	0	150	2000	0	0	0	0	00	0	0	
	Pune	|150	0	0	0	0	0	0	0	00	0	0	
	Nashik	|0	0	0	0	0	0	1250	10000	1700	25000	0	0	
	Delhi	|0	0	0	0	1250	0	0	0	1550	8000	0	0	
	Kolkata	|0	0	0	0	1700	0	1550	0	00	0	0	
	Goa	|0	0	0	0	0	0	0	0	00	0	0	

 do you want to continue:y

 ********* WELCOME TO TRAVEL AGENCY********

 1>create 
 2>display
 3>existing path
 4>dfs traversal
 5>bfs traversal 6>exit


 Enter your choice3

 You will travel from this path:Mumbai====>Pune

 You will travel from this path:Pune====>Mumbai

 You will travel from this path:Nashik====>Delhi

 You will travel from this path:Nashik====>Kolkata

 You will travel from this path:Delhi====>Nashik

 You will travel from this path:Delhi====>Kolkata

 You will travel from this path:Kolkata====>Nashik

 You will travel from this path:Kolkata====>Delhi

 do you want to continue:y

 ********* WELCOME TO TRAVEL AGENCY********

 1>create 
 2>display
 3>existing path
 4>dfs traversal
 5>bfs traversal 6>exit


 Enter your choice4

 enter the starting vertex:0

 dfs traversal is:0	1	
 do you want to continue:y

 ********* WELCOME TO TRAVEL AGENCY********

 1>create 
 2>display
 3>existing path
 4>dfs traversal
 5>bfs traversal 6>exit


 Enter your choice5

 enter the starting vertex:1

 bfs traversal is:10
 do you want to continue:y

 ********* WELCOME TO TRAVEL AGENCY********

 1>create 
 2>display
 3>existing path
 4>dfs traversal
 5>bfs traversal 6>exit


 Enter your choice6

*/

