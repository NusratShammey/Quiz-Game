#include<stdio.h>
#include<conio.h>
#include <windows.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>


double sports()
{
    int m,n;
    printf("\n\n\t\tChoose  - \n\n");
    printf("\n\t Press 1 for short-term(10 questions)\n");
    printf("\n\t Press 2 for average-term(15 questions)\n");
    printf("\n\t Press 3 for long-term(20 questions)\n");
    scanf("%d",&m);
    if(m==1)
        n=10;
    else if(m==2)
        n=15;
    else if(m==3)
        n=20;
    system("cls");
    int qstion,res,nq[20],w,r,i;
    char a;
    float score;
    qstion=res=0;
    i=1;
start:
    r=rand()%55+1;
    nq[i]=r;
    for (w=0; w<i; w++)
        if (nq[w]==r)
            goto start;

    switch(r)
    {
    case 1:

        printf("\n\n\n%d. Which country won the Fifa World Cup 1998?",qstion+1);
        printf("\n\nA.France\tB.Brazil\n\nC.Italy\tD.England\n\n");
        qstion++;
        a=toupper(getch());
        if(a=='A')
        {
            printf("\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.France\n");
            getch();
            break;
        }

    case 2:
        printf("\n\n\n%d.Who was the only player to score 6 successive sixes in an over?",qstion+1);
        printf("\n\nA.Adam Gilchrist\tB.M.S.Dhoni\n\nC.Herschel Gibbs\tD.Sanath Jayasurya\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.Herschel Gibbs");
            getch();
            break;
        }

    case 3:
        printf("\n\n\n%d.Which country is hosting the Fifa World Cup 2010?",qstion+1);
        printf("\n\nA.South Africa\tB.France\n\nC.Argentina\tD.Spain\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.South Africa");
            getch();
            break;
        }


    case 4:


        printf("\n\n\n%d.Who was awarded the youngest player award in Fifa World Cup 2006?",qstion+1);
        printf("\n\nA.Wayne Rooney\tB.Lucas Podolski\n\nC.Lionel Messi\tD.Christiano Ronaldo\n\n");
        qstion++;
                a=toupper(getch());
        if (a == 'B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B.Lucas Podolski");
            getch();
            break;
        }
    case 5:

        printf("\n\n\n%d.Who was the F1 racing champion of 2006?",qstion+1);
        printf("\n\nA.Louis Hamilton\tB.Felipe Massa\n\nC.Fernando Alonso\tD.Michael Schumaker\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.Fernanda Alonso");
            getch();
            break;
        }


    case 6:
        printf("\n\n\n%d.Who was the only player to take 4 successive wickets?",qstion+1);
        printf("\n\nA.Malinga Bandara\tB.Lasith Malinga\n\nC.Bret Lee\tD.Murali Daran\n\n");
        qstion++;
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B.Lasith Malinga");
            getch();
            break;
        }

    case 7:

        printf("\n\n\n%d.Which country was the winner of Cricket World Cup 1987?",qstion+1);
        printf("\n\nA.West Indies\tB.India\n\nC.Australia\tD.England\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.Australia");
            getch();
            break;
        }


    case 8:

        printf("\n\n\n%d.When was the first Common Wealth Games held?",qstion+1);
        printf("\n\nA.1930\tB.1934\n\nC.1938\tD.1948\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D.1930");
            getch();
            break;
        }


    case 9:



        printf("\n\n\n%d.The term 'Butterfly Stroke' is referred to in which sport?",qstion+1);
        printf("\n\nA.Wrestling\tB.Tennis\n\nC.Cricket\tD.Swimming\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D.Swimming");
            getch();
            break;
        }


    case 10:

        printf("\n\n\n%d.Thomas Cup is related to :",qstion+1);
        printf("\n\nA.Tennis\tB.Cricket\n\nC.Basketball\tD.Badminton\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D.Badminton");
            getch();
            break;
        }

    case 11:

        printf("\n\n\n%d.The number of players in each side in Water Polo is ?",qstion+1);
        printf("\n\nA. 6\tB. 7\n\nC. 8\tD. 9\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B. 7");
            getch();
            break;
        }

    case 12:

        printf("\n\n\n%d.Where did the game of Chess originate?",qstion+1);
        printf("\n\nA.India\t B.Persia\n\nC.Arabia\tD.Europe\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.India");
            getch();
            break;
        }

    case 13:

        printf("\n\n\n%d.Santosh Trophy is associated with",qstion+1);
        printf("\n\nA.Badminton\t B.Football\n\nC.Hockey\tD.Tennis\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B.Football");
            getch();
            break;
        }


    case 15:

        printf("\n\n\n%d.The first World Cup in cricket was held in ",qstion+1);
        printf("\n\nA.1971\t B.1973\n\nC.1975\tD.1977\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.1975");
            getch();
            break;
        }

    case 16:

        printf("\n\n\n%d.Eden Garden (Kolkata) is associated with ",qstion+1);
        printf("\n\nA.Cricket\t B.Hockey\n\nC.Badminton\tD.Basketball\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.Cricket");
            getch();
            break;
        }

    case 17:
        printf("\n\n\n%d.Which country has hosted Commonwealth Games for the maximum number of times?",qstion+1);
        printf("\n\nA.Scotland\t B.England\n\nC.New Zealand\tD.Canada\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D.Canada");
            getch();
            break;
        }


    case 18 :
        printf("\n\n\n%d.First Olympic Games was held in ",qstion+1);
        printf("\n\nA.Canada\t B.England\n\nC.Australia\tD.Jamacia\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.Canada");
            getch();
            break;
        }


    case 19:
        printf("\n\n\n%d.Caddie is related to ?",qstion+1);
        printf("\n\nA.Baseball\t B.Billiards\n\nC.Bridge\tD.Golf\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D.Golf");
            getch();
            break;
        }

    case 20:
        printf("\n\n\n%d.In which year Asian Games were started?",qstion+1);
        printf("\n\nA.1962\t B.1951\n\nC.1954\tD.1958\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B.1951");
            getch();
            break;
        }

    case 21:
        printf("\n\n\n%d.Football World Cup has been won by which country for the maximum number of times?",qstion+1);
        printf("\n\nA.Italy\t B.Uruguay\n\nC.Germany\tD.Brazil\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D.Brazil");
            getch();
            break;
        }

    case 22:
        printf("\n\n\n%d.Which city hosted commonwealth games in 1966?",qstion+1);
        printf("\n\nA.Kingston\t B.Perth\n\nC.Melbourne\tD.Kuala Lumpur\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.Kingston");
            getch();
            break;
        }
    case 23:

        printf("\n\n\n%d.Which country has Cricket as its national sports?",qstion+1);
        printf("\n\nA.India\t B.Jamaica\n\nC.Sri Lanka\tD.United States\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B.Jamaica");
            getch();
            break;
        }

    case 24:
        printf("\n\n\n%d.Which country has won Cricket world cup for the maximum number of times.",qstion+1);
        printf("\n\nA.Australia\t B.India\n\nC.Sri lanka\tD.England\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.Australia");
            getch();
            break;
        }

    case 25:
        printf("\n\n\n%d.Which city has hosted Asian Games in 2006?",qstion+1);
        printf("\n\nA.New Delhi\t B.Doha\n\nC.Bangkok\tD.Tokyo\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B.Doha");
            getch();
            break;
        }
    case 26:

        printf("\n\n\n%d.What is the national sport of Turkey",qstion+1);
        printf("\n\nA.Rugby union\t B.Golf\n\nC.Wrestling\tD.Basketball\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.Wrestling");
            getch();
            break;
        }

    case 27:
        printf("\n\n\n%d.Which was the host country in 1998 for Asian Games?",qstion+1);
        printf("\n\nA.China\t B.Philippines\n\nC.South Korea\tD.Thailand\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D.Thailand");
            getch();
            break;
        }

    case 28:
        printf("\n\n\n%d.Archery is the national sport of which country?",qstion+1);
        printf("\n\nA.Afghanistan\t B.Bhutan\n\nC.Japan\tD.India\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B.Bhutan");
            getch();
            break;
        }

    case 29:
        printf("\n\n\n%d.When was the Commonwealth game started?",qstion+1);
        printf("\n\nA.1930\t B.1934\n\nC.1938\tD.1950\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.1930");
            getch();
            break;
        }

    case 30:
        printf("\n\n\n%d.Which is the national sport of Canada? ",qstion+1);
        printf("\n\nA.Ice hockey \t B.Cricket\n\nC.Field hockey\tD.Volleyball\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.Ice hockey");
            getch();
            break;
        }
    case 31:
        printf("\n\n\n%d.Who is Master Blaster?",qstion+1);
        printf("\n\nA.Rahul Dravid\t B.Sourav Ganguly\n\nC.Irfan Pathan\tD.Sachin Tendulkar\n\n");
        qstion++;

                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D.Sachin Tendulkar.");
            getch();
            break;
        }
    case 32:
        printf("\n\n\n%d.Viswanath Anand is associated with which sport?",qstion+1);
        printf("\n\nA.Chess\t B.Hockey \n\nC.Carrom\tD.Volley ball  \n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.Chess");
            getch();
            break;
        }
    case 33:
        printf("\n\n\n%d.The maximum number of Gold medals in Olympics 2008 was won by - ",qstion+1);
        printf("\n\nA. U.S.A\t B .France \n\nC. China\tD. S.Korea\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A .U.S.A");
            getch();
            break;
        }
    case 34:
        printf("\n\n\n%d.Who was adjudicated as the man of the series in the tournament in CWC2011?",qstion+1);
        printf("\n\nA.Rahul Dravid\t B.Zaheer Khan\n\nC.Yuvaraj Singh\tD.Sachin Tendulkar\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.Yuvaraj Singh");
            getch();
            break;
        }
    case 35:
        printf("\n\n\n%d.Who are Kangaroos?",qstion+1);
        printf("\n\nA.Bangladesh\t B.India\n\nC.South Africa\tD.Australia\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D.Australia");
            getch();
            break;
        }
    case 36:

        printf("\n\n\n%d.The ASIAD is held every - ",qstion+1);
        printf("\n\nA. 3 years\t B. 4 years\n\nC. 5 years\tD. 6 years\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B. 4 years");
            getch();
            break;
        }
    case 37:
        printf("\n\n\n%d.Sundarrajan Kidambi is associated with : ",qstion+1);
        printf("\n\nA.Athletics\t B.Hockey\n\nC.Cricket \tD.Chess\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D.Chess");
            getch();
            break;
        }
    case 38:
        printf("\n\n\n%d.India first took part in the olympic games in the year?",qstion+1);
        printf("\n\nA.1928\t B.1920\n\nC.1972\tD.1974\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B.1920");
            getch();
            break;
        }
    case 39:
        printf("\n\n\n%d.In 2012 which country hosted Olympic Games?",qstion+1);
        printf("\n\nA.Australia\t B.Greece\n\nC.United Kingdom\tD.China\n\n");
        qstion++;
                a=toupper(getch());

        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.United Kingdom");
            getch();
            break;
        }
    case 40:

        printf("\n\n\n%d.Pullela Gopichand is associated with : ",qstion+1);
        printf("\n\nA.Cricket\t B.Hockey\n\nC.Football\tD.Badminton\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B.Hockey");
            getch();
            break;
        }
    case 41:
        printf("\n\n\n%d.How many nations participated in 2012 Olympic Games?",qstion+1);
        printf("\n\nA. 204\t B. 197\n\nC. 199\tD. 121\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A. 204");
            getch();
            break;
        }
    case 42:
        printf("\n\n\n%d.Olympic Games were first started by which country and in which year?",qstion+1);
        printf("\n\nA.France (1894)\t B.Greece (1890)\n\nC.France (1924)\tD.Greece (1896)\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D.Greece (1896)");
            getch();
            break;
        }
    case 43:
        printf("\n\n\n%d.Who was the winner of Football World Cup in 2010?",qstion+1);
        printf("\n\nA.Spain\t\t B.Italy\n\nC.Brazil\tD.France\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.Spain");
            getch();
            break;
        }
    case 44:
        printf("\n\n\n%d.In which year Football World Cup was held in France?",qstion+1);
        printf("\n\nA.1990\t B.1998\n\nC.1950\tD.1962\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B.1998");
            getch();
            break;
        }
    case 45:
        printf("\n\n\n%d.What is used in Boxing ?",qstion+1);
        printf("\n\nA.Deuce\t B.Bunder Chuckker\n\nC.Mallet\tD.Upper Cut\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D.Upper Cut");
            getch();
            break;
        }
    case 46:
        printf("\n\n\n%d.Which term is commonly used in Badminton and Volleyball?",qstion+1);
        printf("\n\nA.Deuce\t B.Dribble\n\nC.Double\tD.Dummy\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.Deuce");
            getch();
            break;
        }
    case 47:
        printf("\n\n\n%d.In which year Olympic Games were cancelled because of World War I?",qstion+1);
        printf("\n\nA.1912\t B.1916\n\nC.1944\tD.1920\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B.1916");
            getch();
            break;
        }
    case 48:
        printf("\n\n\n%d.Bandy is national sport of which country?",qstion+1);
        printf("\n\nA.Latvia\t B.Lithuania\n\nC.Russia\tD.Peru\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.Russia");
            getch();
            break;
        }
    case 49:
        printf("\n\n\n%d.In which year Cricket world cup was first hosted by West Indies?",qstion+1);
        printf("\n\nA.1983\t B.1976\n\nC.1979\tD.1975\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D.1975");
            getch();
            break;
        }
    case 50:
        printf("\n\n\n%d.Which country had started Football World?",qstion+1);
        printf("\n\nA.Germany\t B.Uruguay\n\nC.Italy\tD.Brazil\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B.Uruguay");
            getch();
            break;
        }

    case 51:

        printf("\n\n\n%d.In which country commonwealth games were held in 2010?",qstion+1);
        printf("\n\nA.Canada\t B.Malaysia\n\nC.India\tD.Australia\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.India");
            getch();
            break;
        }
    case 52:
        printf("\n\n\n%d.Where is the head quarters of International Olympic Committee ?",qstion+1);
        printf("\n\nA.Los Angles\t B.New York\n\nC.Lausanne\tD.Moscow\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.Lausanne");
            getch();
            break;
        }
    case 53:

        printf("\n\n\n%d.The term “Smasher” is associated with?",qstion+1);
        printf("\n\nA.Volley ball\t B.Hockey\n\nC.Foot ball\tD.Boxing\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.Volley ball");
            getch();
            break;
        }

    case 54:
        printf("\n\n\n%d.who is the first Indian woman to win WTA singles title ?",qstion+1);
        printf("\n\nA.Rooth George\t B.Saina Nehwal\n\nC.Saniya Mirza\tD.Gayathri Krishna\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.Saniya Mirza");
            getch();
            break;
        }

    case 55:
        printf("\n\n\n%d.2009 Davis cup was won by?",qstion+1);
        printf("\n\nA.Spain\t B.Czech Republic\n\nC.US\tD. France    \n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.Spain");
            getch();
            break;
        }


    }
    i++;
    if (i<=n)
        goto start;
    printf("\n\n\n\n\t%d OUT OF %d WERE CORRECT!!! \n",res,qstion);
    score=(float)res/qstion*100;
    return score;
}

