
#include<iostream.h>
#include<process.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<stdlib.h>
#include <graphics.h>
#include <stdio.h>
#include<dos.h>
void snowman();

class Question
{
public:
char Q[130];
char h1[140];
char h2[100];
char h3[100];
char ans[20];
};  //Class whose object stores questions, answers and hints
void main()
{
clrscr();
Question a[18];//Class object array
strcpy(a[0].Q,"Which word refers to five in dice and cards?");
strcpy(a[0].h1, "It is a commonly used French word.");
strcpy(a[0].h2, "It is a homonym of the synonym of the word capsized.");
strcpy(a[0].h3, "The last letter is q");
strcpy(a[0].ans, "CINQ");
strcpy(a[1].Q,"What is the synonym of jewels whose plural form has one extra letter at the end than its singular form? ");
strcpy(a[1].h1, "It is a French word.");
strcpy(a[1].h2, " It means small or compact");
strcpy(a[1].h3,"It is also the name of a cocktail");
strcpy(a[1].ans,"BIJOUX");
strcpy(a[2].Q,"What is the name of the volcanic island which is the last French colony ?");
strcpy(a[2].h1,"It is located in the Indian Ocean");
strcpy(a[2].h2,"It is the west most of the three sisters- Mauritius and Rodrigues being the other two ");
strcpy(a[2].h3,"It is the only active volcano in South west Indian Ocean");
strcpy(a[2].ans,"REUNION");
strcpy(a[3].Q," Which country's flag contains its map?");
strcpy(a[3].h1,"It is a country in the middle east");
strcpy(a[3].h2,"Its capital is Nicosia");
strcpy(a[3].h3,"It is an island");
strcpy(a[3].ans,"CYPRUS");
strcpy(a[4].Q,"Which mythical animal is on the Welsh flag?");
strcpy(a[4].h1,"It is an integral part of Chinese culture");
strcpy(a[4].h2,"2012 was the year of this mythical creature");
strcpy(a[4].h3,"This creature guards high security vaults at Gringotts Wizarding Bank");
strcpy(a[4].ans,"DRAGON");
strcpy(a[5].Q, "Which predator bites a snake in the Mexican flag?");
strcpy(a[5].h1, "Albania, Montenegro,Egypt and Kazakhstan also have this animal on their flags");
strcpy(a[5].h2,"It is the national bird of America");
strcpy(a[5].h3,"It belongs to family Accipitridae");
strcpy(a[5].ans,"EAGLE");
strcpy(a[6].Q,"Which is the first monster Percy Jackson fights?");
strcpy(a[6].h1,"It is a creature with the head of a bull and body of a man.");
strcpy(a[6].h2,"It dwelt at the center of the Labyrinth constructed by Daedalus");
strcpy(a[6].h3,"In ancient Greek mythology,it is killed by the Athenian hero Theseus.");
strcpy(a[6].ans,"MINOTAUR");
strcpy(a[7].Q,"Which charm is used to invoke a patronus?");
strcpy(a[7].h1,"It means 'I await a protector'.");
strcpy(a[7].h2,"This charm is first introduced to us in Harry Potter and The Prisoner of Azkaban.");
strcpy(a[7].h3,"This charm first protects Harry and Sirius Black from Dementors");
strcpy(a[7].ans,"EXPECTO PATRONUM");
strcpy(a[8].Q,"Which faction does Caleb Prior transfer to?");
strcpy(a[8].h1,"The symbol of this faction is an eye");
strcpy(a[8].h2,"The members of this faction must wear at least one piece of blue clothing.");
strcpy(a[8].h3,"This faction is characterised by great knowledge,curiosity and intelligence.");
strcpy(a[8].ans,"ERUDITE");
strcpy(a[9].Q,"Which mountain is situated exactly on the equator and yet is covered with snow throughout the year");
strcpy(a[9].h1,"It is the second highest mountain in Africa");
strcpy(a[9].h2,"It is a volcanic mountain");
strcpy(a[9].h3,"It shares its name with the country it is located in.");
strcpy(a[9].ans,"MOUNT KENYA");
strcpy(a[10].Q,"Which frequently ascended mountain has 'green boots' as a landmark which is infact a corpse wearing green boots");
strcpy(a[10].h1,"Reaching the first camp of this mountain involves crossing the Khumbu icefall.");
strcpy(a[10].h2,"It is commonly known as 'Choma Lung Ma' or 'Sagarmatha'.");
strcpy(a[10].h3,"Its neighbours are 'Lhotse','Makalu' and 'Nuptse'");
strcpy(a[10].ans, "MOUNT EVEREST");
strcpy(a[11].Q, "Which mountain was assumed to be the World's highest peak before mt Everest?");
strcpy(a[11].h1,"It is located in the least populated and second smallest state of India.");
strcpy(a[11].h2, "It comprises of five peaks ad is hence called to 'Lotus of Enlightenment;");
strcpy(a[11].h3,"It is the highest peak in India and the third highest in the world");
strcpy(a[11].ans, " MOUNT KANCHENDZONGA");
strcpy(a[12].Q,"Which country was Adolph Hitler born in?");
strcpy(a[12].h1,"This country's flag is the oldest in the world");
strcpy(a[12].h2,"Its name comes from a Germanic word meaning 'east'");
strcpy(a[12].h3,"It has the world's oldest zoo");
strcpy(a[12].ans,"AUSTRIA");
strcpy(a[13].Q,"Which ruler was Iltutmish's predeccesor?");
strcpy(a[13].h1,"This ruler established the Delhi Sultanate");
strcpy(a[13].h2,"He belonged to the Mamluk dynasty");
strcpy(a[13].h3,"The Qutub Minar was built in his name");
strcpy(a[13].ans,"QUTABUDDIN AIBAK");
strcpy(a[14].Q,"Name the person who qouted 'No person was ever honoured for what he received, honour has been the reward for what he gave'?");
strcpy(a[14].h1,"He is the only american president who was born on American Independence day");
strcpy(a[14].h2,"He was the 30th president of the United States");
strcpy(a[14].h3,"He was Republican lawyer from Vermont");
strcpy(a[14].ans,"CALVIN COOLIDGE");
strcpy(a[15].Q,"Drawings of this huge dog were on Egyptian monuments 5000 years ago.Name it.");
strcpy(a[15].h3,"The heaviest dog in the Guinness book of world records belongs to this breed");
strcpy(a[15].h2,"There are more than 17 types of this breed");
strcpy(a[15].h1,"When the Carthagian leader, Hannibal crossed the Alps, several battalions of war trained dogs of this breed accompanied him.");
strcpy(a[15].ans,"MASTIFF");
strcpy(a[16].Q,"Which dog breed has a holy history");
strcpy(a[16].h1,"These bold independent dogs used to be monastery watchdogs in Tibet");
strcpy(a[16].h2,"It was believed that when Buddhist priests died, their souls entered the bodies of these dogs");
strcpy(a[16].h3,"Their name comes from the capital of Tibet");
strcpy(a[16].ans,"LHASA APSO");
strcpy(a[17].Q,"Which dog breed is present on ancient Greek and Roman coins?");
strcpy(a[17].h1,"It is the national dog of France");
strcpy(a[17].h2,"It is originally from Germany");
strcpy(a[17].h3,"They are one of the most fashinable dog breed used for duck-hunting");
strcpy(a[17].ans,"FRENCH POODLE");
fstream f;
f.open("Squiz.dat",ios::out);
for (int j=0;j<18;j++)
{
f.write((char*)&a[j],sizeof(a[j])); //To write objects into binary file
}
f.close();
int gd = DETECT, gm;

   initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

//Single User
cout<<"Welcome to single user quiz.\nYou will have to answer one question from each of the 6 categories\n1.La vie en France\n2.Flags\n3.Young Adult Fiction\n4.Mountains\n5.Dog breeds\n6.World History\n You can enter maximum of 9 wrong characters for each question before the game  ends\n You have three hints available for every question and can use them whenever    required\n ";
cout<<"You get 10 points for each correct answer(Whole String) and -1 for every wrong character"<<endl;
cout<<"Enter Capital letters only"<<endl;//Instructions
getch();  // To take consent for moving ahead
clrscr();
randomize();   // To generate a random question set
int score=0;
int p=random(3);
for(int i=0;i<=5;i++)
{
f.open("Squiz.dat",ios::in|ios::binary); //To access file containing questions
Question p1;
int pos=p*sizeof(p1);
f.seekg(pos);
f.read((char*)&p1,sizeof(p1));
cout<<"Question  "<<i+1<<"\n"<<p1.Q<<endl;//Display Qyestion

char sa[20];//Variable to store the * user gets to see and place correct character when user makes correct guess
char c1;
int smr2,counter=0;//smr2 generates appropriate number of * for the letters in answer

for(smr2=0;p1.ans[smr2]!='\0';smr2++)
{
  if(p1.ans[smr2]==' ')
  {
  sa[smr2]=' ';
  }
  else
  {
  sa[smr2]='*';
  }
}
sa[smr2]='\0';
cout<<sa<<endl;

int c=1;

while(strcmpi(sa,p1.ans)!=0)//Till user inputs all letters correct
{
	int ctr=0;
	if(c<=3)  //To generate hints
	{
	cout<<"Do you need a hint?  Y/N"<<endl;
	char ch;
	cin>>ch;
	if(ch=='Y')
	{

		if(c==1)
		{
			cout<<"Hint 1 "<<p1.h1<<endl;
		}
		else if(c==2)
		{
			cout<<"Hint 2 "<<p1.h2<<endl;
		}
		else if(c==3)
		{
			cout<<"Hint 3 "<<p1.h3<<endl;
		}
		c++;
	}
	if (ch=='a')
	{
	exit(0); // For intermediate exit from QUIZ
	}
	}
	cin>>c1;
	for(int u=0;p1.ans[u]!='\0';u++)
	{

		if(c1==p1.ans[u])   // To modify input string when guess is correct
		{
			sa[u]=c1;
			ctr=1;
		}
	}
	       if(ctr==1)
	       {
		cout<<"Correct "<<sa<<endl;
	       }
		else
		{
		score--;
		 sound(1000);
		 delay(1000);
		 nosound();
		cout<<"Wrong! Re-enter"<<endl<<"-1 points"<<endl;
		counter++;
			if(counter==9)
			{
				snowman();
				break;
			}
		}

}
if(counter<9)
{
score=score+10;
 cout<<"Correct answer"<<endl<<"Score=  "<<score;
 for(double t2=0;t2<3000000;t2++);  //Time lapse

 clrscr();
f.close();
}
else
{

exit(0);
}
p=p+3;
}
cout<<"Your final score is   "<<score;
   getch();
   clrscr();
   cleardevice();
   closegraph();

}

void snowman()
{
   cleardevice();
  //vertical line for the hanging part
   rectangle(10,0,20,200);
   //circle(15,195,1);
   setfillstyle(XHATCH_FILL,CYAN);
   floodfill(15,195,WHITE);

   //horizontal line for hanging
   rectangle(10,0,100,10);
   setfillstyle(XHATCH_FILL,CYAN);
   floodfill(60,5,WHITE);

   //rope
   line(100,10,100,20);


   //base of hanging part
   rectangle(3,200,50,210);
   setfillstyle(XHATCH_FILL,CYAN);
   floodfill(30,205,WHITE);

   //snowman face
   circle(100,40,20);
   circle(100,90,30);   //snowman body
   circle(93,35,1);      //eyes
   circle(107,35,1);     //eyes
   arc(100,55,45,135,10);//sad face(last)
   //left hand
   line(85,85,55,55); //long part
   line(60,60,50,60); //small stick
   line(60,60,60,50); //small stick
   //right hand
   line(115,85,150,55);
   line(140,64,155,67);
   line(140,64,140,50);


   int midx= getmaxx()/3;
   int midy= getmaxy()/3;
   outtextxy(midx,midy,"You lost");
   getch();
}
