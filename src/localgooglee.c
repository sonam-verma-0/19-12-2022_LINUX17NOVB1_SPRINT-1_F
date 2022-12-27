#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
#include<string.h>


char cmdstr[50] = "grep --color -Rw ~/",text[40],tex[40],cat[50] = "cat ",cm[20],st[10],cmd[20],stt[10],dir[20];
char strb[15]= "/ -e '";

void keyword();
void files();
void path();

//grep --color -Rw ~/GOOGLESEARCH/ -e 'keyword'

void menu()
{
int ch;
printf("\n");
printf("\n                                                              MENU");
printf("\n");
printf("\n|*********************************************************************************************************************************************|");
printf("\n                                                          1.Search FILES         \n                       ");
printf("\n                                                          2.Search KEYWORD                                         \n ");
printf("\n                                                          3.Search by PATH                                        \n ");
printf("\n                                                          4.Exit \n");
printf("\n|*********************************************************************************************************************************************|");
printf("\n|*********************************************************************************************************************************************|");
printf("\n                                                      ENTER YOUR SEARCH HERE: ");
scanf("%d",&ch);



switch(ch)
{

case 1:
files();

sleep(5);
menu();
break;

case 2:
keyword();


sleep(5);
menu();
break;

case 3:
path();
sleep(5);
menu();
break;

case 4:
exit(0);

default:
printf("\nInvalid input");

}}




void keyword(){

printf("Enter directory");
scanf("%s",dir);
strcat(dir,strb);
printf("\nEnter keyword you want to search: ");
scanf("%s",tex);
strcat(tex,"'");
strcat(dir,tex);
strcat(cmdstr,dir);
printf("%s",cmdstr);
printf("\nThe keyword you entered is in the following files....\n");
printf("\n");
system(cmdstr);
printf("There are no other files containing the keyword you entered\n");
printf("\n");
printf("\a");
cmdstr[19]='\0';
}

void files(){

printf("\nThe list of files found are:\n ");
printf("\n");
printf("\a");
strcpy(cmd,"ls");
system(cmd);
printf("\nEnter file you want to open: ");
scanf("%s",stt);
strcat(cat,stt);
printf("\nContent in file is:\n ");
printf("\n");
printf("\a");
system(cat);
cat[4] = '\0';
}

void path(){


printf("\nThe list of files found are:\n ");
printf("\n");
printf("\a");
strcpy(cm,"cd GOOGLESEARCH;ls");
system(cm);
printf("\nEnter file path you want to open: ");
scanf("%s",st);
strcat(cat,st);
printf("\nContent in file is:\n ");
printf("\n");
printf("\a");
system(cat);
cat[4] = '\0';
}



int main(){
//function
printf("\n|---------------------------------------------------------------------------------------------------------------------------------------------|");
printf("\n|---------------------------------------------------------------------------------------------------------------------------------------------|");
printf("\n                                                        <<<<<<<<>>>>>>>>");
printf("\n|                                                          LOCAL GOOGLE                                                                       |");
printf("\n|                                                         WELCOME USERS                                                                       |");
printf("\n                                                         <<<<<<<<>>>>>>>>");
printf("\n|---------------------------------------------------------------------------------------------------------------------------------------------|");
printf("\n|---------------------------------------------------------------------------------------------------------------------------------------------|");
printf("\n|*********************************************************************************************************************************************|");
menu();//calling func



return 0;
}