double general()
{

    int m,n;
    printf("\n\n\t\tChoose  - \n\n");
    printf("\n\t Press 1 for short-term(10 questions)\n");
    printf("\n\t Press 2 for average-term(15 questions)\n");
    printf("\n\t Press 3 for lonf-term(20 questions)\n");
    scanf("%d",&m);
    if(m==1)
        n=10;
    else if(m==2)
        n=15;
    else if(m==3)
        n=20;
    system("cls");
    int qstion,res,i,w,nq[20],r;
    char a;
    float score;
    qstion=res=0;
    i=1;
starrt:
    r=rand()%55+1;
    nq[i]=r;
    for (w=0; w<i; w++)
        if (nq[w]==r)
            goto starrt;

    switch(r)
    {
    case 1:
        printf("\n\n\n%d.The Panama Canal was officially opened by which US president?",qstion+1);
        printf("\n\nA.Calvin Coolidge\tB.Herbert Hoover\n\nC.Theodore Roosevelt\tD.Woodrow Wilson\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D.Woodrow Wilson");
        }


    case 2:

        printf("\n\n\n%d. Which British monarch succeeded Queen Victoria?",qstion+1);
        printf("\n\nA. Elizabeth II\tB.Edward VI\n\nC.Edward VII\tD.George VII\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.Edward VII");
            getch();
            break;
        }
    case 3:

        printf("\n\n\n%d.What is bottled tomato sauce called ?",qstion+1);
        printf("\n\nA.Brown sauce\t B.HP sauce\n\nC.Ketchup\tD.Piccalilli\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.Ketchup");
            getch();
            break;
        }

    case 4:

        printf("\n\n\n%d.What is minestrone?",qstion+1);
        printf("\n\nA. Cheese\t B. Noodles\n\nC. A type of potato\tD. Soup\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D.Soup");
            getch();
            break;
        }

    case 5:

        printf("\n\n\n%d.Which famous world leader was accused at the Rivonia Trial?",qstion+1);
        printf("\n\nA. Martin Luther King \t B.Subhas Chandra Bose\n\nC.Nelson Mandela\tD.Mother Teresa\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.Nelson Mandela");
            getch();
            break;
        }

    case 6:

        printf("\n\n\n%d.Which is the largest internal organ in the human body?",qstion+1);
        printf("\n\nA.Liver\t B.Heart\n\nC.Lung\tD.Kidney\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.Liver");
            getch();
            break;
        }

    case 7:

        printf("\n\n\n%d. In which present-day country was the Battle of Waterloo fought?",qstion+1);
        printf("\n\nA.France\t B.Iran\n\nC.Belgium\tD.Srilanka\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.Belgium");
            getch();
            break;
        }

    case 8:

        printf("\n\n\n%d. Which country’s highest peak is Mount Ararat?",qstion+1);
        printf("\n\nA.France\t B. China\n\nC.Iran\tD.Turkey\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D.Turkey");
            getch();
            break;
        }
    case 9:

        printf("\n\n\n%d. Which is the only giant planet whose equator is nearly at right angles to its orbit?",qstion+1);
        printf("\n\nA.Mars\t B.Jupiter\n\nC.Uranus\tD.Earth\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C. Uranus");
            getch();
            break;
        }

    case 10:

        printf("\n\n\n%d.Which country is called 'the pearl of Africa'?",qstion+1);
        printf("\n\nA.Somalia\t B.Uganda\n\nC.Turkey\tD.South Africa\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B.Uganda");
            getch();
            break;
        }
    case 11:

        printf("\n\n\n%d.What is the currency of Japan?",qstion+1);
        printf("\n\nA.Dollar\t B.Rupee\n\nC.Yen\tD.Rial\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.Yen");
            getch();
            break;
        }

    case 12:

        printf("\n\n\n%d.Collectively, how many moons do the planets Mercury and Venus have?",qstion+1);
        printf("\n\nA.One\t B.None\n\nC.Five\tD.Four\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B.None");
            getch();
            break;
        }

    case 13:

        printf("\n\n\n%d.Where in the human body is the stapedius muscle situated?",qstion+1);
        printf("\n\nA.Legs\t B.Nose\n\nC.Ears\tD.Hand\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.Ears");
            getch();
            break;
        }

    case 14:

        printf("\n\n\n%d.In Hindu mythology, who has a mansion named Vaijayanta and a sword named Paranjaya??",qstion+1);
        printf("\n\nA.Vishnu\t B.Shiva\n\nC.Indra\tD.Narayn\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.Indra");
            getch();
            break;
        }

    case 15:

        printf("\n\n\n%d.What is the capital of Malaysia?",qstion+1);
        printf("\n\nA.Kuala Lumpur\t B.Sydney\n\nC.Valletta\tD.Thimpu\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.Kuala Lumpur");
            getch();
            break;
        }

    case 16:

        printf("\n\n\n%d.Which river of Bangladesh originates in Tibet?",qstion+1);
        printf("\n\nA.Brahmaputra\t B.Tista\n\nC.Padma\tD.Surma\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.Padma");
            getch();
            break;
        }

    case 17:

        printf("\n\n\n%d.Which district of Bangladesh was part of Assam?",qstion+1);
        printf("\n\nA.Chittagong\t B.Dinajpur\n\nC.Khulna\tD.Sylhet\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D.Sylhet");
            getch();
            break;
        }

    case 18:

        printf("\n\n\n%d.What is the national flower of Bangladesh?",qstion+1);
        printf("\n\nA.Water lily\t B.Rose\n\nC.Tulip\tD.Sunflower\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.Water lily");
            getch();
            break;
        }

    case 19:

        printf("\n\n\n%d.Green house gas is - ",qstion+1);
        printf("\n\nA.Oxyzen\t B.Methane\n\nC.Carbon\tD.\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.Carbon");
            getch();
            break;
        }

    case 20:

        printf("\n\n\n%d.The training center of BGB - ",qstion+1);
        printf("\n\nA.Baitul Izzat\t B.Sarda\n\nC.Sujanagar \tD.Dulahazra\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.Baitul Izzat");
            getch();
            break;
        }

    case 21:

        printf("\n\n\n%d.Which bank was given permission to start Poypal service?",qstion+1);
        printf("\n\nA.Janata\t B.Sonali\n\nC.Pubali\tD.Agrani\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B.Sonali");
            getch();
            break;
        }

    case 22:

        printf("\n\n\n%d.Wangla festival is celebrated by- ?",qstion+1);
        printf("\n\nA.Garo \t B.Rakhine\n\nC.Monipuri\tD.Chakma\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.Garo ");
            getch();
            break;
        }

    case 23:

        printf("\n\n\n%d.The constitution of Bangladesh is mainly divided into - ",qstion+1);
        printf("\n\nA. 9\t B. 10 \n\nC. 11 \tD. 12\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C. 11");
            getch();
            break;
        }

    case 24:

        printf("\n\n\n%d.Bengal was named as Jannatabad by - ?",qstion+1);
        printf("\n\nA.Humayun\t B.Babur\n\nC.Akbar\tD.Jahangir \n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.Humayun");
            getch();
            break;
        }

    case 25:
        printf("\n\n\n%d.Bangladesh became a member of the World Trade Organization in - ",qstion+1);
        printf("\n\nA. 1994\t B.1995\n\nC.1997\tD.1996\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B.1995");
            getch();
            break;
        }

    case 26:

        printf("\n\n\n%d.Which is the second country to recognize Bangladesh?",qstion+1);
        printf("\n\nA.Nepal\t B.Bhutan\n\nC.China\tD.Pakistan\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B.Bhutan");
            getch();
            break;
        }

    case 27:

        printf("\n\n\n%d.Who is the first woman President of Chile?",qstion+1);
        printf("\n\nA.Michelle Bachelet\t B.Viviane Cuq\n\nC.Cristina Preito\tD.Patricia Soto\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.Michelle Bachelet");
            getch();
            break;
        }

    case 28:

        printf("\n\n\n%d.Which is the southernmost point of South America?",qstion+1);
        printf("\n\nA.Cape Canaveral\t B.Cape Kennedy \n\nC.Cape Conrad\tD.Cape Horn\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B.Cape Kennedy ");
            getch();
            break;
        }

    case 29:

        printf("\n\n\n%d.Who founded Santiago?",qstion+1);
        printf("\n\nA.Diego de Almagro\t B.Pedro de Valdivia\n\nC.Bernardo O’Higgins\tD.Pablo Neruda\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D.Pablo Neruda");
            getch();
            break;
        }

    case 30:

        printf("\n\n\n%d.Which country will host the 45th G7 summit 2019?",qstion+1);
        printf("\n\nA.Italy\t B.Germany\n\nC.France\tD.Canada\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.France");
            getch();
            break;
        }

    case 31:

        printf("\n\n\n%d.What is the main religion practiced in Bangladesh?",qstion+1);
        printf("\n\nA.Islam\t B.Hindu\n\nC.Christian\tD.Boddho\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.Islam");
            getch();
            break;
        }

    case 32:
        printf("\n\n\n%d.On which continent is Bangladesh located?",qstion+1);
        printf("\n\nA.Asia\t B.Europe\n\nC.Africa\tD.America\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.Asia");
            getch();
            break;
        }

    case 33:

        printf("\n\n\n%d.What is the name of national parliament of Bangladesh?",qstion+1);
        printf("\n\nA.Dhaka sangsad\t B.Jayita sangsad\n\nC.Bangladesh sangsad\tD.Mujib sangsad\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.Bangladesh sangsad");
            getch();
            break;
        }

    case 34:

        printf("\n\n\n%d.The world's largest river delta found in Bangladesh is the delta of which river?",qstion+1);
        printf("\n\nA.Ganga\t B.Padma\n\nC.Jamuna\tD.Surma\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B.Padma");
            getch();
            break;
        }

    case 35:

        printf("\n\n\n%d.Before the 1950's which crop was the principle crop of Bangladesh ?",qstion+1);
        printf("\n\nA.Jute\t B.Cotton\n\nC.Rice\tD.Fish\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.Rice");
            getch();
            break;
        }

    case 36:
        printf("\n\n\n%d.Which of the following gas is used to prepare soda water??",qstion+1);
        printf("\n\nA.CO2\t B.H2\n\nC.NH4\tD.O2\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.CO2");
            getch();
            break;
        }

    case 37:

        printf("\n\n\n%d.What is the name of the disease in man arising out of Vitamin B1 deficiency?",qstion+1);
        printf("\n\nA.Scurvy\t B.Beriberi\n\nC.Pellagra\tD.Gingivitis\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B.Beriberi");
            getch();
            break;
        }

    case 38:
        printf("\n\n\n%d.Which of the following language used by Pakistani people?",qstion+1);
        printf("\n\nA.Hindi\t B.Palauan\n\nC.Sindhi\tD.Nauruan\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.Sindhi");
            getch();
            break;
        }

    case 39:
        printf("\n\n\n%d.Over 90% of Bangladesh is on average what height above sea level?",qstion+1);
        printf("\n\nA. 30 meter\t B. 20 meter\n\nC. 10 meter\tD. 50 meter\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C. 10 meter");
            getch();
            break;
        }

    case 40:

        printf("\n\n\n%d.Which area of sea lies to the south of Bangladesh ?",qstion+1);
        printf("\n\nA.Bay of Bengal\t B.India sea\n\nC.South china sea\tD.East America sea\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.Bay of Bengal");
            getch();
            break;
        }

    case 41:

        printf("\n\n\n%d.Bangladesh is completely surrounded by which country ?",qstion+1);
        printf("\n\nA.India\t B.China\n\nC.Japan\tD.Sri lanka\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.India");
            getch();
            break;
        }
    case 42:

        printf("\n\n\n%d.Java was originally invented by - ?",qstion+1);
        printf("\n\nA.Oracle\t B.Microsoft\n\nC.Novell\tD.Sun\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D.Sun");
            getch();
            break;
        }

    case 43:
        printf("\n\n\n%d.Who is the founder of the Internet?",qstion+1);
        printf("\n\nA.Vint Cerf\t B.Charles Babbage\n\nC.Tim Berners\tD.None of these\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.Tim Berners");
            getch();
            break;
        }
    case 44:

        printf("\n\n\n%d.MPG is an file extension of which type of files?",qstion+1);
        printf("\n\nA.Audio\t B.Image\n\nC.Video\tD.Flash\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.Video");
            getch();
            break;
        }

    case 45:
        printf("\n\n\n%d.Who is the father of email?",qstion+1);
        printf("\n\nA.Tim Berners Lee\t B.Charles Babbage\n\nC.Paul Buchheit\tD.Ray Tomlinson\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D.Ray Tomlinson");
            getch();
            break;
        }
    case 46:
        printf("\n\n\n%d.Which one is the first search engine in internet?",qstion+1);
        printf("\n\nA.Google\t B.Archie\n\nC.WAIS\tD.Altavista\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.Google");
            getch();
            break;
        }

    case 47:
        printf("\n\n\n%d.Which set of rules is applicable for exchange of files over Internet?",qstion+1);
        printf("\n\nA.FTP/IP\t B.HTTP\n\nC.HTML\tD.HYPERLINK\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B.HTTP");
            getch();
            break;
        }

    case 48:
        printf("\n\n\n%d.Whose trademark is the operating system UNIX?",qstion+1);
        printf("\n\nA.Motorola\t B.BELL Laboratories\n\nC.Microsoft\tD.AshtonTate\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B.BELL Laboratories");
            getch();
            break;
        }

    case 49:

        printf("\n\n\n%d.Which of the following memories is an optical memory?",qstion+1);
        printf("\n\nA.CD-ROM\t B.Floppy Disk\n\nC.Bubble Memories\tD.Core Memories\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.CD-ROM");
            getch();
            break;
        }

    case 50:
        printf("\n\n\n%d.One Terabyte (1 TB) is equal to?",qstion+1);
        printf("\n\nA.1028 GB\t B.1012 GB\n\nC.1000 GB\tD.1024 GB\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.1000 GB");
            getch();
            break;
        }

    case 51:
        printf("\n\n\n%d.Whose government was overthrown in 1973?",qstion+1);
        printf("\n\nA.Juan Antonio Rios\t B.Salavador Allende\n\nC.Pedro Montt\tD.Jose Balmaceda\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.Juan Antonio Rios");
            getch();
            break;
        }

    case 52:
        printf("\n\n\n%d.Which film received the National Film Award 2015 ?",qstion+1);
        printf("\n\nA.Bhuban Majhi\t B.Jalaler Golpo\n\nC.Monpura\tD.Brihonnola\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.Bhuban Majhi");
            getch();
            break;
        }

    case 53:
        printf("\n\n\n%d.What is the age limit of the youth according to the 'National youth policy 2017'?",qstion+1);
        printf("\n\nA. 12-24\t B. 15-24\n\nC. 18-35\tD. 20-38\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C. 18-35");
            getch();
            break;
        }

    case 54:
        printf("\n\n\n%d.Geographical identity Product is : ?",qstion+1);
        printf("\n\nA.Hilsa\t B.Jamdani\n\nC.Benarasi\tD.Muslin\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.Hilsa");
            getch();
            break;
        }

    case 55:

        printf("\n\n\n%d.Karnasubarna was located in ?",qstion+1);
        printf("\n\nA.Comilla\t B.Mursidabad \n\nC.Bogra\tD.Dhaka\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B.Mursidabad ");
            getch();
            break;
        }


    }
    i++;
    if (i<=n)
        goto starrt;
    printf("\n\n\n\n\t%d OUT OF %d WERE CORRECT!!! \n",res,qstion);
    score=(float)res/qstion*100;
    return score;
}

