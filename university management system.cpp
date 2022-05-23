#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

void teacher_portal();
void open_cafe();
void gaming_zone();
void CE_112L_MTS_II_B();
void CE_112L_MTS_II_A();
void CE_112L_BEEP_II_A();
void CE_115L_BEBME_A();
void grade(float total1);
void name();
void cafe();
void fast_food();
void desserts();
void Sweet();
void Juices();
void drinks();
int  checkwin();
void board();
void game1();
void game2();
char square[10] = {'0','1','2','3','4','5','6','7','8','9'};



int main() 
{
	int press,opt;
    cout<<endl<<endl<<endl; 
    
	cout<<"\t\t PRESS 1 TO OPEN TEACHER PORTAL"<<endl<<endl;
	cout<<"\t\tPRESS 2 TO OPEN UNIVERSITY CAFE"<<endl<<endl;
	cout<<"\t\tPRESS 3 TO OPEN GAMING ZONE"<<endl<<endl;
	cout<<"\t\tENTER THE OPTION NUMBER: ";
	cin>>press;
		if(press==1)
	{
		char option1, y,Y; 
	cout<<endl<<endl<<"\t\t\t ***Teacher portal*** ";
	cout<<endl<<endl<<"\t\t\t <<<Select class>>>";
	cout<<endl<<endl<<"\t\t   press 1 for CE-112L MTS II B";
	cout<<endl<<"\t\t   press 2 for CE-112L MTS II-A";
	cout<<endl<<"\t\t   press 3 for CE-112L BEEP II-A";
	cout<<endl<<"\t\t   press 4 for CE-115L BEBME A";
	int option;
	do{
	cout<<endl<<endl<<"\t  <<<press key to Enter in respective class>>>: ";
	cin>>option;
	switch(option)
	{ case 1:
		cout<<endl<<endl<<"\t        <<**Weolcome to CE-112L MTS II B**>>";
       CE_112L_MTS_II_B();
		break;
	  case 2:
		cout<<endl<<endl<<"\t        <<**Weolcome to CE-112L MTS II A**>>";
		CE_112L_MTS_II_A();
		break;	
	  case 3:
		cout<<endl<<endl<<"\t        <<**Weolcome to CE-112L BEEP II-A**>> ";
        CE_112L_BEEP_II_A();  
		   break; 
      case 4:
		cout<<endl<<endl<<"\t        <<**Weolcome to CE-115L BEBME A**>> ";	
       CE_115L_BEBME_A();
	   	break;
	  default:
	    cout<<endl<<"\tyou have entered an inappropriate key!!! ";
	     cout<<endl<<"\t if you want to continue please enter Y/y or enter any key to exit:";
	    break;
	    return 0;
} 
   cin>>option1;
}  while(option1=='Y'||option1=='y');
	}
int n;
	
		if(press==2)
	{
		 open_cafe();
	}
	
	
		if(press==3)
	{
	   cout<<endl<<"\t\t press 1 for Tic-Tac-toe game:  ";
	   cout<<endl<<"\t\t press 2 for Number Guess game:  ";
	   cout<<endl<<"\t\tEnter option: ";
	   cin>>n;
	   if(n==1)
	   { 
	   game1();
	   }
	   if(n==2)
	   {
	   	game2();
	   }
	}
	
	
	return 0;
}


void open_cafe()
{	int n,cp=1,opt;
		
	do{
		char value;
		if(cp==1)
		{	
		cout<<endl<<endl<<endl;
	    cout<<"\t\t\t------------------"<<endl;	
	    cout<<"\t\t\t  UNIVERSITY CAFE"<<endl;
	    cout<<"\t\t\t------------------";
	    cout<<endl<<endl;
		cout<<"\t\tPRESS 1 TO ORDER FAST FOOD"<<endl;
	    cout<<"\t\tPRESS 2 TO ORDER DESSERTS"<<endl;
        cout<<"\t\tPRESS 3 TO ORDER DRINKS"<<endl;
	    cout<<"\t\tEnter the number: ";
	    cin>>opt;
	    if(opt==1)
	    {
	    	fast_food();
		    cafe();
		}
		if(opt==2)
		{
			Sweet();
		    desserts();
		}
		if(opt==3)
		{
			Juices();
			drinks();
			
		}
	}
		cout<<endl<<endl<<"\t\tDO YOU WANT TO BUY MORE ITEMS: ";
		cin>>value;
		if (value=='y'||value=='Y')
		{
		cp=1;
		}	
	    else if (value=='n'||value=='N')
		{
		cp=0;
		} 
	    cout<<endl<<endl;
	}
     while(cp==1);
}
//	cout<<"\t\tTHANKS FOR YOUR ORDER :) "<<endl;

