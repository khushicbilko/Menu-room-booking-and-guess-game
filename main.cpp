#include<stdio.h>;
#include<stdlib.h>;
#include<time.h>;
int main()
{
int h,i,qty,ran=0,total=0;
char s[1000];
printf("Enter your Name: ");
gets(s);
printf("Welcome %s\n\n\n",s);
printf("Enter choice:\n 1.Restaurant menu\n 2.Hotel Room Booking\n 3.Guess Random Number\n 4. Exit\n”);
scanf("%d",&h);
switch (h)
{
case 1:
printf("______________________________________________________________________________________ \n");
printf("\n\t\t\t\t** WELCOME TO RESTAURANT **\n\n");
printf("\n\t\t\t\t\t** MENU CARD **\n\n");
int c;
printf("\n\t\t\tPRODUCT\t\t\t\t\tPRICE\n\n\t\t\t1. ORANGE JUICE\t\t\t20Rs.\n\t\t\t2. MILK SHAKE\t\t\t\t50Rs.\n\t\t\t3. COFFEE\t\t\t\t30Rs.\n\t\t\t4. TEA\t\t\t\t\t10Rs. \n\t\t\t5. COKE\t\t\t\t20Rs. \n\n\t\t\t6. VEG BURGER\t\t\t\t60Rs. \n\t\t\t7. VEG SANDWICH\t\t\t50Rs. \n\t\t\t8. PIZZA\t\t\t\t70RS \n\t\t\t9. MAGGI\t\t\t\t30Rs.\t\t\t\t\t\t \n\t\t\t10. PASTA\t\t\t\t65Rs. \n\t\t\t11. ROLL\t\t\t\t40Rs. \n\n\t\t\t12. BROWNIE\t\t\t\t70Rs.\n\t\t\t13. ICE-CREAM\t\t\t\t40Rs. \n\t\t\t14. PASTRY\t\t\t\t30Rs. \n\t\t\t15. FRUIT CUSTARD\t\t\t30Rs. \n\t\t\t16. CUP CAKE\t\t\t\t20Rs.\n\n");
printf("Enter number of different types of items you want to choose: ");
scanf("%d",&c);
int a;
int price[16]={20,50,30,10,20,60,50,70,30,65,40,70,40,30,30,20};
for(i=0;i<c;i++)

{
printf("Enter choice %d: ",i+1);
scanf("%d",&a);
if(a<=16)
{
printf("Enter quantity: ");
scanf("%d",&qty);
total+=(price[a-1]*qty);
printf("\n");
}
else
{
printf("enter within limit!!!");
--i;
}
}
for(i=0;i<c;i++)
{
}
float tg=total+(0.05*total);
printf("______________________________________________________________________________________ \n");
printf("\t\t\t\t\tTotal amount: %d\n",total);
printf("______________________________________________________________________________________ \n");
printf("\t\t\t\t\t Gst: %.2f\n",(0.05*total));
printf("______________________________________________________________________________________ \n");
printf("\t\t\t\t\tTotal amount: %.2f\n______________________________________________________________________________________",tg);
break;
case 2:
printf("______________________________________________________________________________________ \n");
printf("\n\t\t\t\t\t** WELCOME TO HOTEL ROOM BOOKING **\n\n");
printf(("\n\n\t\t\t\t\t\tROOMS AVAILABLE\n\n");
int m,n,p;
printf("\n\tROOMS\t\t\t\t\tPRICE FOR ADULTS\t\t\t\t\tPRICE FOR CHILDREN\n\n\t1. SINGLE\t\t\t\t3,000Rs.\t\t\t\t\t2,500Rs.\n\t2. DOUBLE\t\t\t\t5,500Rs.\t\t\t\t\t5,000Rs.\n\t3. SUPERIOR\t\t\t\t8,500Rs.\t\t\t\t\t8,000Rs.\n\t4. DELUXE\t\t\t\t12,000Rs.\t\t\t\t\t11,500Rs. \n\t5. JUNIOR SUITE\t\t\t\t17,000Rs.\t\t\t\t\t16,500Rs. \n\t6. SUITE\t\t\t\t25,000Rs.\t\t\t\t\t24,500Rs. \n\n");
printf("Enter number of rooms you want to book: ");
scanf("%d",&m);
printf("Enter no. of days for stay: ");
scanf("%d",&p);
int b,j,age=0;
int price1[6]={3000,5500,8500,12000,17000,25000};
int price2[6]={2500,5000,8000,11500,16500,24500};
for(i=0;i<m;i++)
{
printf("Enter choice: ");
scanf("%d",&b);
printf("\n");
printf("Enter no. of people staying in each room: ");
scanf("%d",&n);
printf("\n\n");
for(j=0;j<n;j++)
{
printf("Enter age of person %d: ",j+1);
scanf("%d",&age);
if(age<10)
total+=price1[b-1];
else
total+=price2[b-1];
}
printf("\n");
}
total=total*p;
float ta=total+(0.18*total);
printf("______________________________________________________________________________________ \n");
printf("\t\t\t\t\tTotal amount: %d\n",total);
printf("______________________________________________________________________________________ \n");
printf("\t\t\t\t\t Gst: %.2f\n",(0.18*total));
printf("______________________________________________________________________________________ \n");

printf("\t\t\t\tTotal amount to be paid: %.2f\n______________________________________________________________________ ________________",ta);
break;
case 3:
printf("______________________________________________________________________________________ \n");
printf("\n\t\t\t\t** WELCOME TO THE GAME **\n\n");
int guess, tries = 0;
srand(time(NULL));
ran=rand()%100;
do
{
printf("Enter a guess between 1 and 100 : ");
scanf("%d",&guess);
tries++;
if(tries==10)
{
printf("\n\nMaximum limit of atttempt finished, TRY YOUR LUCK NEXT TIME!!!\n");
printf("The number was : %d\n",ran);
break;
}
if (guess &gt; ran)
{
printf("Generated number is less than entered number, try your luck again...\n\n");
}
else if (guess &lt; ran)
{
printf("Generated number is greater than entered number, try your luck
again...\n\n");
}
else
{
printf("\nCongratulations, you have guessed a correct number in %d guesses!\n",tries);
}
}while (guess != ran);
printf("_____________________________________________________________________
_________________ ");
break;
case 4:

printf("Thank you!Please visit again.");
break;
default:
printf("Enter a valid choice.");
break;
}
return 0;
}