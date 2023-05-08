#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int countr, count, r1, r, n;
    float score;
    int choice;
    char playername[20];
mainhome:
    system("cls");
    printf("\n\n\t\t*************************************************************");
    printf("\n\t\t\t\tC PROGRAM QUIZ GAME\n");
    printf("\n\t\t\t____________________________________________");
    printf("\n\t\t\t\t\tWELCOME  ");
    printf("\n\t\t\t\t\t  TO  ");
    printf("\n\t\t\t\t\tTHE GAME  ");
    printf("\n\t\t\t____________________________________________");
    printf("\n\t\t\t____________________________________________");
    printf("\n\n\t\t*************************************************************");
    printf("\n\t\t\t   ******'KAUN BANEGA CROREPATI'******  ");
    printf("\n\n\t\t*************************************************************");
    printf("\n\t\t\t____________________________________________");
    printf("\n\t\t\t____________________________________________\n");
    printf("\n\t\t\t -> Press 1 to start the game           ");
    printf("\n\t\t\t -> Press 2 to view the score  ");
    printf("\n\t\t\t -> Press 3 to quit                     ");
    printf("\n\t\t\t____________________________________________");

    printf("\n");

    scanf("%d", &choice);
    if (choice == 1)
    {
        int choice1;
        system("cls");

        printf("\n\n\n\n\n\n\n\n\n\n\tRegister your name:");

        scanf("%s", playername);
        system("cls");
        printf("\n___________________>> Welcome |%s| to C Program Quiz Game <<_______________________",playername);
        printf("\n\n>> You will be asked 10 questions continuously if you keep giving the right answers.");
        printf("\n\n>> No -ve negative marking for wrong answers.");
        printf("\n\n>> Total 10 questions each right answer will be awarded Rs. 10,00,000.");
        printf("\n\n             ALL THE BEST   ");
        printf("\n\n*************************************************************");
        printf("\n\n\n>> Press 1 to start the game!  \n");
        printf("\n\n\n>> Press any number to goto Main Menu!   \n");
        printf("\n\n*************************************************************");
        printf("\n");

        scanf("%d", &choice1);

        if (choice1 == 1)
        {
            goto home;
        }
        else
        {
            goto mainhome;
        }

    home:
        system("cls");
        count = 0;

        for (int i = 1; i <= 10; i++)
        {
            int r1 = i;

            switch (r1)
            {

            case 1:
                printf("\n\nWho created 'Hotmail'?");
                printf("\n\nA. Sabeer Bhatia \t\tB. Bill Gates \n\nC. Jack St.Clair Kildy \t\tD.Donald W.Davies\n");

                printf("\n\nTo go to next question Press L !!!\n\n\t");

                scanf("%s", &choice);
                if (choice == 'A' || choice == 'a')
                {

                    printf("\n\nCorrect !!!");
                    

                    count++;
                    break;
                }
                else if (choice == 'L' || choice == 'l')
                {
                    
                    continue;
                }

                {
                    printf("\n\nWorng !!!\nThe correct answer is   A. sabeer Bhatia");
                    
                    goto score;
                    break;
                }

            case 2:
                printf("\n\nMagma which is forced into Earth's surface is known as ");
                printf("\n\nA. Lava \t\tB. Vent \n\nC. Cone \t\tD. None of the above\n");

                printf("\n\nTo go to next question Press L !!!\n\n\t");

                scanf("%s", &choice);
                if (choice == 'A' || choice == 'a')
                {

                    printf("\n\nCorrect !!!");
                    

                    count++;
                    break;
                }
                else if (choice == 'L' || choice == 'l')
                {
                    
                    continue;
                }
                else
                {
                    printf("\n\nWorng !!!\nThe correct answer is   A. Lava");
                    goto score;
                    break;
                }

            case 3:
                printf("\n\nGreen Land belongs to which European country ?");
                printf("\n\nA. Norway \t\tB. Denmark \n\nC. Sweden \t\tD.Finland\n");

                printf("\n\nTo go to next question Press L !!!\n\n\t");

                scanf("%s", &choice);
                if (choice == 'B' || choice == 'b')
                {

                    printf("\n\nCorrect !!!");
                    count++;
                    break;
                }
                else if (choice == 'L' || choice == 'l')
                {
                    
                    continue;
                }
                else
                {
                    printf("\n\nWorng !!!\nThe correct answer is  B. Denmark");
                    goto score;
                    break;

                case 4:
                    printf("\n\nWho conqured Mt.Everest ten times ?");
                    printf("\n\nA. yasuo kato \t\tB. Tensing Norgay \n\nC.  Rita Ang \t\tD. Nawang Gombu \n");

                    printf("\n\nTo go to next question Press L !!!\n\n\t");

                    scanf("%s", &choice);
                    if (choice == 'C' || choice == 'c')
                    {

                        printf("\n\nCorrect !!!");

                        count++;
                        break;
                    }
                    else if (choice == 'L' || choice == 'l')
                    {

                        continue;
                    }
                    else
                    {
                        printf("\n\nWorng !!!\nThe correct answer is  C. Rita Ang");
                        goto score;
                        break;
                    }

                case 5:
                    printf("\n\nWhere was the first Engineering College of India located ?");
                    printf("\n\nA. Bombay \t\tB. Roorkee\n\nC. Varanasi \t\tD. Calcutta\n");

                    printf("\n\nTo go to next question Press L !!!\n\n\t");

                    scanf("%s", &choice);
                    if (choice == 'B' || choice == 'b')
                    {

                        printf("\n\nCorrect !!!");

                        count++;
                        break;
                    }
                    else if (choice == 'L' || choice == 'l')
                    {

                        continue;
                    }
                    else
                    {
                        printf("\n\nWorng !!!\nThe correct answer is   B. Roorkee");
                        goto score;
                        break;
                    }
                case 6:
                    printf("\n\nWhich of the following coal contains 90 percent of carbon ?");
                    printf("\n\nA. Peat \t\tB. Bitumen \n\nC. Anthracite \t\tD. Lignite\n");

                    printf("\n\nTo go to next question Press L !!!\n\n\t");

                    scanf("%s", &choice);
                    if (choice == 'C' || choice == 'c')
                    {

                        printf("\n\nCorrect !!!");

                        count++;
                        break;
                    }
                    else if (choice == 'L' || choice == 'l')
                    {

                        continue;
                    }
                    else
                    {
                        printf("\n\nWorng !!!\nThe correct answer is   C. Anthracite");
                        goto score;
                        break;
                    }

                case 7:
                    printf("\n\nWho was the second man to land on the Moon ?");
                    printf("\n\nA. Yuri Gagarin \t\tB. Neil Armstrong \n\nC. Michael Collins\t\tD. Buzz Aldrin\n");

                    printf("\n\nTo go to next question Press L !!!\n\n\t");

                    scanf("%s", &choice);
                    if (choice == 'D' || choice == 'd')
                    {

                        printf("\n\nCorrect !!!");

                        count++;
                        break;
                    }
                    else if (choice == 'L' || choice == 'l')
                    {

                        continue;
                    }
                    else
                    {
                        printf("\n\nWorng !!!\nThe correct answer is   D. Buzz Aldrin");
                        goto score;
                        break;
                    }

                case 8:
                    printf("\n\nGlobal warming is mainly due to accumulation of");
                    printf("\n\nA. Oxides of Nitrogen \t\tB. Oxide of sulphur \n\nC. Carbon dioxide \t\tD. Carbon monoxide\n");

                    printf("\n\nTo go to next question Press L !!!\n\n\t");

                    scanf("%s", &choice);
                    if (choice == 'C' || choice == 'c')
                    {

                        printf("\n\nCorrect !!!");

                        count++;
                        break;
                    }
                    else if (choice == 'L' || choice == 'l')
                    {

                        continue;
                    }
                    else
                    {
                        printf("\n\nWorng !!!\nThe correct answer is   C. Carbon dioxide");
                        goto score;
                        break;
                    }

                case 9:
                    printf("\n\nRed data book gives information about species which are:");
                    printf("\n\nA. Extinct \t\tB. Endangered \n\nC. Dangered \t\tD. Rare\n");

                    printf("\n\nTo go to next question Press L !!!\n\n\t");

                    scanf("%s", &choice);
                    if (choice == 'B' || choice == 'b')
                    {

                        printf("\n\nCorrect !!!");

                        count++;
                        break;
                    }
                    else if (choice == 'L' || choice == 'l')
                    {

                        continue;
                    }
                    else
                    {
                        printf("\n\nWrong !!!\nThe correct answer is   B. Endangered");
                        goto score;
                        break;
                    }

                case 10:
                    printf("\n\nThe worlds first women Prime Minister was");
                    printf("\n\nA. Smt. Indira Gandhi \t\tB. Smt. Sirimao Bandarnayake \n\nC. Smt. Benazir Bhutto \t\tD. Smt. Sarojini Naidu\n");

                    printf("\n\nTo go to next question Press L !!!\n\n\t");

                    scanf("%s", &choice);
                    if (choice == 'B' || choice == 'b')
                    {
                        printf("\n\nCorrect !!!");
                        count++;
                        goto score;
                    }
                    else if (choice == 'L' || choice == 'l')
                    {
                        goto score;
                    }
                    else
                    {
                        printf("\n\nWorng !!!\nThe correct answer is   B. Smt. Sirimao Bandarnayake");
                        goto score;
                        break;
                    }
                score:
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    system("cls");
                    score = (float)count * 1000000;
                    if (score > 0.00 && score < 10000000.00)
                    {
                        printf("\n\n\t\t**************** CONGRATULATION *****************");
                        printf("\n\n");
                        printf("\n\t You won Rs. %.2f/- ", score);
                        
                        goto go;
                    }

                    else if (score >= 10000000.00)
                    {

                        printf("\n\n\n \t\t**************** CONGRATULATION ****************");
                        printf("\n\n");
                        printf("\n\t\t\t\t YOU ARE A CROREPATI !!!!!!!!!");
                        printf("\n\t\t\t\t You won Rs. %.2f/- ", score);
                        printf("\n\t\t\t\tThank You!!");
                    }
                    else
                    {

                        printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
                        printf("\n\n");
                        printf("\n\t\t Thanks for your participation");
                        printf("\n\t\t TRY AGAIN");
                        goto go;
                    }

                go:

                    printf("\n\n Press Y if you want to play next game");

                    printf("\nPress any key if you want to go main menu");
                    printf("\n\n\n\n\n\n\n\n.");
                    printf("Enter Your Choice:---> ");

                    scanf("%s", &choice1);
                    if (choice1 == 'Y')
                        goto home;
                    else
                    {
                        goto mainhome;
                    }
                }
            }
        }
    }
    else if (choice == 2)
    {

        printf("Your current score is = Rs. %.2f", score);

        printf("Press 1 to go to main menu");

        scanf("%d", &choice);
        if ("choice == 1")
        {
            goto mainhome;
        }
    }
    else if (choice == 3)
    {
        printf("Thank You for showing your intrest to play KBC.\n  SEE YOU NEXT TIME!!!");
    }
}