void cafe()
{
	int num,check=1;
	float total=0;
	
		
	do
	{   
	    char val;
		if(check==1)
		{  
	    cout<<"\t\t\t\tMENU"<<endl;;	  
	    cout<<"\t\t\t--------------------";
	    cout<<endl;
	    cout<<"\t\t\t1. PIZZA --- Rs.500"<<endl;
	    cout<<"\t\t\t2. BURGER --- Rs.300"<<endl;
	    cout<<"\t\t\t3. CHOWMEIN --- Rs.380"<<endl;
	    cout<<"\t\t\t4. FINGER FISH --- Rs.400"<<endl;
	    cout<<"\t\t\t5. BEEF CHILLI DRY --- Rs.490"<<endl;
	    cout<<"\t\t\t6. RUSSIAN SALAD --- Rs.220"<<endl;
	    cout<<"\t\t\t7. FRIED CHICKEN --- Rs.320"<<endl;
	    cout<<"\t\t\t8. DAHI BALY --- Rs.120"<<endl;
	    cout<<"\t\t\t9. WINGS --- Rs.180"<<endl;
	    cout<<"\t\t\t10. ROLL PARATHA --- Rs.120"<<endl;	
	    
	    cout<<"\t\tENTER THE ITEM NUMBER YOU WANT TO BUY: ";
	    cin>>num;
	    cout<<endl;
	    
	    if (num==1)
	    {
		total=total+500;
		}
	    else if (num==2)
	    {
		total=total+300;
		}
	    else if (num==3)
	    {
		total=total+380;
		}
	    else if (num==4)
	    {
		total=total+400;
		}
	    else if (num==5)
	    {
		total=total+490;
		}
	    else if (num==6)
	    {
		total=total+220;
		}
	    else if (num==7)
	    {
		total=total+320;
		}
	    else if (num==8)
	    {
		total=total+120;
		}
	    else if (num==9)
	    {
		total=total+180;
		}
	    else if (num==10)
	    {
		total=total+120;
		}

	    }
	    cout<<"\t\tDO YOU WANT TO SEE YOUR BILL ('Y' OR 'N'):";
		cin>>val;
		if (val=='y'||val=='Y')
		{check=0;}	
	    else if (val=='n'||val=='N')
		{check=1;} 
	    cout<<endl<<endl;
    } while (check!=0);
	
	
	cout<<endl<<endl;
	cout<<"\t\tTOTAL BILL: "<<total;
		
	
}

void desserts()
{
	int num,check=1;
	float total=0;
		
	
	do
	{   
	    char ans;
		if(check==1)
		{
        cout<<endl;
        cout<<"\t\t\t\tMENU"<<endl;;	  
	    cout<<"\t\t\t--------------------";
	    cout<<endl;
	    cout<<"\t\t\t1. CHOCOLATE MUSE --- Rs.300"<<endl;
	    cout<<"\t\t\t2. LEMON TORTE --- Rs.350"<<endl;
	    cout<<"\t\t\t3. FILLET TORTS --- Rs.520"<<endl;
	    cout<<"\t\t\t4. CHEEESE CAKE --- Rs.700"<<endl;
	    cout<<"\t\t\t5. LOTUS CAKE --- Rs.700"<<endl;
	    cout<<endl;	       
	       
	    cout<<"\t\tENTER THE ITEM NUMBER YOU WANT TO BUY: ";
	    cin>>num;
	    cout<<endl;
	    
	    if (num==1)
	    {
		total=total+300;
		}
	    else if (num==2)
	    {
		total=total+350;
		}
	    else if (num==3)
	    {
		total=total+520;
		}
	    else if (num==4)
	    {
		total=total+700;
		}
	    else if (num==5)
	    {
		total=total+700;
		}
    
	    }
	    cout<<"\t\tDO YOU WANT TO SEE YOUR BILL ('Y' OR 'N'):";
		cin>>ans;
		if (ans=='y'||ans=='Y')
		{check=0;}	
	    else if (ans=='n'||ans=='N')
		{check=1;} 
	    cout<<endl<<endl;
    } while (check!=0);
    
    cout<<endl<<endl;
	cout<<"\t\tTOTAL BILL: "<<total;
}
void drinks()
{
	int num,check=1;
	float total=0;
		
	
	do
	{   
	    char bill;
		if(check==1)
		{
     	cout<<endl;
     	cout<<"\t\t\t\tMENU"<<endl;;	  
	    cout<<"\t\t\t--------------------";
	    cout<<endl;
    	cout<<"\t\t\t1. MINT MARGARITA --- Rs.180"<<endl;
	    cout<<"\t\t\t2. CHOCOLATE SHAKE --- Rs.300"<<endl;
	    cout<<"\t\t\t3. COKE --- Rs.70"<<endl;
	    cout<<"\t\t\t4. WATER --- Rs.50"<<endl;
	    cout<<endl<<endl;     
	       
	    cout<<"\t\tENTER THE ITEM NUMBER YOU WANT TO BUY: ";
	    cin>>num;
	    cout<<endl;
	    
	    if (num==1)
	    {
		total=total+180;
		}
	    else if (num==2)
	    {
		total=total+300;
		}
	    else if (num==3)
	    {
		total=total+70;
		}
	    else if (num==4)
	    {
		total=total+50;
		}

    
	    }
	    cout<<"\t\tDO YOU WANT TO SEE YOUR BILL ('Y' OR 'N'):";
		cin>>bill;
		if (bill=='y'||bill=='Y')
		{
		check=0;
		}	
	    else if (bill=='n'||bill=='N')
		{
		check=1;
		} 
	    cout<<endl<<endl;
    } while (check!=0);
    
    cout<<endl<<endl;
	cout<<"\t\tTOTAL BILL: "<<total;
}