double mathematics()
{

    int m,n;
    printf("\n\n\t\tChoose  - \n\n");
    printf("\n\t Press 1 for short-term(10 questions)\n");
    printf("\n\t Press 2 for average-term(15 questions)\n");
    printf("\n\t Press 3 for lonf-term(20 questions)\n");
    scanf("%d",&m);
    if(m==1)
        n=10;
    else if(m==2)
        n=15;
    else if(m==3)
        n=20;
    system("cls");
    int qstion,res,i,w,nq[20],r;
    char a;
    float score;
    qstion=res=0;
    i=1;
starrt:
    r=rand()%55+1;
    nq[i]=r;
    for (w=0; w<i; w++)
        if (nq[w]==r)
            goto starrt;

    switch(r)
    {
    case 1:
        printf("\n\n\n%d.If 2x-5=99 then x=?",qstion+1);
        printf("\n\nA. 3\t B. 29\n\nC. 47 \tD. 52\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C. 47");
            getch();
            break;
        }

    case 2:
        printf("\n\n\n%d.What is 33 to the power 3?",qstion+1);
        printf("\n\nA. 15436\t B. 35937\n\nC. 1089\tD. 1185921\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B. 35937");
            getch();
            break;
        }

    case 3:

        printf("\n\n\n%d.What is 6 times 5 plus 3 times 8 plus 1 times 0?",qstion+1);
        printf("\n\nA. 54\t B. 39\n\nC. 0\tD. 89\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A. 54");
            getch();
            break;
        }
    case 4:

        printf("\n\n\n%d.Which number is a multiple of 4?",qstion+1);
        printf("\n\nA. 23\t B. 18\n\nC. 13\tD. 12\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D. 12");
            getch();
            break;
        }

    case 5:

        printf("\n\n\n%d.Which gives the same answer as 5+5+5+5?",qstion+1);
        printf("\n\nA. 5 * 2\t B. 10 * 2\n\nC. 20 * 2\tD. 10 + 2\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B. 10 * 2");
            getch();
            break;
        }

    case 6:

        printf("\n\n\n%d.What is the name of a solid figure with six square faces?",qstion+1);
        printf("\n\nA.Triangle\t B.Circle\n\nC.Cube\t D.Globe\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.Cube");
            getch();
            break;
        }
    case 7:

        printf("\n\n\n%d.Which one of the following is not a parallelogram?",qstion+1);
        printf("\n\nA.Circle\t B.Rectangle\n\nC.Rhombus\tD.Square\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.Circle");
            getch();
            break;
        }

    case 8:
        printf("\n\n\n%d. If a truck travels 350 miles on 20 gallons of fuel,\nhow many miles per gallon is the truck getting?",qstion+1);
        printf("\n\nA.70\t B.5.7\n\nC.17.5\tD.7000\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C. 17.5");
            getch();
            break;
        }

    case 9:

        printf("\n\n\n%d.Which of the following is largest?",qstion+1);
        printf("\n\nA. Ounce\t B. Gallon\n\nC. Pint \tD. Liter\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B. Gallon");
            getch();
            break;
        }

    case 10:
        printf("\n\n\n%d.If Liton bats 100 times and gets 40 hits, what is his batting average?",qstion+1);
        printf("\n\nA. 0.318\t B. 0.4\n\nC. 0.5\t D. 0.245\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B. 0.4");
            getch();
            break;
        }

    case 11:

        printf("\n\n\n%d.Where is the corner where three or more edges meet in a solid figure?",qstion+1);
        printf("\n\nA.Center\t B.Middle\n\nC.Diameter\tD.Vertex\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D.Vertex");
            getch();
            break;
        }

    case 12:

        printf("\n\n\n%d.If Mim travels eight miles east and Jim six miles east,how far would they be from one another?",qstion+1);
        printf("\n\nA. 48 Miles\t B. 14 Miles\n\nC. 2 Miles\tD. 10 Miles\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C. 2 Miles");
            getch();
            break;
        }
    case 13:

        printf("\n\n\n%d.When counting by sixes, what comes after 30?",qstion+1);
        printf("\n\nA. 38\t B. 33\n\nC. 36 \tD. 26\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C. 36");
            getch();
            break;
        }

    case 14:

        printf("\n\n\n%d.If X^2(x square) - 15=154 then X= ?",qstion+1);
        printf("\n\nA. 39\t B. 18\n\nC. 13\tD. 62\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C. 13");
            getch();
            break;
        }

    case 15:

        printf("\n\n\n%d.What is the price of a $300 watch marked down 40 percent?",qstion+1);
        printf("\n\nA. 240\t B. 200\n\nC. 120\tD. 180\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D. 180");
            getch();
            break;
        }

    case 16:

        printf("\n\n\n%d.Average of three person’s age is 9 years. Find the sum of there age.",qstion+1);
        printf("\n\nA. 18\t B. 21\n\nC. 24\tD. 27\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D. 27");
            getch();
            break;
        }
    case 17:
        printf("\n\n\n%d.A clock seen through a mirror, shows quarter past three. What is the 	correct time shown by the clock?",qstion+1);
        printf("\n\nA. 3.15\t B. 8.45\n\nC. 9.15\tD. 9.45\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D. 8.45");
            getch();
            break;
        }

    case 18:

        printf("\n\n\n%d.What is 999 times 100.0?",qstion+1);
        printf("\n\nA. 199.0\t B. 999.0\n\nC. 9990\tD. 99900\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D. 99900");
            getch();
            break;
        }
    case 19:
        printf("\n\n\n%d.What is the unit of volume? ",qstion+1);
        printf("\n\nA. square units.\t B. cubic units.\n\nC. only unit.\tD. None of these.\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B. cubic units.");
            getch();
            break;
        }
    case 20:
        printf("\n\n\n%d.1010 gram = ? kg. ",qstion+1);
        printf("\n\nA. 10.10 kg.\t B. 101.0 kg.\n\nC. 1.001 kg.\tD. 1.01 kg.\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D. 1.01 kg.");
            getch();
            break;
        }

    case 21:

        printf("\n\n\n%d.Name a triangle whose two angles are equal.",qstion+1);
        printf("\n\nA. Right angle triangle.\t B. Isosceles triangle.\n\nC. Scalene triangle.\tD. None of these\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B. Isosceles triangle.");
            getch();
            break;
        }
    case 22:
        printf("\n\n\n%d.How many lines can be drawn through two points? ",qstion+1);
        printf("\n\nA. 1\t B. 2\n\nC. 3\tD. Not possible\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A. 1");
            getch();
            break;
        }
    case 23:
        printf("\n\n\n%d.When we multiply an exact number by zero what will be the exact answer? ",qstion+1);
        printf("\n\nA. the exact number.\t B. cannot be multiplied.\n\nC. zero.\tD. None of these.\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C. zero.");
            getch();
            break;
        }

    case 24:
        printf("\n\n\n%d.If a number has an even number or zero at its unit place;",qstion+1);
        printf("the number is always divisible by - ");
        printf("\n\nA. 2\t B. 5\n\nC. 3\tD. 7\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A. 2");
            getch();
            break;
        }
    case 25:
        printf("\n\n\n%d.A number is divisible by 3 if the sum of its digits is divisible by - ",qstion+1);
        printf("\n\nA. 1\t B. 2\n\nC. 3\tD. 5\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C. 3");
            getch();
            break;
        }
    case 26:
        printf("\n\n\n%d.A number is divisible by 5 if its unit digit is - ",qstion+1);
        printf("\n\nA. 2 or 0\t B. 10 or 0\n\nC. 0 or 5\tD. None of these\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C. 0 or 5");
            getch();
            break;
        }

    case 27:
        printf("\n\n\n%d.The smallest number of seven digits is = ? ",qstion+1);
        printf("\n\nA. 0\t B. 99,99,999\n\nC. 10,10,100\tD. 10,00,000\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D. 10,00,000");
            getch();
            break;
        }
    case 28:
        printf("\n\n\n%d.The difference between the smallest number of four digits and the largest number of three digits is = ?",qstion+1);
        printf("\n\nA. 1\t B. 100\n\nC. 0\tD. 999\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A. 1");
            getch();
            break;
        }
    case 29:
        printf("\n\n\n%d.The sum of the least number of three digits and largest number of two 	digits is = ?",qstion+1);
        printf("\n\nA. 101\t B. 199\n\nC. 111\tD. 100\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B. 199");
            getch();
            break;
        }

    case 30:
        printf("\n\n\n%d.The least number of two digits is = ? ",qstion+1);
        printf("\n\nA. 99\t B. 11\n\nC. 90\tD. 10\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D. 10");
            getch();
            break;
        }
    case 31:
        printf("\n\n\n%d.In 24,673 ; the face-value of 4 is = ?",qstion+1);
        printf("\n\nA. 4\t B. 2\n\nC. 4000\tD. 9999\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A. 4");
            getch();
            break;
        }
    case 32:
        printf("\n\n\n%d.The largest number of six digits is = ? ",qstion+1);
        printf("\n\nA. 9,99,999\t B. 1,00,000\n\nC. 1,11,111\tD. 1,11,000\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A. 9,99,999");
            getch();
            break;
        }


    case 33:
        printf("\n\n\n%d.The simplest form of 1.5 : 2.5 is = ?",qstion+1);
        printf("\n\nA. 6 : 10\t B. 15 : 25\n\nC. 0.75 : 1.25\tD. 3 : 5\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D. 3 : 5");
            getch();
            break;
        }
    case 34:
        printf("\n\n\n%d.What is 6 times 5 plus 3 times 8 plus 1 times 0?",qstion+1);
        printf("\n\nA. 54\t B. 39\n\nC. 0\tD. 89\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A. 54");
            getch();
            break;
        }
    case 35:
        printf("\n\n\n%d.In 24,673 ; the place-value of 6 is =? ",qstion+1);
        printf("\n\nA. 700\t B. 600\n\nC. 10\tD. 100\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B. 600");
            getch();
            break;
        }
    case 36:
        printf("\n\n\n%d.What is 1004 divided by 2? ",qstion+1);
        printf("\n\nA. 52\t B. 502\n\nC. 520\tD. 5002\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B. 502");
            getch();
            break;
        }
    case 37:
        printf("\n\n\n%d.A clock strikes once at 1 o'clock, twice at 2 o'clock, thrice at 3 o'clock and so on.\n",qstion+1);
        printf("How many times will it strike in 24 hours? ",qstion+1);
        printf("\n\nA. 78\t B. 136\n\nC. 156\tD. 196\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C. 156");
            getch();
            break;
        }

    case 38:
        printf("\n\n\n%d.Which of the following numbers gives 240 when added to its own square?",qstion+1);
        printf("\n\nA. 15\t B. 16\n\nC. 18\tD. 20\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A. 15");
            getch();
            break;
        }

    case 39:
        printf("\n\n\n%d.The average of first 50 natural numbers is = ?",qstion+1);
        printf("\n\nA. 25.30\t B. 25.5\n\nC. 25.00\tD. 12.25\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B.  25.5");
            getch();
            break;
        }
    case 40:
        printf("\n\n\n%d.The number of 3-digit numbers divisible by 6, is = ?",qstion+1);
        printf("\n\nA. 149\t B. 166\n\nC. 150\tD. 151\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C. 150");
            getch();
            break;
        }

    case 41:
        printf("\n\n\n%d.20 % of 2 is equal to ?",qstion+1);
        printf("\n\nA. 20\t B. 4\n\nC. 0.4\tD. 0.04\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C. 0.4");
            getch();
            break;
        }

    case 42:
        printf("\n\n\n%d.. A school committee consists of 2 teachers and 4 students. The number of different\n",qstion+1);
        printf("committees that can be formed from 5 teachers and 10 students is ?");
        printf("\n\nA. 1000\t B. 1500\n\nC. 2100\tD. 850\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C. 2100");
            getch();
            break;
        }

    case 43:
        printf("\n\n\n%d. A car travelling with 5/7 of its actual speed covers 42 km in 1 hr 40 min 48 sec.\n",qstion+1);
        printf("Find the acturate speed of the car?");
        printf("\n\nA. 30 km/hr\t B. 25 km/hr\n\nC. 17 km/hr\tD. 35 km/hr\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A. 30 km/hr");
            getch();
            break;
        }

    case 44:
        printf("\n\n\n%d.A car can cover a distance of 522 km on 36 liters of petrol.",qstion+1);
        printf("How far can it travel on 14 liters of petrol?\n");
        printf("\n\nA. 213 km\t B. 223 km\n\nC. 203 km\tD. 302 km\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C. 203 km");
            getch();
            break;
        }

    case 45:
        printf("\n\n\n%d.Two numbers are in ratio 4 : 5. If the sum of the numbers is 135, find the numbers?",qstion+1);
        printf("\n\nA. 60 and 75\t B. 50 and 65\n\nC. 70 and 95\tD. 65 and 75\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A. 60 and 75");
            getch();
            break;
        }

    case 46:
        printf("\n\n\n%d.An acute angle is  - ?",qstion+1);
        printf("\n\nA. 90 degree\t B. more than 90 degree\n\nC. less than 90 degree\tD. None of these\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C. less than 90 degree");
            getch();
            break;
        }
    case 47:

        printf("\n\n\n%d.How much water is added to 750 g milk to get 1 kilogram mixture of liquid ?",qstion+1);
        printf("\n\nA. 2.5 kg\t B. 0.25 kg\n\nC. 20.5 kg\tD. 25.0 kg\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B. 0.25 kg");
            getch();
            break;
        }
    case 48:
        printf("\n\n\n%d.What is the sum of one digit prime numbers?",qstion+1);
        printf("\n\nA. 11\t B. 13\n\nC. 15\tD. 17\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D. 17");
            getch();
            break;
        }
    case 49:
        printf("\n\n\n%d.2 is a ____ number?",qstion+1);
        printf("\n\nA. Odd\t B. Prime\n\nC. composite\tD. None of these\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B. Prime");
            getch();
            break;
        }

    case 50:
        printf("\n\n\n%d.Which is the largest number in 15/17, 15/18, 15/19, 15/21?",qstion+1);
        printf("\n\nA. 15/17\t B. 15/18\n\nC. 15/19\tD. 15/21\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A. 15/17");
            getch();
            break;
        }
    case 51:
        printf("\n\n\n%d.What is the largest two digits prime number?",qstion+1);
        printf("\n\nA. 96\t B. 97\n\nC. 98\tD. 99\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B. 97");
            getch();
            break;
        }

    case 52:
        printf("\n\n\n%d.Complete the sequence 13, 16, ___, 22.",qstion+1);
        printf("\n\nA. 17\t B. 18\n\nC. 19\tD. 20\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C. 19");
            getch();
            break;
        }

    case 53:
        printf("\n\n\n%d.Which of these following set of numbers are factors of 24?",qstion+1);
        printf("\n\nA. 3, 9, 12\t B. 2, 3, 4, 6, 8\n\nC. 4, 7, 24\tD. 1, 5, 12, 18\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B. 2, 3, 4, 6, 8");
            getch();
            break;
        }

    case 54:
        printf("\n\n\n%d.What is the value of a^0?",qstion+1);
        printf("\n\nA. a\t B. -1\n\nC. 0\tD. 1\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D. 1");
            getch();
            break;
        }

    case 55:
        printf("\n\n\n%d.A clock seen through a mirror shows 8 o'clock. What is the correct time?",qstion+1);
        printf("\n\nA. 8.00\t B. 4.00\n\nC. 12.20\tD. 12.40\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B. 4.00");
            getch();
            break;
        }
    }
    i++;
    if (i<=n)
        goto starrt;
    printf("\n\n\n\n\t%d OUT OF %d WERE CORRECT!!! \n",res,qstion);
    score=(float)res/qstion*100;
    return score;
}


