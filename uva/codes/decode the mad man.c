#include<stdio.h>
#include<string.h>
int main()
{
   char ck,sntc[1000];
   int l,i;

   while(gets(sntc)!=NULL)
   {
      l=strlen(sntc);
      for(i=0;i<l;i++)
      {
		  
		ck=sntc[i];
           if(ck=='s' || ck=='S') printf("]");
		   if(ck=='b' || ck=='B') printf("c");
		   if(ck=='a' || ck=='A') printf("[");
           if(ck=='c' || ck=='C') printf("z");
           if(ck=='d' || ck=='D') printf("a");
           if(ck=='e' || ck=='E') printf("q");
           if(ck=='f' || ck=='F') printf("s");
           if(ck=='g' || ck=='G') printf("d");
           if(ck=='h' || ck=='H') printf("f");
           if(ck=='i' || ck=='I') printf("y");
           if(ck=='j' || ck=='J') printf("g");
           if(ck=='k' || ck=='K') printf("h");
           if(ck=='l' || ck=='L') printf("j");
           if(ck=='m' || ck=='M') printf("b");
           if(ck=='n' || ck=='N') printf("v");
           if(ck=='o' || ck=='O') printf("u");
           if(ck=='p' || ck=='P') printf("i");
           if(ck=='r' || ck=='R') printf("w");
           if(ck=='t' || ck=='T') printf("e");
           if(ck=='u' || ck=='U') printf("t");
           if(ck=='v' || ck=='V') printf("x");
           if(ck=='x' || ck=='X') printf("\\");
           if(ck=='y' || ck=='Y') printf("r");
           if(ck=='z' || ck=='Z') printf("\'");
           if(ck=='\'') printf("l");
           if(ck==',')  printf("n");
           if(ck=='.')  printf("m");
           if(ck=='/')  printf(",");
           if(ck==';')  printf("k");
           if(ck=='[')  printf("o");
           if(ck==']')  printf("p");
		   if(ck==' ')  printf(" ");
      }
      printf("\n");
   }

   return 0;
}