void fast_food()
{
	cout<<endl<<endl;
    cout<<"\t\t\t     FAST FOOD :)"<<endl;
    cout<<"\t\t\t--------------------"<<endl<<endl;
}

void Sweet()
{
	cout<<endl<<endl;
    cout<<"\t\t\t DESSERTS :)"<<endl;
    cout<<"\t\t\t-----------------"<<endl<<endl;
}
void Juices()
{
	cout<<endl<<endl;
    cout<<"\t\t\t   DRINKS :)"<<endl;
    cout<<"\t\t\t-----------------"<<endl<<endl;
}

	
	
	


void game1()
{ 
int player = 1,i,choice;

    char mark;
    do
    {
        board();
        player=(player%2)?1:2;

        cout << "Player "<<player<< " Enter a number :  ";
        cin>>choice;

        mark=(player==1) ? 'X' : 'O';  //ternary operator 

        if(choice==1 && square[1]=='1')

            square[1]=mark;
        else if(choice==2 && square[2]=='2')

            square[2]=mark;
        else if(choice==3 && square[3]=='3')

            square[3]=mark;
        else if(choice==4 && square[4]=='4')

            square[4]=mark;
        else if (choice==5 && square[5]=='5')

            square[5]=mark;
        else if(choice==6 && square[6]=='6')

            square[6]=mark;
        else if(choice==7 && square[7]=='7')

            square[7]=mark;
        else if(choice==8 && square[8]=='8')

            square[8]=mark;
        else if(choice==9 && square[9]=='9')

            square[9]=mark;
        else
        {
            cout<<"Invalid move ";
            player--;
            cin.ignore();
            cin.get();
        }
        i=checkwin();

        player++;
    }
	while(i==-1);
    board();
    if(i==1)

        cout<<"==>\aPlayer "<<--player<<" win ";
    else
        cout<<"==>\aGame draw";

    cin.ignore();
    cin.get();
}	

