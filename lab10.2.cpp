#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main(void)
{
    system("cls");

    struct student {
        char family[16];
        char name[10];
        int group_id;
        char discipline[5][20];
        int grade[5];
        int grant;
    } people[50];
    
    int i=1, b, c=0, v, yn=1;
    
    while(i==1)
    {
        system("cls");
        printf("                        Menu:\n");
        printf(" ----------------------------------------------------\n");
        printf("| [1] - Vvod dannyh                                  |\n");
        printf(" ----------------------------------------------------\n");
        printf("| [2] - Vyvod stipendialnoi vedomosti                |\n");
        printf(" ----------------------------------------------------\n");
        printf("| [3] - Spisok vseh otlichnikov                      |\n");
        printf(" ----------------------------------------------------\n");
        printf("| [4] - Kol-vo poluchayushih i ne pol-h stipendiyu   |\n");
        printf(" ----------------------------------------------------\n");
        printf("| [0] - Exit                                         |\n");
        printf(" ----------------------------------------------------\n> ");        
        scanf("%d", &b);
        
        switch(b)
        {
            case 1:
            {
                 do
                 {
                     system("cls");
                     printf("Vvedite familiuy: ");
                     scanf("%s", people[c].family);
                     printf("----------------\n");
                     printf("Vvedite imya: ");
                     scanf("%s", people[c].name);
                     printf("----------------\n");
                     printf("Nomer gruppy: ");
                     scanf("%d", &people[c].group_id);
                     if(people[c].group_id < 1)
                     {
                         printf("\nNevernyi nomer! Nazhmite lyubuyu klavishu dlya prodolzheniya...");
                         getch();
                         continue;
                     }
                     
                     int _32=0, kol4=0, kol5=0;
                     for(int j=0; j<5; j++)
                     {
                         printf("----------------\n");
                         printf("Predmet %d: ", j+1);
                         scanf("%s", people[c].discipline[j]);
                         do
                         {
                             printf("Ocenka (2-5): ");
                             scanf("%d", &people[c].grade[j]);
                             if(people[c].grade[j] < 2 || people[c].grade[j] > 5)
                             {
                                 printf("Nevernaya ocenka!\n");
                                 continue;
                             } else 
                             if(people[c].grade[j]==4)
                                 kol4++;// Кол-во четвёрок
                             else 
                             if(people[c].grade[j]==5)
                                 kol5++;// Кол-во пятёрок
                         } while(people[c].grade[j] < 2 || people[c].grade[j] > 5);
                         
                         if(people[c].grade[j]<4) _32=1;
                     }
                     
                     if(_32==0) // Если нет 3 или 2, то выдаем стипендию по оценкам
                     {
                         if(kol5==5)
                         {
                             people[c].grant = 3000;
                         }
                         else if(kol5>kol4)
                         {
                             people[c].grant = 2700;
                         }
                         else
                         {
                             people[c].grant = 2500;
                         }
                     } else
                         people[c].grant = 0;

                     printf("----------------\n");
                     do
                     {
                         printf("Vvodit eshe?\n");
                         printf(" [1] - Yes, [0] - No\n");
                         scanf("%d", &yn);
                         if(yn < 0 || yn > 1) { printf("ERROR\n"); continue; }
                     } while(yn < 0 || yn > 1);
                     c++;
                     
                 } while(yn != 0);
                 break;
            }
            
            case 2:
            {
                 system("cls");
                 printf("Vvedite nomer gruppy: ");
                 scanf("%d", &v);
                 
                 for(int j=0;j<c;j++)
                     if(people[j].group_id==v)
                     {
                         printf(" ----------------------------- ------------------\n");
                         printf("|           Student           |    Stipendiya    |\n");
                         printf(" ----------------------------- ------------------\n");
                         break;
                     }
                     else if(j==c-1)
                         printf(" Net dannyh!\n");
                 
                     
                 for(int j=0;j<c;j++)
                     if(people[j].group_id==v)
                     {
                         cout<<"| "<<people[j].family<<" "<<people[j].name<<setw(29-strlen(people[j].family)-strlen(people[j].name))<<" | "<<setw(11)<<people[j].grant<<" rub. |"<<endl;
                         printf(" ----------------------------- ------------------\n");
                     }
                 printf("\nNazhmite lyubuyu klavishu dlya prodolzheniya...");
                 getch();
                 break;
            }
            
            case 3:
            {
                 system("cls");
                 printf("        Spisok vseh otlichnikov\n");
                 printf(" ---------------------------------------- \n");
                 for(int j=0;j<c;j++)
                     if(people[j].grant==3000)
                     {
                         printf(" %s %s \n", people[j].family, people[j].name);
                         printf(" ---------------------------------------- \n");
                     }
                 printf("\nNazhmite lyubuyu klavishu dlya prodolzheniya...");
                 getch();
                 break;
            }
            
            case 4:
            {
                 system("cls");
                 int grant_yes=0, grant_no=0;
                 
                 for(int j=0;j<c;j++)
                     if(people[j].grant>0)
                     {
                         grant_yes++;
                     }
                     else
                     {
                         grant_no++;
                     }
                 
                 printf("Kol-vo studentov poluchayushih stipendiyu:    %d\n", grant_yes);
                 printf("Kol-vo studentov ne poluchayushih stipendiyu: %d\n", grant_no);
                 printf("\nNazhmite lyubuyu klavishu dlya prodolzheniya...");
                 getch();
                 break;
            }
                 
            case 0:
            {
                 i=0;
                 delete people;
                 return 0;
            }
            default: printf("ERROR");
        }
    }
    system("pause");
}



