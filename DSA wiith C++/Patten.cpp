#include<iostream>

using namespace std;

int main()
{
/*
//=================1========================================
 int i,j;                             
 for(i=0;i<3;i=i+1)       
 {                               
    for(j=0;j<5;j=j+1)
    {
        cout<<" * ";
    }
    cout<<endl; 
    }
      //-----------------------output-----------------------
        *  *  *  *  * 
        *  *  *  *  * 
        *  *  *  *  * 
   
    
  
//2=================================================================
   cout<<"entrer a number :";
   int a,i,j;
   cin>>a;
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            cout<<" * ";
           
        }
        cout<<endl;
    }
//-----------------output-------------------
 *  *  *  *  * 
 *  *  *  *  * 
 *  *  *  *  * 
 *  *  *  *  * 
 *  *  *  *  * 
     
//3==========================================================
  cout<<"enter the number:";
  int n;
  cin>>n;
  for(int row=0;row<n; row++){
    for(int col=0; col<n; col++){
        if(row==0|| row==n-1||col==0||col==n-1){
            cout<<"* ";
        }
        else{
            cout<<"  ";
        }
    }
    cout<<endl;
    }
 //--------output-------------------------
 enter the number:5
* * * * * 
*       * 
*       * 
*       * 
* * * * *    


 //4==========================================================
 cout<<"enter row and coiums";
 int r,c;
 cin>>r;
 cin>>c;
for(int row=0; row<r; row=row+1){
    if(row == 0 || row == r-1){
        for(int col=0; col<c; col++){
            cout<< "* ";
        }
    }
    else{
        cout<< "* ";
        for(int i=0; i<c-2; i=i+1){
            cout<< "  ";
        }
        cout<< "* ";
    }
    cout << endl;
}
//-------------output-------------------------------
enter row and coiums 5
10
* * * * * * * * * * 
*                 * 
*                 * 
*                 * 
* * * * * * * * * * 


//5============= new program haif trigal==============
cout<<"enter a number";
int a;
cin>>a;
for(int row=0;row<a;row++)
{
    for(int col=0;col<row+1;col++){
        cout<<" * ";
    }
    cout<<endl;
}
//-----------output------------
enter a number5
 * 
 *  * 
 *  *  * 
 *  *  *  * 
 *  *  *  *  * 

//6============revers trangals==========
cout<<"enter a numeber :";
int a;
cin>>a;

for(int row=0;row<a;row++)
{
    for(int col=0;col<a-row;col++)
    {
        cout<<"* ";
    }
cout<<endl;
}
//-----------------output----------
enter a numeber :5
* * * * * 
* * * * 
* * * 
* * 
* 

//7==============number trees ===================
cout<<"enter a number:";
int a;
cin>>a;
for( int row=0; row<a; row++){
    for( int col=0; col<a-row; col++){
        cout<< col+1 ;  
    }
    cout<<endl;
}
//--------output---------------------
enter a number:5
12345
1234
123
12
1

//8================= number tree=============== 
cout<<"enter a number:";
int a;
cin>>a;
for( int row=0; row<a; row++){
    for( int col=0; col<row+1; col++){
        cout<< col+1 ;  
    }
    cout<<endl;
}
//------OUTPUT---------
enter a number:5
1
12
123
1234
12345


//9=========piramid ==============
cout<<"enter a number:";
int n ;
cin>>n;
for(int row=0; row<n; row++){
    for(int col=0; col<n-row; col++){
        cout<<" ";
    }
    for(int col=0; col<row+1; col++){
        cout<<"* ";
    }
    cout<<endl;
}
//---------output-------------
enter a number:5
     * 
    * * 
   * * * 
  * * * * 
 * * * * * 

//10===========INNVERTERD PRIMIDS===========

cout<<"enter a number:";
int n ;
cin>>n;
for(int row=0; row<n; row++){
    for(int col=0; col<row+1; col++){
        cout<<" ";
    }
    for(int col=0; col<n-row; col++){
        cout<<"* ";
    }
    cout<<endl;
} 
//------output----------------
enter a number:5
 * * * * * 
  * * * * 
   * * * 
    * * 
     * 

//11=======================diamand ==============================
cout<<"enter the number :";
int a;
cin>>a;
for(int row=0;row<a; row++){
    for(int col=0; col<a-row; col++){
        cout<<" ";
    }
    for(int col=0; col<row+1; col++){
        cout<<"* ";
    }
    cout<<endl;
}
for(int row=0;row<a; row++){
    for(int col=0; col<row+1; col++){
        cout<<" ";
    }
    for(int col=0; col<a-row; col++){
        cout<<"* ";
    }
    cout<<endl;
}
//-----------output-----------
enter the number :5
     * 
    * * 
   * * * 
  * * * * 
 * * * * * 
 * * * * * 
  * * * * 
   * * * 
    * * 
     * 

//12===========  holo DIAMAND =================================
cout<<"enter the number:";
int n;
cin>>n;

for(int row=0; row<n; row++){
    //for spaces
     for(int col=0;col<n-row-1; col++){
        cout<<"  ";
       }
       //for star
    for(int col=0;col<2*row+1; col++){
        if(col==0) {cout<<"* ";}
        else if(col==2*row ) { cout<<"* ";}
        else{ cout<<"  ";}
    }
    cout<<endl;
}
for(int row=0; row<n; row++){
    for(int col=0 ;col<row; col++){
        cout<<"  ";
      }
    for(int col=0;col<2*n-2*row-1; col++){
        if(col==0||col==2*n-2*row-2){
            cout<<"* ";
        }
       else{
         cout<<"  ";
       }
       }
    cout<<endl;
} 
//-----output------------------
enter the number:5
        * 
      *   * 
    *       * 
  *           * 
*               * 
*               * 
  *           * 
    *       * 
      *   * 
        * 

//13======================= full doimand outer hole diamnd=======
cout<<"enter a number :";
int n;
cin>>n;

for(int row=0; row<n; row++){
    for(int col=0; col<n-row; col++){
        cout<<"*";
     }
    for(int col=0; col<2*row+1; col++){
        cout<<" ";
    }
    for(int col=0; col<n-row; col++){
        cout<<"*";
    }
      cout<<endl;   
     }  
  for(int row=0;row<n; row++){
    for(int col=0;col<row+1; col++){
        cout<<"*";
    }
    for(int col=0;col<2*n-2*row-1; col++){
        cout<<" ";
    }
        for(int col=0;col<row+1; col++){
        cout<<"*";
    }
    cout<<endl;
  } 
  //--------output-----------
  enter a number :5
***** *****
****   ****
***     ***
**       **
*         *
*         *
**       **
***     ***
****   ****
***** *****

//14==================================================
 cout<<"enter a number:";
 int n;
 cin>>n;

 for(int row=0; row<n; row++){
    for(int col=0; col<row+1; col++){
        cout<<row+1;
        if(col !=row){
            cout<<"*";
        }
    }
    cout<<endl;
 }
 for(int row=0; row<n; row++){
    for(int col=0; col<n-row; col++){
        cout<<n-row;
        if(col !=n-row-1){
            cout<<"*";
        }
    }
    cout<<endl;
 }
//----------------- out put----------
1
2*2
3*3*3-->
 
 
//15==============================================================
cout<<"enter a value :";
int n;
cin>>n;
     
for(int row=0; row<n; row++){
    int col;
    for( col=0; col<row+1; col++){
        int ans=col+1;
        char ch=ans+'A'-1;
        cout<<ch;
    }
    for(col=col-1; col>=1; col--){
        int ans=col;
        char ch=ans+'A'-1;
            cout<< ch;
        }
    cout<<endl;
    }
    ---------------output--------------------
    A
    ABA
    ABCBA
    ABCDCBA
       
 //16===========FULL PRIAMISD WITH NUMBER ===================================================
     cout<<"enter a number :";
     int n;
     cin>>n;

     for(int row=0; row<n; row++){
      
        for(int col=0; col<row+1; col++){
            cout<<col+row+1<<"  ";
          
        }
        cout<<endl;
     } 
     //-------------out put ---------------
     1
     23
     345
     4567  

    //17============ or with full primid number =========

    cout<<"enter the number :";
    int n ;
    cin>>n;
    for(int row=0; row<n; row++){
        for(int col=0; col<n-row; col++){
            cout<<" ";
        }
        for(int col=0; col<row+1; col++){
            cout<<col+row+1<<" ";
          
        }

        cout<<endl;;
    }
// -------------out put -->------------------
enter the number :5
     1 
    2 3 
   3 4 5 
  4 5 6 7 
 5 6 7 8 9   


//18====== NUW ROGRAM WITH THE NUMBER =============

cout<<"enter the number :";
    int n ;
    cin>>n;
    for(int row=0; row<n; row++){
        for(int col=0; col<n-row; col++){
            cout<<"  ";
        }
        for(int col=0; col<row+1; col++){
            cout<<col+row+1<<" ";
          
        }
        int l=2*row;
        for(int col=0; col<row; col++){
          cout<<l<<" ";
            l--;;
        }

        cout<<endl;;
    }
//-----------OUTPUT-------------------------------
            enter the number :5
          1 
        2 3 2 
      3 4 5 4 3 
    4 5 6 7 6 5 4 
  5 6 7 8 9 8 7 6 5   
  
  //19=======holo priamid with number========

cout<<"enter a number :";
int n;
cin>>n;
int col;
for(int row=0; row<n; row++){
    for( col=0; col<n-row; col++){
        cout<<" ";
    }
    int l=1;
    for( col=0; col<2*row+1; col++){
        if(row==0||row==n-1){
           if(col %2==0){ cout<<l;l++;}
           else{cout<<" ";}
        }
         else {
            if(col==0){cout<<"1";}
            else if(col==2*row+1-1){cout<<row+1;}
            else{cout<<" ";}
         }
    }
    cout<<endl;
}
//-----out put is --->>>>>>>>>>>
    enter a number :5
     1
    1 2
   1   3
  1     4
 1 2 3 4 5    

 //20===========holow inverted half primid=======

cout<<"enter a number :";
int n;
cin>>n;

int row,col;
for( row=0; row<n; row++){
    for(col=0; col<n-row; col++){
        if(row==0|| row==n-1){
        cout<<"* ";
    
        }
        else if(col==0 ||col==n-row-1){
            cout<<"* ";
           
        }
         else{
            cout<<"  ";
        }
    }
   cout<<endl;
    }
  //---------out put -------------------------------------- 
    enter a number :5
* * * * * 
*     * 
*   * 
* * 
*                               

 
//21=================half doamand===============
cout<<"enter the number:";
int n;
cin>>n;

for(int row=0; row<n; row++){
    for(int col=0; col<row+1; col++){
        cout<<"* ";
    }  
    cout<<endl;
}
for(int row=0; row<n; row++){
    for(int col=0; col<n-row-1; col++){
        cout<<"* ";
    }
    cout<<endl;
}
//-----------output----------------------------
enter the number:5
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * 
* * * 
* * 
*       */

}//







 



 






    