double liberation()
{

    int m,n;
    printf("\n\n\t\tChoose  - \n\n");
    printf("\n\t Press 1 for short-term(10 questions)\n");
    printf("\n\t Press 2 for average-term(15 questions)\n");
    printf("\n\t Press 3 for lonf-term(20 questions)\n");
    scanf("%d",&m);
    if(m==1)
        n=10;
    else if(m==2)
        n=15;
    else if(m==3)
        n=20;
    system("cls");
    int qstion,res,i,w,nq[20],r;
    char a;
    float score;
    qstion=res=0;
    i=1;
starrt:
    r=rand()%55+1;
    nq[i]=r;
    for (w=0; w<i; w++)
        if (nq[w]==r)
            goto starrt;

    switch(r)
    {

    case 1:
        printf("\n\n\n%d. Bangladesh became independent in - ",qstion+1);
        printf("\n\nA. 1974\t B. 1975\n\nC. 1970\tD. 1971\n\n");
        qstion++;
        a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D. 1971");
            getch();
            break;
        }



    case 2:
        printf("\n\n\n%d.Who was the commander in chief of the Liberation War of Bangladesh?",qstion+1);
        printf("\n\nA.Nazrul Islam\t B. M.A.G. Osmani\n\nC. Tajuddin Ahmed \tD.Motiur Rahman\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B. M.A.G. Osmani");
            getch();
            break;
        }

    case 3:
        printf("\n\n\n%d. What was Bangladesh called before",qstion+1);
        printf("\n\n1.North Bengal\t 2.South Bengal\n\n3.East Bengal\t4.West Bengal\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.East Bengal");
            getch();
            break;
        }

    case 4:
        printf("\n\n\n%d.Who was the founder of Bangladesh?",qstion+1);
        printf("\n\nA.Sheikh Mujibur Rahman\t B. M.A.G. Osmani\n\nC.Tajuddin Ahmed\tD.Jiaur Rahman\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.Sheikh Mujibur Rahman");
            getch();
            break;
        }

    case 5:
        printf("\n\n\n%d.How many sectors were there in Liberation War?",qstion+1);
        printf("\n\nA. 14\t B. 11\n\nC. 17\tD. 10\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B. 11");
            getch();
            break;
        }
    case 6:
        printf("\n\n\n%d.When was the Mujibnagar government formed?",qstion+1);
        printf("\n\nA.17 April 1971\t B.10 April 1971\n\nC.12 june 1972\tD.26 March 1971\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.17 April 1971");
            getch();
            break;
        }

    case 7:
        printf("\n\n\n%d.Who created the Bangladesh flag?",qstion+1);
        printf("\n\nA.M.Abdur Rab\t B.Abdul Hye\n\nC.Mainul Hossain\tD.Quamrul Hasan\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D.Quamrul Hasan");
            getch();
            break;
        }

    case 8:
        printf("\n\n\n%d.Dhaka was in which sector at the time of War?",qstion+1);
        printf("\n\nA. 2\t B. 5\n\nC. 9\tD.l1\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A. 2");
            getch();
            break;
        }

    case 9:
        printf("\n\n\n%d.Jail Killing Day is observed on -",qstion+1);
        printf("\n\nA.14 december\t B.3 November\n\nC.16 December\tD.25 March\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B. 3 November");
            getch();
            break;
        }
    case 10:
        printf("\n\n\n%d.Who first recognised Bangladesh?",qstion+1);
        printf("\n\nA.Bhutan\t B.Poland\n\nC.India\tD.Germany\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.India");
            getch();
            break;
        }
    case 11:
        printf("\n\n\n%d.How many people received the 'BIR PROTIC' award?",qstion+1);
        printf("\n\nA.420\t B.426\n\nC.7\tD.l1\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B.426");
            getch();
            break;
        }

    case 12:
        printf("\n\n\n%d.Who was the vice president of Mujibnagar?",qstion+1);
        printf("\n\nA.Nazrul Islam\t B.Tajuddin Ahmed\n\nC.Kamrul Hossain\tD.M.A.G.Osmani\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.Nazrul Islam");
            getch();
            break;
        }
    case 13:
        printf("\n\n\n%d.On which day UNESCO added the 7 march speech in the Memory of the World Register?",qstion+1);
        printf("\n\nA.20 November,2018\t B.30 October,2017\n\nC.30 October,2019\tD.20 November,2017\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B.30 October,2017");
            getch();
            break;
        }

    case 14:
        printf("\n\n\n%d.What is the most gallantry award of the war of liberation?",qstion+1);
        printf("\n\nA.The Bir Bikram\t B.The Bir Uttam\n\nC.The Bir Protik\tD.The Bir Sreshtho\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D.The Bir Sreshtho");
            getch();
            break;
        }
    case 15:

        printf("\n\n\n%d.Who was the only foreigner to receive the 'Bir Protik' award? ",qstion+1);
        printf("\n\nA.Sen warn\t B.David warner\n\nC.A.S.Ouderland\tD.L.Amsterd\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C .A.S.Ouderland");
            getch();
            break;
        }
    case 16:

        printf("\n\n\n%d.During the war Mujibnagar was sector-?",qstion+1);
        printf("\n\nA. 11\t B. 8\n\nC. 2\tD. 10\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B. 8");
            getch();
            break;
        }

    case 17:
        printf("\n\n\n%d.Which is the second country to recognize Bangladesh??",qstion+1);
        printf("\n\nA.India\t B.Bhutan\n\nC.Srilanka\tD.Nepal\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B.Bhutan");
            getch();
            break;
        }


    case 18:
        printf("\n\n\n%d.Which party won the elections in Pakistan in 1970",qstion+1);
        printf( "and was not allowed to form government?");
        printf("\n\nA.Awami League \t B.Muslim League\n\nC.Justice Party\tD.Pakistan People’s Party\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.Awami League ");
            getch();
            break;
        }

    case 19:
        printf("\n\n\n%d.Who was the captain of the Swadhin Bangla football team?",qstion+1);
        printf("\n\nA.Kazi Salauddin\t B.Zakaria Pintu\n\nC.Ashrafuddin Chunnu\tD.Monem Munna\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B.Zakaria Pintu");
            getch();
            break;
        }

    case 21:
        printf("\n\n\n%d.Who was the first Bangladeshi to win the Nobel Peace Prize?",qstion+1);
        printf("\n\nA.Amartya Sen\t B.Muhammad Yunus\n\nC.R.N. Tagore\tD.Sheikh Mujibur Rahman\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B.Muhammad Yunus");
            getch();
            break;
        }


    case 22:
        printf("\n\n\n%d.Who was known as 'Shilpacharya', meaning Maestro of Art?",qstion+1);
        printf("\n\nA.Shahabuddin\t B.Kamrul Hasan\n\nC.S.M. Sultan\tD.Jaynul Abedin\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D.Jaynul Abedin");
            getch();
            break;
        }


    case 23:
        printf("\n\n\n%d.Who was the army chief during the War of Liberation in 1971?",qstion+1);
        printf("\n\nA.VA.K. Khandaker\t B. Moin U. Ahmed\n\nC. M.A.G. Osmani\tD. K.M. Shafiullah\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C. M.A.G. Osmani");
            getch();
            break;
        }

    case 24:
        printf("\n\n\n%d.Who was the first female Prime Minister of Bangladesh?",qstion+1);
        printf("\n\nA.Begum Khaleda Zia\t B.Sheikh Rehana\n\nC.Sheikh Hasina\tD.Rowshan Ershad\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B.Sheikh Rehana");
            getch();
            break;
        }

    case 25:
        printf("\n\n\n%d.Who was the first President of Bangladesh ?",qstion+1);
        printf("\n\nA.Tajuddin Ahmad\t B.Khandaker Mustaq Ahmad\n\nC.Syed Nazrul Islam\tD.Sheikh Mujibur Rahman\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D. Sheikh Mujibur Rahman");
            getch();
            break;
        }

    case 26:
        printf("\n\n\n%d.How many freedom fighters were awarded?",qstion+1);
        printf("\n\nA. 175\t B. 426\n\nC. 548\tD. 676\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D. 676");
            getch();
            break;
        }

    case 27:
        printf("\n\n\n%d.How many sits did Awami Leage win?",qstion+1);
        printf("\n\nA. 167\t B. 168\n\nC. 169\tD. 170\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C. 169");
            getch();
            break;
        }

    case 28:
        printf("\n\n\n%d.Who hosted the first flag of Bangladesh?",qstion+1);
        printf("\n\nA.Abdur Rob\t B.Najrul\n\nC.Shofiq\tD.Babul\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.Abdur rob");
            getch();
            break;
        }

    case 29:
        printf("\n\n\n%d.When was 26 March declared as Independence Day?",qstion+1);
        printf("\n\nA. 1981\t B. 1988\n\nC. 1985\tD. 1980\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D. 1980");
            getch();
            break;
        }

    case 30:
        printf("\n\n\n%d.In which sector there were no regular commander?",qstion+1);
        printf("\n\nA. 8\t B. 9\n\nC. 10\tD. 11\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C. 11");
            getch();
            break;
        }

    case 31:
        printf("\n\n\n%d.What is the old name of Mujibnagar ?",qstion+1);
        printf("\n\nA.Voberpara\t B. Amjhupi\n\nC.Kedarganj\tD.Vobodia\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.Voberpara");
            getch();
            break;
        }

    case 32:
        printf("\n\n\n%d.Whose deadbody couldn't be recovered?",qstion+1);
        printf("\n\nA.Mostofa kamal\t B.Ruhul Amin\n\nC.Motiur Rahman\tD.Abdur Rauf\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B.Ruhul Amin");
            getch();
            break;
        }

    case 33:
        printf("\n\n\n%d.Who surrendered on behalf of Pakistan ?",qstion+1);
        printf("\n\nA. M.A. kalam\t B. Bhuttu\n\nC. A.k. Niaji\tD. M.Hasan\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.A.K.Niaji");
            getch();
            break;
        }

    case 34:
        printf("\n\n\n%d.Who first died among these people?",qstion+1);
        printf("\n\nA.Mostofa Kamal\t B.Abdur Rouf\n\nC.Motiur Rahman\tD.Hamidur Rahman\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.Mostofa Kamal");
            getch();
            break;
        }



    case 35:
        printf("\n\n\n%d.Which one is the highest appellation ?",qstion+1);
        printf("\n\nA.Bir protik\t B.Bir bikrom\n\nC.Birsrestro\tD.Bir uttam\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.Birsrestro");
            getch();
            break;
        }


    case 36:
        printf("\n\n\n%d.Who was the squadron leader who led the first strike of Bangladesh Air Force in December 1971?",qstion+1);
        printf("\n\nA.Akram Ahmed\t B.Motiur Rahman\n\nC.Sharfuddin Ahmad\tD.Sultan Mahmud\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D.Sultan Mahmud");
            getch();
            break;
        }

    case 37:
        printf("\n\n\n%d. What was the name of the Pakistan Air Force operation on December 3",qstion+1);
        printf("\n\nA.search-light\t B.dark-light\n\nC.chengiz khan\tD.special force\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.chengiz khan");
            getch();
            break;
        }

    case 38:
        printf("\n\n\n%d.Why did the US deploy the aircraft carrier USS enterprise in the Bay of Bengal on December 11?",qstion+1);
        printf("\n\nA.To support West Pakistan  \t B.To counter the Soviet Navy\n\nC.To attack Sri Lanka\tD.To liberate Bangladesh\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is 1.To support West Pakistan");
            getch();
            break;
        }

    case 39:
        printf("\n\n\n%d.December 14 is commemorated in Bangladesh as __?",qstion+1);
        printf("\n\nA.Independence day\t B.Bengali Genocide Remembrance Day\n\nC.Martyred Intellectuals Day \tD.Victory day\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C. Martyred Intellectuals Day ");
            getch();
            break;
        }
    case 40:
        printf("\n\n\n%d. Who was the commander-in-chief of India and Bangladesh allied forces\n",qstion+1);
        printf("in the Eastern theatre in 1971 Bangladesh Liberation war?");
        printf("\n\nA.JFR Jacob\t B.Sam Manekshaw\n\nC.Arjan Singh\tD.Jagjit Singh Arora\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D.Jagjit Singh Arora");
            getch();
            break;
        }

    case 41:
        printf("\n\n\n%d.Who was the squadron leader who led the first strike of Bangladesh Air Force in December 1971?",qstion+1);
        printf("\n\nA.Akram Ahmed\t B.Motiur Rahman\n\nC.Sharfuddin Ahmad\tD.Sultan Mahmud\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D.Sultan Mahmud");
            getch();
            break;
        }
    case 42:
        printf("\n\n\n%d. The name of the first fleet of Bangladesh Navy in 1971 was ‘Bangabandhu Naubahar'.\n",qstion+1);
        printf("When was it inaugurated??");
        printf("\n\nA. December 6\t B.December 9\n\nC.December 16\tD.December 7\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.December 16");
            getch();
            break;
        }
    case 43:
        printf("\n\n\n%d.The freedom fighters of Sector __ helped liberate Tongi on December 14 ?",qstion+1);
        printf("\n\nA. 9\t B. 10 \n\nC. 11 \tD. 12\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C. 11");
            getch();
            break;
        }
    case 44:
        printf("\n\n\n%d. When Dhaka fell to the Mitro Bahini?",qstion+1);
        printf("\n\nA.December 13\t B.December 12\n\nC.December 11\tD.December 16\n\n");
        qstion++;
        a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D.December 16");
            getch();
            break;
        }
    case 45:
        printf("\n\n\n%d.When India and Pakistan got independence?",qstion+1);
        printf("\n\nA.1981\t B.1999\n\nC.1947\tD.1988\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.1947");
            getch();
            break;
        }
    case 46:
        printf("\n\n\n%d.Who is the leader of awami league ?",qstion+1);
        printf("\n\nA.Fazlul Haque\t B.Sheik Mujibur Rahman\n\nC.Nazrul Islam\tD.Vasani \n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B.Sheik Mujibur Rahman");
            getch();
            break;
        }
    case 47:
        printf("\n\n\n%d. Seven students were killed in a fierce protest on?",qstion+1);
        printf("\n\nA.February 22, 1952\t B.February 21, 1952\n\nC.February 24, 1952\tD.February 22, 1952\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='B')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B.February 21, 1952");
            getch();
            break;
        }
    case 48:
        printf("\n\n\n%d. What is now recognized as the International MotherLanguage Day by the United Nations?",qstion+1);
        printf("\n\nA.February 21\t B.February 25\n\nC. February 22\tD.February 27\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.February 21");
            getch();
            break;
        }
    case 49:
        printf("\n\n\n%d. The Chairman of the Pakistan was?",qstion+1);
        printf("\n\nA. Zulfikar Ali Bhutto\t B.Sheikh Mujib\n\nC.Ziaur Rahman\tD. Mustak Ahamed\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A. Zulfikar Ali Bhutto");
            getch();
            break;
        }
    case 50:
        printf("\n\n\n%d. The West Pakistani genera was ?",qstion+1);
        printf("\n\nA.Tikka Khan\t B.Zulfikar Bhutto\n\nC.Niaji\tD.Motiur Rahman \n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.Tikka Khan");
            getch();
            break;
        }
    case 51:
        printf("\n\n\n%d. The Mukti Bahini were trained like ?",qstion+1);
        printf("\n\nA.Militaries\t B.Armies\n\nC.Guerillas\tD.Fogies\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.Guerillas");
            getch();
            break;
        }
    case 52:
        printf("\n\n\n%d.Who ordered air and ground attacks ?",qstion+1);
        printf("\n\nA.Bongobondhu \t B.Bhuttu\n\nC.Tikka Khan \tD.Indira Gandhi\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='D')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D.Indira Gandhi");
            getch();
            break;
        }
    case 53:
        printf("\n\n\n%d. Who singed “Instrument of Surrender”?",qstion+1);
        printf("\n\nA.Tikka khan\t B.Bhuttu\n\nC. Niaji\tD.Gandhi\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='C')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.Niaji");
            getch();
            break;
        }
    case 54:
        printf("\n\n\n%d.What cyclone hit East Pakistan in 1970?",qstion+1);
        printf("\n\nA.Bhola Cyclone\t B.Feni  cyclone \n\nC.Alia cyclon\tD.Bulbul cyclone\n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.Bhola Cyclone");
            getch();
            break;
        }
    case 55:
        printf("\n\n\n%d. The head of the Mukti Bahini was  ?",qstion+1);
        printf("\n\nA.Muhammad Osmani\t B.Indira Gandhi\n\nC.General Aurora\tD.Tikka Khan \n\n");
        qstion++;
                a=toupper(getch());
        if (a=='A')
        {
            printf("\n\nCorrect!!!");
            res++;
            getch();
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.Muhammad Osmani");
            getch();
            break;
        }
    }
    i++;
    if (i<=n)
        goto starrt;
    printf("\n\n\n\n\t%d OUT OF %d WERE CORRECT!!! \n",res,qstion);
    score=(float)res/qstion*100;
    return score;
}



