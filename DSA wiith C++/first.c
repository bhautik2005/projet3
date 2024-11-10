#include<stdio.h>
 void push();
 void pop();
 void peek();
 void update();
 void display();

 int a[100],top=-1;

 int main()
 {
int x,i;

      while (i)
      {
        printf("\n0 or ctrl-c to exit");
        printf("\n1 push" );
        printf("\n2 pop");
        printf("\n3 peek");
        printf("\n4 update");
        printf("\n5 display");
        printf("\n Enter your choise :");
        scanf("%d",&x);
        switch (x)
        {
        case 0:
         return 0;
         case 1:
           push();
           break;
         case 2:
           pop();
           break;
         case 3:
           peek();
           break;
         case 4:
           update();
           break;
         case 5:
           display();
           break;
          default:
          printf("\n please enter a vild entery ");
            break;
        }
        }
 

 }




 void push(){
    int n=0;
    if(a[100]>100){
        printf("seact is over follew");
    }
    else{
         printf("\n Eanter the value to inserted ");
    scanf("%d ",&n);
    top+=1;
    a[top]=n;
   //printf("your values is insert succ %d",n);
    }
   }

 void pop(){
    if(top==-1){
        printf("seact is emty ");
    }
    else{
       int item;
         item=a[top];
        top-=1;
        printf("poped item is %d ",item);
        
        
    }
}

 void peek (){
    if(top > 0){
       printf("\nyour top value is %d",a[top]);
       
    }
    else{
        printf("seact is emty ");
    }
   }

 void update(){
    int i,n;
    printf("\n Enter the item to update ");
    scanf("%d",&i);
    printf("\n Enter the item to ensert ");
    scanf("%d",&n);
    if(top-i+1<0){
        printf("\n Under low condisions");
    }
    else{
        a[top-i+1]=n;
    }
}

 void display(){
 int i;
if(top==-1){
    printf("your serect is emty ");
}
else{
    for(i = top; i>=0; i--)
    {
        printf("%d\n",a[i]);
    }
}
}
   

