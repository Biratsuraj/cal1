#include <stdio.h>
 float add(float x,float y); 
  float sub(float x,float y);
   float mul(float x,float y); 
    float div(float x, float y);
      float per(float x,float y);
        int main()
          {
             int opt;
              float a,b;
               printf("\n\n..............calculator...........");
                printf("\n[1]addition");
                 printf("\n[2]subroction");
                  printf("\n[3]multiplication");
                   printf("\n[4]division");
                    printf("\n[5]percentoge");
                     printf("\nchoose any options:");
                      scanf("%d",&opt);
                        if(opt==1)
                         {
                           printf("\n enter first number:");
                            scanf("%f",&a); 
                              printf("\n enter second number:");  
                               scanf("%f",&b);         
                                printf("\n addition:%f",add(a,b)); 
                                 }
                                  else if(opt==2) 
                                   {
                                    printf("\n enter First number:");            
                                    scanf("%f",&a);         
                                     printf("\n enter second number");
                                       scanf("%f",&b);   
                                         printf("\n subtraction:%f",sub(a,b));
                                           } 
                                             else if(opt==3)
                                      {
            printf("\n enter first number:");
            scanf("%f",&a);
            printf("\n enter second number:");
            scanf("%f",&b);
            printf("\n multiplication :%f",mul(a,b));
             }
            else if(opt==4)
            {
            printf("\n enter first number:");
            scanf("%f",&a);
            printf("\n enter second number:");
            scanf("%f",&b);
            printf("\n division:%f",div(a,b));
             }
            else if(opt==5)
            {
            printf("\n enter first number:");
            scanf("%f",&a);
            printf("\n enter second number:");
            scanf("%f",&b);
            printf("\n percentage:%f",per(a,b));
               }
             else
            {
            printf("please choose correct option ");;
             } 
            return main(); 
            }
            float add(float x,float y) 
            {
            return x+y;
             }
            float sub(float x,float y)
            {
            return x-y;
            }
            float mul(float x,float y)
            {
            return x*y;
            }
            float div(float x,float y)
            {
            return x/y;
            }
            float per(float x,float y)
            {
            return ((x*y)/100);
            }
           


            
            
 



















    