void displayscore()
{
    char name[20];
    float s;
    FILE *f;
    system("cls");
    f=fopen("score.txt","r");
    fscanf(f,"%s%f",&name,&s);
    printf("\n\n\t\t ");
    printf("\n\n\t\t %s has secured the Highest Score %.2f",name,s);
    printf("\n\n\t\t ");
    fclose(f);
    getch();
}



void help()
{
    system("cls");
    printf("\n\n\n\tThis game is very easy to play. You'll be asked some questions");
    printf("\n\n\ton your desired topic and the right answer is to be chosen among");
    printf("\n\n\tthe four options provided. Your score will be calculated and will");
    printf("\n\n\t be displayed at the end .If you secure highest score, your score");
    printf("\n\n\twill be recorded. So BEST OF LUCK.");
}
void writescore(float score, char plnm[20])
{
    float sc;
    char nm[20];
    FILE *f;
    system("cls");
    f=fopen("score.txt","r");
    fscanf(f,"%s%f",&nm,&sc);
    if(score>=sc)
    {
        sc=score;
        fclose(f);
        f=fopen("score.txt","w");
        fprintf(f,"%s\n%.2f",plnm,sc);
        fclose(f);
    }

}
int main()
{
    int qstion,res;
    int r,i,a,m;
    int pa;
    int nq[20];
    int w;
    float score;
    char choice;
    char playername[20];
    system("cls");
    //randomize();
mainhome:
    system("cls");
    printf("\n\t\t WELCOME TO THE QUIZ CONTEST\n\n") ;
    printf("\n\t\t-------------------------------");
    printf("\n\t\t Enter 'S' to start game       ");
    printf("\n\t\t Enter 'V' to view high score  ");
    printf("\n\t\t Enter 'H' for help            ");
    printf("\n\t\t Enter 'Q' to quit             ");
    printf("\n\t\t-------------------------------\n\n\t\t  ");
    choice=toupper(getch());
    if (choice=='V')
    {
        displayscore();
        goto mainhome;
    }
    else if (choice=='Q')
        exit(1);
    else if (choice=='H')
    {
        help();
        getch();
        goto mainhome;
    }
    else if(choice=='S')
    {
        system("cls");

        printf("\n\n\n\t\t\tEnter your name...");
        printf("\n\t\t\t(only one word)\n\n\t\t\t");
        gets(playername);
home:
        printf("\n\n\t\tChoose subject - \n\n");
        printf("\n\t Press 1 for Sports related\n");
        printf("\n\t Press 2 for General knowledge related\n");
        printf("\n\t Press 3 for Mathematics related \n");
        printf("\n\t Press 4 for liberation war related \n");
        scanf("%d",&m);
        if(m==1)
        {
            score=sports();
            if (score<0)
                score=0;
            printf("\n\tYour Score: %.2f %%",score);
            if (score==100)
                printf("\n\n\n\n\tEXCELLENT!!! KEEP IT UP\n\n\n");
            else if (score>=80 && score<100)
                printf("\n\n\n\n\tVERY GOOD!!\n\n\n");
            else if (score>=60 &&score<80)
                printf("\n\n\n\n\tGOOD! BUT YOU NEED TO KNOW MORE.\n\n\n");
            else if (score>=40 && score<60)
                printf("\n\n\n\n\tSATISFACTORY RESULT, BUT THIS MUCH IS MUCH SUFFICIENT.\n\n\n");
            else
                printf("\n\n\n\n\tNEED TO WORK HARD.KEEP TRYING.\n\n\n");
            puts("\n\nNEXT PLAY?(Y/N)");
            if (toupper(getch())=='Y')
                goto home;
            else
            {
                writescore(score,playername);
                goto mainhome;
            }
            getch();
        }
        else if(m==2)
        {
            score=general();
            if (score<0)
                score=0;
            printf("\n\tYour Score: %.2f %%",score);
            if (score==100)
                printf("\n\n\n\n\tEXCELLENT!!! KEEP IT UP\n\n\n");
            else if (score>=80 && score<100)
                printf("\n\n\n\n\tVERY GOOD!!\n\n\n");



            else if (score>=60 &&score<80)
                printf("\n\n\n\n\tGOOD! BUT YOU NEED TO KNOW MORE.\n\n\n");
            else if (score>=40 && score<60)
                printf("\n\n\n\n\tSATISFACTORY RESULT, BUT THIS MUCH IS MUCH SUFFICIENT.\n\n\n");
            else
                printf("\n\n\n\n\tNEED TO WORK HARD.KEEP TRYING.\n\n\n");
            puts("\n\nNEXT PLAY?(Y/N)");
            if (toupper(getch())=='Y')
                goto home;
            else
            {
                writescore(score,playername);
                goto mainhome;
            }
            getch();
        }
        else if(m==3)
        {
            score=mathematics();
            printf("\n\tYour Score: %.2f  %%",score);
            if (score==100)
                printf("\n\n\n\n\tEXCELLENT!!! KEEP IT UP\n\n\n");
            else if (score>=80 && score<100)
                printf("\n\n\tVERY GOOD!!\n\n\n\n\n");
            else if (score>=60 &&score<80)
                printf("\n\n\n\n\tGOOD! BUT YOU NEED TO KNOW MORE.\n\n\n");
            else if (score>=40 && score<60)
                printf("\n\n\n\n\tSATISFACTORY RESULT, BUT THIS MUCH IS MUCH SUFFICIENT.\n\n\n");

            else
                printf("\n\n\n\n\tNEED TO WORK HARD.KEEP TRYING.\n");
            puts("NEXT PLAY?(Y/N)");
            if (toupper(getch())=='Y')
                goto home;
            else
            {
                writescore(score,playername);
                goto mainhome;
            }
            getch();
        }

        else if(m==4)
        {
            score=liberation();
            printf("\n\tYour Score: %.2f %%\n\n",score);
            if (score==100)
                printf("\n\n\n\n\tEXCELLENT!!! KEEP IT UP\n\n");
            else if (score>=80 && score<100)
                printf("\n\n\n\n\tVERY GOOD!!\n\n");
            else if (score>=60 &&score<80)
                printf("\n\n\n\n\tGOOD! BUT YOU NEED TO KNOW MORE.\n\n");
            else if (score>=40 && score<60)
                printf("\n\n\n\n\tSATISFACTORY RESULT, BUT THIS MUCH IS MUCH SUFFICIENT.\n");

            else
                printf("\n\n\n\n\tNEED TO WORK HARD.KEEP TRYING.\n\n");
            puts("NEXT PLAY?(Y/N)");
            if (toupper(getch())=='Y')
                goto home;
            else
            {
                writescore(score,playername);
                goto mainhome;
            }
            getch();
        }

    }


    else
    {
        printf("\n\n\t\t  Enter the right key\n\n\t\t  ");
        Sleep(700);
        goto mainhome;
    }
    return 0;
}