int checkwin()
{ 
    if(square[1]==square[2] && square[2]==square[3])

        return 1;
    else if(square[4]==square[5] && square[5]==square[6])

        return 1;
    else if(square[7]==square[8] && square[8]==square[9])

        return 1;
    else if(square[1]==square[4] && square[4]==square[7])

        return 1;
    else if(square[2]==square[5] && square[5]==square[8])

        return 1;
    else if(square[3]==square[6] && square[6]==square[9])

        return 1;
    else if(square[1]==square[5] && square[5]==square[9])

        return 1;
    else if(square[3]==square[5] && square[5]==square[7])

        return 1;
    else if(square[1] != '1' && square[2] != '2' && square[3] != '3' 
                    && square[4] != '4' && square[5] != '5' && square[6] != '6' 
                  && square[7] != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return -1;
}
//NOW TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK//
void board()
{
    system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "\tPlayer 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "     |     |     " << endl << endl;
checkwin();
}

void CE_112L_MTS_II_A()
{

int rn;
float lperfw,lrepw,midw,finalw,CEAw,total;
int size= 42;
string name[size];
int rollnum[size];
float lab1perf[size];
float lab2perf[size];
float lab3perf[size];
float lab4perf[size];
float lab5perf[size];
float lab6perf[size];
float lab7perf[size];
float lab8perf[size];
float lab9perf[size];
float lab10perf[size];
float lab11perf[size];
float lab12perf[size];
float lab13perf[size];
float lab14perf[size];
float labrep1[size];
float labrep2[size];
float labrep3[size];
float labrep4[size];
float labrep5[size];
float labrep6[size];
float labrep7[size];
float labrep8[size];
float labrep9[size];
float labrep10[size];
float labrep11[size];
float labrep12[size];
float labrep13[size];
float labrep14[size];
float tlabrep[size];	
float tlabperf[size];	
float midterm[size];
float final[size];
float CEA[size];
float midterm1[size];
float final1[size];
float CEA1[size];

string line;
ifstream file2;
file2.open("rabiah.csv");
int i=0;
while (getline(file2, line)) // read whole line into line
{
    string rand;
     istringstream iss(line); // string stream
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    iss >> lab1perf[i];
    getline(iss, rand, ',');
    iss >>  lab2perf[i];    
    getline(iss, rand, ',');
    iss >>  lab3perf[i];    
    getline(iss, rand, ',');
	iss>> lab4perf[i];    
    getline(iss, rand, ',');
	iss>> lab5perf[i];
	getline(iss, rand, ',');
	iss>> lab6perf[i];
	getline(iss, rand, ',');
	iss>> lab7perf[i];
	getline(iss, rand, ',');
	iss>> lab8perf[i];
	getline(iss, rand, ',');
	iss>> lab9perf[i];
	getline(iss, rand, ',');
	iss>> lab10perf[i];
    getline(iss, rand, ',');
    iss>> lab11perf[i];
    getline(iss, rand, ',');
    iss>> lab12perf[i];
    getline(iss, rand, ',');
    iss>> lab13perf[i];
    getline(iss, rand, ',');
    iss>> lab14perf[i];
    getline(iss, rand, ',');
	 
	iss>> tlabperf[i];	
	getline(iss, rand, ',');   
	iss>> labrep1[i];
	getline(iss, rand, ',');
	iss>> labrep2[i];
	getline(iss, rand, ',');
	iss>> labrep3[i];
	getline(iss, rand, ',');
	iss>> labrep4[i];
	getline(iss, rand, ',');
	iss>> labrep5[i];
	getline(iss, rand, ',');
	iss>> labrep6[i];
	getline(iss, rand, ',');
	iss>> labrep7[i];
	getline(iss, rand, ',');
	iss>> labrep8[i];
	getline(iss, rand, ',');
	iss>> labrep9[i];	
	getline(iss, rand, ',');
	iss>> labrep10[i];
	getline(iss, rand, ',');
	iss>> labrep11[i];
	getline(iss, rand, ',');
	iss>> labrep12[i];
	getline(iss, rand, ',');
	iss>> labrep13[i];
	getline(iss, rand, ',');
	iss>> labrep14[i];	
	getline(iss, rand, ',');
	iss>> tlabrep[i];	
	getline(iss, rand, ',');
	iss>> midterm[i]; 
	getline(iss, rand, ',');
	iss>> final[i]; 
	getline(iss, rand, ',');
	iss>> CEA[i]; 
	i++;

}
cout<<endl<<endl<<endl;
for(int i=0;i<size;i++)
{tlabperf[i]=(lab1perf[i]+lab2perf[i]+lab3perf[i]+lab4perf[i]+lab5perf[i]+lab6perf[i]+lab7perf[i]+lab8perf[i]+lab9perf[i]+lab10perf[i]+lab11perf[i]+lab12perf[i]+lab13perf[i]+lab14perf[i]);
tlabrep[i]=(labrep1[i]+labrep2[i]+labrep3[i]+labrep4[i]+labrep5[i]+labrep6[i]+labrep7[i]+labrep8[i]+labrep9[i]+labrep10[i]+labrep11[i]+labrep12[i]+labrep13[i]+labrep14[i]);
	}
    int j=1;
    while(j<=5)
	{cout<<"\t  Enter the ROLL NO of the student: ";
	cin>>rn;	
	cout<<endl<<"\t  Enter the weightage for LAB PERFORMANCES: ";
	cin>>lperfw;
	
	cout<<endl<<"\t  Enter the weightage for LAB REPORTS: ";
	cin>>lrepw;
	
	cout<<endl<<"\t  Enter the weightage for midterm exams: ";
	cin>>midw;
	
	cout<<endl<<"\t  Enter the weightage for finalterm exam: ";
	cin>>finalw;
	
	cout<<endl<<"\t  Enter the weightage for Project(CEA): ";
	cin>>CEAw;	 
	
	total=lperfw+lrepw+midw+finalw+CEAw;

    for(int i=0;i<size;i++)
    {
    	if (rn-rollnum[i]==0)
    	{
    		tlabperf[i]=(tlabperf[i]/210)*lperfw;
    		tlabrep[i]=(tlabrep[i]/210)*lrepw;
    		midterm1[i]=(midterm[i]/55)*midw;
    		final1[i]=(final[i]/50)*finalw;
    		CEA1[i]=(CEA[i]/20)*CEAw;
    		
			char result;
    		float total1;
    		cout<<endl<<endl;
    		cout<<"\t\tNAME: "<<name[i]<<endl;
    		cout<<"\t\tROLL NO: "<<rollnum[i]<<endl;
    		cout<<"\t\tLAB PERFORMENCE: "<<tlabperf[i]<<"/"<<lperfw<<endl;
    		cout<<"\t\tLAB REPORT: "<<tlabrep[i]<<"/"<<lrepw<<endl;
    		cout<<"\t\tMIDS: "<<midterm1[i]<<"/"<<midw<<endl;
			cout<<"\t\tFINALS: "<<final1[i]<<"/"<<finalw<<endl;
			cout<<"\t\tPROJECT: "<<CEA1[i]<<"/"<<CEAw<<endl;
			cout<<endl<<endl<<endl;
			total1=tlabperf[i]+tlabrep[i]+midterm[i]+final[i]+CEA[i];
			cout<<"\t\ttotal: "<<total1<<endl<<endl;
			cout<<"\t\tDo you want to generate grade: "<<endl;
			cout<<"\t\t if you want to generate enter y or Y:  ";
			cin>>result;
			
			if(result=='Y'||result=='y')
			{

				grade(total1);
}			
}    
}
}
}


void CE_112L_MTS_II_B()
{

int rn;
float lperfw,lrepw,midw,finalw,CEAw,total;
int size= 30;
string name[size];
int rollnum[size];
float lab1perf[size];
float lab2perf[size];
float lab3perf[size];
float lab4perf[size];
float lab5perf[size];
float lab6perf[size];
float lab7perf[size];
float lab8perf[size];
float lab9perf[size];
float lab10perf[size];
float lab11perf[size];
float lab12perf[size];
float lab13perf[size];
float lab14perf[size];
float labrep1[size];
float labrep2[size];
float labrep3[size];
float labrep4[size];
float labrep5[size];
float labrep6[size];
float labrep7[size];
float labrep8[size];
float labrep9[size];
float labrep10[size];
float labrep11[size];
float labrep12[size];
float labrep13[size];
float labrep14[size];
float midterm[size];
float tlabrep[size];
float tlabperf[size];
float final[size];
float CEA[size];

string line;
ifstream file1;
file1.open("khadija.csv");
int i=0;
while (getline(file1, line)) // read whole line into line
{
    string rand;
    istringstream iss(line); // string stream
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    iss >> lab1perf[i];
    getline(iss, rand, ',');
    iss >>  lab2perf[i];    
    getline(iss, rand, ',');
    iss >>  lab3perf[i];    
    getline(iss, rand, ',');
	iss>> lab4perf[i];    
    getline(iss, rand, ',');
	iss>> lab5perf[i];
	getline(iss, rand, ',');
	iss>> lab6perf[i];
	getline(iss, rand, ',');
	iss>> lab7perf[i];
	getline(iss, rand, ',');
	iss>> lab8perf[i];
	getline(iss, rand, ',');
	iss>> lab9perf[i];
	getline(iss, rand, ',');
	iss>> lab10perf[i];
    getline(iss, rand, ',');
    iss>> lab11perf[i];
    getline(iss, rand, ',');
    iss>> lab12perf[i];
    getline(iss, rand, ',');
    iss>> lab13perf[i];
    getline(iss, rand, ',');
    iss>> lab14perf[i];
    getline(iss, rand, ',');    
    
	iss>> tlabperf[i];
    getline(iss, rand, ',');
	 
	iss>> labrep1[i];
	getline(iss, rand, ',');
	iss>> labrep2[i];
	getline(iss, rand, ',');
	iss>> labrep3[i];
	getline(iss, rand, ',');
	iss>> labrep4[i];
	getline(iss, rand, ',');
	iss>> labrep5[i];
	getline(iss, rand, ',');
	iss>> labrep6[i];
	getline(iss, rand, ',');
	iss>> labrep7[i];
	getline(iss, rand, ',');
	iss>> labrep8[i];
	getline(iss, rand, ',');
	iss>> labrep9[i];	
	getline(iss, rand, ',');
	iss>> labrep10[i];
	getline(iss, rand, ',');
	iss>> labrep11[i];
	getline(iss, rand, ',');
	iss>> labrep12[i];
	getline(iss, rand, ',');
	iss>> labrep13[i];
	getline(iss, rand, ',');
	iss>> labrep14[i];	
	getline(iss, rand, ',');
	
	iss>> tlabrep[i];	
    getline(iss, rand, ','); 
	iss>> midterm[i]; 
	getline(iss, rand, ',');
	iss>> final[i]; 
	getline(iss, rand, ',');
	iss>> CEA[i]; 
	i++;
}
cout<<endl<<endl<<endl;
for(int i=0;i<size;i++)
    {
tlabperf[i]=(lab1perf[i]+lab2perf[i]+lab3perf[i]+lab4perf[i]+lab5perf[i]+lab6perf[i]+lab7perf[i]+lab8perf[i]+lab9perf[i]+lab10perf[i]+lab11perf[i]+lab12perf[i]+lab13perf[i]+lab14perf[i]);
tlabrep[i]=(labrep1[i]+labrep2[i]+labrep3[i]+labrep4[i]+labrep5[i]+labrep6[i]+labrep7[i]+labrep8[i]+labrep9[i]+labrep10[i]+labrep11[i]+labrep12[i]+labrep13[i]+labrep14[i]);
	}
	int j=1;
	while(j<=5)
{
	 cout<<"\t  Enter the ROLL NO of the student: ";
	cin>>rn;	
	cout<<endl<<"\t Enter the weightage for LAB PERFORMANCES: ";
	cin>>lperfw;
	
	cout<<endl<<"\t Enter the weightage for LAB REPORTS: ";
	cin>>lrepw;
	
	cout<<endl<<"\t Enter the weightage for midterm exams: ";
	cin>>midw;
	
	cout<<endl<<"\t Enter the weightage for finalterm exam: ";
	cin>>finalw;
	
	cout<<endl<<"\t Enter the weightage for Project(CEA): ";
	cin>>CEAw;	 
	
	total=lperfw+lrepw+midw+finalw+CEAw;

    for(int i=0;i<size;i++)
    {
    	if (rn-rollnum[i]==0)
    	{
    		tlabperf[i]=(tlabperf[i]/210)*lperfw;
    		tlabrep[i]=(tlabrep[i]/210)*lrepw;
    		midterm[i]=(midterm[i]/55)*midw;
    		final[i]=(final[i]/50)*finalw;
    		CEA[i]=(CEA[i]/20)*CEAw;
    		
			char result;
    		float total1;
    		cout<<endl<<endl;
    		cout<<"\t\tNAME: "<<name[i]<<endl;
    		cout<<"\t\tROLL NO: "<<rollnum[i]<<endl;
    		cout<<"\t\tLAB PERFORMENCE: "<<tlabperf[i]<<"/"<<lperfw<<endl;
    		cout<<"\t\tLAB REPORT: "<<tlabrep[i]<<"/"<<lrepw<<endl;
    		cout<<"\t\tMIDS: "<<midterm[i]<<"/"<<midw<<endl;
			cout<<"\t\tFINALS: "<<final[i]<<"/"<<finalw<<endl;
			cout<<"\t\tPROJECT: "<<CEA[i]<<"/"<<CEAw<<endl;
			cout<<endl<<endl<<endl;
		total1=tlabperf[i]+tlabrep[i]+midterm[i]+final[i]+CEA[i];
			cout<<"\t\ttotal: "<<total1<<endl<<endl;
			cout<<"\t\tDo you want to generate grade: "<<endl;
			cout<<"\t\t if you want to generate enter y or Y:  ";
			cin>>result;
			
			if(result=='Y'||result=='y')
			{

				grade(total1);
		
}			
}    
}
}
}
		
 

void CE_112L_BEEP_II_A()
{
float lperfw,lrepw,midw,finalw,CEAw,total;
int rn;
int size= 35;
string name[size];
int rollnum[size];
float lab1perf[size];
float lab2perf[size];
float lab3perf[size];
float lab4perf[size];
float lab5perf[size];
float lab6perf[size];
float lab7perf[size];
float lab8perf[size];
float lab9perf[size];
float lab10perf[size];
float lab11perf[size];
float lab12perf[size];
float lab13perf[size];
float lab14perf[size];
float labrep1[size];
float labrep2[size];
float labrep3[size];
float labrep4[size];
float labrep5[size];
float labrep6[size];
float labrep7[size];
float labrep8[size];
float labrep9[size];
float labrep10[size];
float labrep11[size];
float labrep12[size];
float labrep13[size];
float labrep14[size];


float tlabperf[size];
float tlabrep[size];
float midterm[size];
float final[size];
float CEA[size];

string line;
ifstream file5;
file5.open("anza.csv");
int i=0;
while (getline(file5, line)) // read whole line into line
{
    string rand;
    istringstream iss(line); // string stream
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    iss >> lab1perf[i];
    getline(iss, rand, ',');
    iss >>  lab2perf[i];    
    getline(iss, rand, ',');
    iss >>  lab3perf[i];    
    getline(iss, rand, ',');
	iss>> lab4perf[i];    
    getline(iss, rand, ',');
	iss>> lab5perf[i];
	getline(iss, rand, ',');
	iss>> lab6perf[i];
	getline(iss, rand, ',');
	iss>> lab7perf[i];
	getline(iss, rand, ',');
	iss>> lab8perf[i];
	getline(iss, rand, ',');
	iss>> lab9perf[i];
	getline(iss, rand, ',');
	iss>> lab10perf[i];
    getline(iss, rand, ',');
    iss>> lab11perf[i];
    getline(iss, rand, ',');
    iss>> lab12perf[i];
    getline(iss, rand, ',');
    iss>> lab13perf[i];
    getline(iss, rand, ',');
    iss>> lab14perf[i];
    getline(iss, rand, ','); 
	
	iss>> tlabperf[i];	
	getline(iss, rand, ',');
	   
	iss>> labrep1[i];
	getline(iss, rand, ',');
	iss>> labrep2[i];
	getline(iss, rand, ',');
	iss>> labrep3[i];
	getline(iss, rand, ',');
	iss>> labrep4[i];
	getline(iss, rand, ',');
	iss>> labrep5[i];
	getline(iss, rand, ',');
	iss>> labrep6[i];
	getline(iss, rand, ',');
	iss>> labrep7[i];
	getline(iss, rand, ',');
	iss>> labrep8[i];
	getline(iss, rand, ',');
	iss>> labrep9[i];	
	getline(iss, rand, ',');
	iss>> labrep10[i];
	getline(iss, rand, ',');
	iss>> labrep11[i];
	getline(iss, rand, ',');
	iss>> labrep12[i];
	getline(iss, rand, ',');
	iss>> labrep13[i];
	getline(iss, rand, ',');
	iss>> labrep14[i];	
	getline(iss, rand, ',');
	
    iss>> tlabrep[i];	
	getline(iss, rand, ',');	
	iss>> midterm[i]; 
	getline(iss, rand, ',');
	iss>> final[i]; 
	getline(iss, rand, ',');
	iss>> CEA[i]; 
	i++;
}
cout<<endl<<endl<<endl;

for(int i=0;i<size;i++)
{
tlabperf[i]=(lab1perf[i]+lab2perf[i]+lab3perf[i]+lab4perf[i]+lab5perf[i]+lab6perf[i]+lab7perf[i]+lab8perf[i]+lab9perf[i]+lab10perf[i]+lab11perf[i]+lab12perf[i]+lab13perf[i]+lab14perf[i]);
tlabrep[i]=(labrep1[i]+labrep2[i]+labrep3[i]+labrep4[i]+labrep5[i]+labrep6[i]+labrep7[i]+labrep8[i]+labrep9[i]+labrep10[i]+labrep11[i]+labrep12[i]+labrep13[i]+labrep14[i]);
}
   int j=1;
   while(j<=5)
{
	    cout<<"\t Enter the ROLL NO of the student: ";
	cin>>rn;	
	cout<<endl<<"\t Enter the weightage for LAB PERFORMANCES: ";
	cin>>lperfw;
	
	cout<<endl<<"\t Enter the weightage for LAB REPORTS: ";
	cin>>lrepw;
	
	cout<<endl<<"\t Enter the weightage for midterm exams: ";
	cin>>midw;
	
	cout<<endl<<"\t Enter the weightage for finalterm exam: ";
	cin>>finalw;
	
	cout<<endl<<"\t Enter the weightage for Project(CEA): ";
	cin>>CEAw;	 
	
	total=lperfw+lrepw+midw+finalw+CEAw;

    for(int i=0;i<size;i++)
    {
    	if (rn-rollnum[i]==0)
    	{
    		tlabperf[i]=(tlabperf[i]/210)*lperfw;
    		tlabrep[i]=(tlabrep[i]/210)*lrepw;
    		midterm[i]=(midterm[i]/55)*midw;
    		final[i]=(final[i]/50)*finalw;
    		CEA[i]=(CEA[i]/20)*CEAw;
    		
			char result;
    		float total1;
    		cout<<endl<<endl;
    		cout<<"\t\tNAME: "<<name[i]<<endl;
    		cout<<"\t\tROLL NO: "<<rollnum[i]<<endl;
    		cout<<"\t\tLAB PERFORMENCE: "<<tlabperf[i]<<"/"<<lperfw<<endl;
    		cout<<"\t\tLAB REPORT: "<<tlabrep[i]<<"/"<<lrepw<<endl;
    		cout<<"\t\tMIDS: "<<midterm[i]<<"/"<<midw<<endl;
			cout<<"\t\tFINALS: "<<final[i]<<"/"<<finalw<<endl;
			cout<<"\t\tPROJECT: "<<CEA[i]<<"/"<<CEAw<<endl;
			cout<<endl<<endl<<endl;
			total1=tlabperf[i]+tlabrep[i]+midterm[i]+final[i]+CEA[i];
			cout<<"\t\ttotal: "<<total1<<endl<<endl;
			cout<<"\t\tDo you want to generate grade: "<<endl;
			cout<<"\t\t if you want to generate enter y or Y:  ";
			cin>>result;
			
			if(result=='Y'||result=='y')
			{

				grade(total1);
}			
}    
} 
}
}



void CE_115L_BEBME_A()
{
float lperfw,lrepw,midw,finalw,CEAw,total;
int rn;
int size= 23;
string name[size];
int rollnum[size];
float lab1perf[size];
float lab2perf[size];
float lab3perf[size];
float lab4perf[size];
float lab5perf[size];
float lab6perf[size];
float lab7perf[size];
float lab8perf[size];
float lab9perf[size];
float lab10perf[size];
float lab11perf[size];
float lab12perf[size];
float lab13perf[size];
float lab14perf[size];
float labrep1[size];
float labrep2[size];
float labrep3[size];
float labrep4[size];
float labrep5[size];
float labrep6[size];
float labrep7[size];
float labrep8[size];
float labrep9[size];
float labrep10[size];
float labrep11[size];
float labrep12[size];
float labrep13[size];
float labrep14[size];
float tlabperf[size];
float tlabrep[size];
float midterm[size];
float final[size];
float CEA[size];

string line;
ifstream file4;
file4.open("POWER-CP.csv");
int i=0;
while (getline(file4, line)) // read whole line into line
{
    string rand;
    istringstream iss(line); // string stream
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    iss >> lab1perf[i];
    getline(iss, rand, ',');
    iss >>  lab2perf[i];    
    getline(iss, rand, ',');
    iss >>  lab3perf[i];    
    getline(iss, rand, ',');
	iss>> lab4perf[i];    
    getline(iss, rand, ',');
	iss>> lab5perf[i];
	getline(iss, rand, ',');
	iss>> lab6perf[i];
	getline(iss, rand, ',');
	iss>> lab7perf[i];
	getline(iss, rand, ',');
	iss>> lab8perf[i];
	getline(iss, rand, ',');
	iss>> lab9perf[i];
	getline(iss, rand, ',');
	iss>> lab10perf[i];
    getline(iss, rand, ',');
    iss>> lab11perf[i];
    getline(iss, rand, ',');
    iss>> lab12perf[i];
    getline(iss, rand, ',');
    iss>> lab13perf[i];
    getline(iss, rand, ',');
    iss>> lab14perf[i];
    getline(iss, rand, ',');    
	iss>> labrep1[i];
	getline(iss, rand, ',');
	iss>> labrep2[i];
	getline(iss, rand, ',');
	iss>> labrep3[i];
	getline(iss, rand, ',');
	iss>> labrep4[i];
	getline(iss, rand, ',');
	iss>> labrep5[i];
	getline(iss, rand, ',');
	iss>> labrep6[i];
	getline(iss, rand, ',');
	iss>> labrep7[i];
	getline(iss, rand, ',');
	iss>> labrep8[i];
	getline(iss, rand, ',');
	iss>> labrep9[i];	
	getline(iss, rand, ',');
	iss>> labrep10[i];
	getline(iss, rand, ',');
	iss>> labrep11[i];
	getline(iss, rand, ',');
	iss>> labrep12[i];
	getline(iss, rand, ',');
	iss>> labrep13[i];
	getline(iss, rand, ',');
	iss>> labrep14[i];	
	getline(iss, rand, ',');
	iss>> midterm[i]; 
	getline(iss, rand, ',');
	iss>> final[i]; 
	getline(iss, rand, ',');
	iss>> CEA[i]; 
	i++;
}
cout<<endl<<endl<<endl;
for(int i=0;i<size;i++)
{
tlabperf[i]=(lab1perf[i]+lab2perf[i]+lab3perf[i]+lab4perf[i]+lab5perf[i]+lab6perf[i]+lab7perf[i]+lab8perf[i]+lab9perf[i]+lab10perf[i]+lab11perf[i]+lab12perf[i]+lab13perf[i]+lab14perf[i]);
tlabrep[i]=(labrep1[i]+labrep2[i]+labrep3[i]+labrep4[i]+labrep5[i]+labrep6[i]+labrep7[i]+labrep8[i]+labrep9[i]+labrep10[i]+labrep11[i]+labrep12[i]+labrep13[i]+labrep14[i]);	
 }   
    int j=1;
    while(j<=5)
    {
	cout<<"\t  Enter the ROLL NO of the student: ";
	cin>>rn;	
	cout<<endl<<"\t  Enter the weightage for LAB PERFORMANCES: ";
	cin>>lperfw;
	
	cout<<endl<<"\t  Enter the weightage for LAB REPORTS: ";
	cin>>lrepw;
	
	cout<<endl<<"\t  Enter the weightage for midterm exams: ";
	cin>>midw;
	
	cout<<endl<<"\t  Enter the weightage for finalterm exam: ";
	cin>>finalw;
	
	cout<<endl<<"\t  Enter the weightage for Project(CEA): ";
	cin>>CEAw;	 
	
	total=lperfw+lrepw+midw+finalw+CEAw;

    for(int i=0;i<size;i++)
    {
    	if (rn-rollnum[i]==0)
    	{
    		tlabperf[i]=(tlabperf[i]/210)*lperfw;
    		tlabrep[i]=(tlabrep[i]/210)*lrepw;
    		midterm[i]=(midterm[i]/55)*midw;
    		final[i]=(final[i]/50)*finalw;
    		CEA[i]=(CEA[i]/20)*CEAw;
    		
			char result;
    		float total1;
    		cout<<endl<<endl;
    		cout<<"\t\tNAME: "<<name[i]<<endl;
    		cout<<"\t\tROLL NO: "<<rollnum[i]<<endl;
    		cout<<"\t\tLAB PERFORMENCE: "<<tlabperf[i]<<"/"<<lperfw<<endl;
    		cout<<"\t\tLAB REPORT: "<<tlabrep[i]<<"/"<<lrepw<<endl;
    		cout<<"\t\tMIDS: "<<midterm[i]<<"/"<<midw<<endl;
			cout<<"\t\tFINALS: "<<final[i]<<"/"<<finalw<<endl;
			cout<<"\t\tPROJECT: "<<CEA[i]<<"/"<<CEAw<<endl;
			total1=tlabperf[i]+tlabrep[i]+midterm[i]+final[i]+CEA[i];
			cout<<"\t\ttotal: "<<total1<<endl<<endl;
			cout<<"\t\tDo you want to generate grade: "<<endl;
			cout<<"\t\t if you want to generate enter y or Y:  ";
			cin>>result;
			
			if(result=='Y'||result=='y')
			{

				grade(total1);
}			
}    
}
}
}

void grade(float total1)
{
	
	float x;
	x=total1;
	if(x>=90)
	cout<<" \t\tGrade : A"<<endl;
    else if(x>=80 && x<=89)
	cout<<" \t\tGrade : B"<<endl;
    else if(x>=70 && x<=79)
	cout<<" \t\tGrade : B-"<<endl;
	else if(x>=60 && x<=69)
	cout<<"\t\t Grade : C "<<endl;
	else if(x>=50 && x<=59)
	cout<<"\t\t Grade : C-"<<endl;
	else if(x>=50 && x<=59)
	cout<<"\t\t Grade : C-"<<endl;
	else if(x>=40 && x<=49)
	cout<<" \t\tGrade : D"<<endl;
	else if( total1<49)
	cout<<"\t\t Grade : F"<<endl;
		
	
	
}


void game2()
{
 int num;
	 int guess;
	 int attempts=0;
	 srand(time(0));
	 num=(rand()%100)+1;
	 cout<<"\n\t\tGUESS THE NUMBER GAME";
	 cout<<"\n\t\t_____________________";
	 do
	 {
	     cout<<endl<<"\tEnter your guess between 1 to 100: ";
	     cin>>guess;
	 while(guess<1||guess>100)
	 {   cout<<"Invalid guess, enter your guess again: ";
	     cin>>guess;}
	
	 if(guess==num)
	 cout<<"You have guessed the correct number, you have won!";
	 else if(guess<num)
	 {
	     cout<<"Your guess is not correct and is less than the number"<<endl;
	     attempts++;
	 cout<<"\tNumber of attempts left "<<5-attempts;
	 }
	 else if(guess>num)
	 {
	 cout<<"Your guess is not correct and is greater than the number"<<endl;
	 attempts++;
	 cout<<"\nNumber of attempts left "<<5-attempts;
	 }
	 }while(guess!=num&&5-attempts!=0);
	 if(attempts==5)
	 cout<<endl<<"\n\tYou have lost the game, the number was "<<num;
	  		
}