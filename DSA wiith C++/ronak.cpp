 #include<iostream>
 #include<string>
 #include <bits/stdc++.h>
 #include<vector>
 
 

using namespace std;



void printname(){
   cout<<"enter a number :";
   int a;
   cin>>a;
  for(int i=0; i<a; i++){
    cout<<"bhautik"<<endl;
  }}

void sum(){
  int a,b,c;
  cout<<"enter a two number :";
  cin>>a;
  cin>>b;
  c=a+b;
  cout<<"the sum of two number :"<<c<<endl; 
   }
 void print(int a){

    cout<<a<<endl;
   a++;
   cout<<a<<endl;
   }

int mul(int a,int b){
  int mult=a*b;
 return  mult;
}

char gread(int mark){
      
      switch (mark/10){
      case 9:return 'A'; break;

      case 8:return  'B'; break;

      case 7:return  'C'; break;

      case 6:return  'D'; break;

      case 5:return  'F'; break;

      case 4:return  'G'; break;

      case 3:return  'H'; break;

     default:{cout<<"enter the vaid values";}
      }
}


 void  printarry(int arr[],int size){
  for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
 }

 void inc(int arr[],int size){
  arr[0]=arr[0]+10;
 arr[1]=arr[1]+24;
  printarry(arr,size);

}


bool found(int arr[],int size,int key){
  for(int i=0;i<size; i++){
    if( arr[i]==key)
      return true ;
  }
      return false;
  }
int  findElement(vector<int> arr){
  int ans=0;
     for(int i=0;i<arr.size(); i++){
      ans=ans^arr[i];
     }
   
return ans;
}

void printrowsum(int arr[][3],int col,int row){

  for(int i=0;i<row;i++){
    int sum=0;
    for(int j=0;j<col;j++){
      sum=sum+arr[j][i];
    }
    cout<<sum<<endl;
  }
}


void sumofEachElements(int arr[][3],int brr[][3],int crr[][3],int row,int col){
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      crr[i][j]=arr[i][j]+brr[i][j];
     // crr[i][j]=arr[i][j]*brr[j][i];//multiplyt metrix
     // crr[i][j]=arr[i][j]-brr[i][j];//subteat matrix
    
    }
   
  }
   for(int i=0;i<row; i++){
  for(int j=0; j<col; j++){
    cout<<crr[i][j]<<" ";
  }
  cout<<endl;
}
}
//-----------------------------------------
int getMaxiElement(int arr[][3],int row,int col){
int maxi=INT_MIN; 
for(int i=0;i<row;i++){
  for(int j=0;j<col;j++){
  if(arr[i][j]>maxi){
    maxi=arr[i][j];
    }
   }
   }
 return maxi;
}

int getMiniElement(int arr[][3],int col,int row){
int mini=INT_MAX; 
for(int i=0;i<row;i++){
  for(int j=0;j<col;j++){
  if(arr[i][j]<mini){
    mini=arr[i][j];
    }
   }
   }
 return mini;
}



int main(){
/*
//printname();
//sum();
//int a=5;
//cout<<a<<endl;
//print(a);
//-------------FIND THE LOCASANS OF THE STROD VALUES--------------------------
//int a=5;
//cout<<"the value of the locsons=="<<&a<<endl;
//---------------------------------------------------------------------------
/*int a,b;
cout<<"enter the value a and b multply :";
cin>>a;
cin>>b;
int m = mul(a,b);
cout<<"the multiply is "<<m<<endl; 
//------------NEW GREAD PROBALM-----------------------------
//int mark;
 //cout<<"enter your mark:";
 //cin>>mark;


//char grea=gread( mark);
//cout<<"your gread is :"<<grea<<endl;

for(int i=0;i<100;i++){
  char ans=gread(i);
  cout<<"your gread for mark :"<<i<<  "is" <<ans<<endl;
} */
//============CTEATINH ARRYS===================================

//-->>int arr[]={10,34,56,65,34};
//for(int i=0;i<5;i++){
//  cout<<arr[i]<<endl;
//}
//-->>char a[]={'b','v','d'};
///cout<<b[i]<<endl;}
//-->>string b[]={"bhautik","ronak","jay"};
//cout<<arr[3]<<endl;
//for(int i=0;i<3; i++){

/*=======input the 10 elements from user====

int arr[10];
cout<<"enter the values of 10 elements"<<endl;
for(int i=0; i<10; i++){
  cin>>arr[i];
}
for(int i=0; i<10; i++){
cout<<"your valuse is= "<<arr[i]<<endl;
} 
//==>>inpte 5 elements and doubal and give out puts==<<;
int arr[5];
cout<<"enter the 5 elements";
for(int i=0; i<5; i++){
  cin>>arr[i];
}

for(int i=0; i<5; i++){
  int s=arr[i]*2;
  cout<<"your doubla elements is = "<<s<<endl;
} */
//==>>ARRY AND FUNCTIONS====<<;
/*
int arr[]={1,3,4,3,5};
for(int i=0;i<5;i++){
  arr[i]=45;
}
for(int i=0; i<5;i++){
  cout<<arr[i]<<endl; 
}   
//===menst fuctions==================
  int a[5];

    // all elements of A are zero
    // Mainly all bits are set as 0
    memset(a, 0, sizeof(a));
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;

    // all elements of A are -1
    // Mainly all bits are set 1. Note that
    // the 2's complement representaion of -1
    // has all 1s
    memset(a, -1, sizeof(a));
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;

    


    // Would not work as we are setting word
    // by word (8 bits) and then accessing
    // integers (32 bits). A better way would be
    // to run a loop to set. Or use std::fill() 
    // (C++ only)
    memset(a, 5, sizeof(a)); // WRONG
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
 bool prime[5];
    memset(prime, true, sizeof(prime));
    // If you print without using boolalpha it will print
    // like this
    for (int i = 0; i < 5; i++)
        cout << prime[i] << " ";
    cout << "\n";
    // If you use boolalpha it will print like this
    for (int i = 0; i < 5; i++)
        cout << boolalpha << prime[i] << " ";

    

//==>>this ARRYS funtions always funtion by refrences hoto he;<<
  int arr[]{5,6};
  int size=2;

  inc(arr,size);
  printarry(arr,size);

    
//=>>linear seacrch in array=======<<<
//~~~~~~`using function~~~~~~~~~~';;;;;
int arr[5]={2,4,6,5,6};
int size=5;
int key;
cout<<"enter the finde the values : ";
cin >> key;

if(found(arr,size,key)){
  cout<<"found"<<endl;
}
else{
  cout<<"not found";
}
//~~~~without fuctoin--linear seacrch in array~~~~;
int arr[5]={2,4,6,5,6};
int size=5;
int key;
cout<<"enter the finde the values : ";
cin >> key;
bool f=0;

for(int i=0; i<size ;i++){
  if(arr[i]==key)
    f=1;
}

if(f=1){
  cout<<"found";
}
else{
  cout<<not found;
}
//=~~=find in the array how many 0,1 =~~~==;

int arr[10];
cout<<"enter the ten valuse in arrays"<<endl;
 for(int i=0; i<10; i++){
 cin>>arr[i];
 }
 int size=10;

int zero=0;
int one=0;

for(int i=0;i<size; i++){
  if(arr[i]==1){
    one++;
  }
   if(arr[i]==0){
    zero++;
  }
  }

cout<<"the number of zeos is "<<zero<<endl;
cout<<"the number of one is "<<one<<endl;

//~~~~~find the maximum number in array~~~;

int arr[10]={-12,-45,-54,-55,-54,-86,-75,-65,-86,-65};
// int arr[10];
// cout<<"enter the ten valuse in arrays"<<endl;
//  for(int i=0; i<10; i++){
//  cin>>arr[i];
//  }
int size=10;
int maxi=INT_MIN;
int min=INT_MAX;

for(int i=0 ;i<size ;i++){
  if(arr[i]>maxi){
   maxi=arr[i];
  }

  if(arr[i]<min){
   min=arr[i];
  }
 
 
}
  cout<<"the max number is "<<maxi<<endl;
  cout<<"the min number is "<<min<<endl;

//~~~EXTREME print in arry~~~~;;
int arr[8]={10,20,30,40,50,60,70,80};
//int size=7;
int size=8;

int sart= 0;
int end =size-1;

while (sart<=end)
{
  if(sart > end)
  break;
    
    if(sart==end){
      cout<<arr[end]<<" ";
    }
    else{
   cout<<arr[sart]<<" ";   
   cout<<arr[end]<<" ";
    }
   sart++;
   end--;
}
//-----```out put`````------;
//size=8-->"output-->10 80 20 70 30 60 40 50 
//size=7-->"out put"-->10 70 20 60 30 50 40 

//~~~array swap and array revers~~~~~~;;
 int arr[8]={10,20,30,40,50,60,70,80};

int size=8;

int sart= 0;
int end =size-1;

while (sart<=end)
{
  // if(sart > end)
  // break;
    
  //    
  swap(arr[sart],arr[end]);       
  sart++;
  end--;

}
for(int i=0;i<size; i++){
cout<<arr[i]<<" ";   
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~dianemic arrays with vatcor ~~~~~~~~~~`````````

vector<int> arr;

// cout<<arr.size()<<endl;
// cout<<arr.capacity()<<endl;
// int a=sizeof(arr)/sizeof(int);
// cout<<a<<endl;
//~~insert
arr.push_back(3);
arr.push_back(8);
arr.push_back(10);
//--PRINT
for(int i=0;i<arr.size(); i++){
  cout<<arr[i]<<endl;
}
cout<<endl;
//--delete
arr.pop_back();
for(int i=0;i<arr.size(); i++){
  cout<<arr[i]<<endl;
}

//--denemec array give the number
//==incilaza type=2~~~~~~~~~~
cout<<"entera number:";
int a;
cin>>a;

vector<int> brr(a,5);  

// cout<<brr.size()<<endl;
// cout<<brr.capacity()<<endl;

for(int i=0;i<brr.size(); i++){
  cout<<brr[i]<<" ";
}
cout<<endl;

//==incilaza type=3~~~~~~~~~~
vector<int> crr{1,2,3,4,5,6,7,8,9};

for(int i=0; i<crr.size(); i++){
  cout<<crr[i]<<" ";
  }


 vector<int> drr{1,2,3,4,5,6,7};
 //drr.push_back(6);
 cout<<"your vector is emtu or not:"<<drr.empty()<<endl;
 //-ans~~your vector is emtu or not:1  miss frue;
cout<<drr.size()<<endl;
cout<<drr.capacity()<<endl;  

//~~find the uniq elemenes in arrays~~~  ;
cout<<"enter size of arrys";
int a;
cin>>a;
vector<int> arr(a);
cout<<"insert the elemens:";

for(int i=0; i<arr.size(); i++){
  cin>>arr[i];
}

int uniqEalement = findElement(arr);

cout<<"your uniq element is:"<<uniqEalement <<endl;
*/
//==========================================
// //~~A and B = UOIN find 
// int arr[5]={1,2,3,4,5};
// int sizea=5;
// int brr[5]={6,4,3,9,0};
// int sizeb=5;


// vector<int> crr;

// for(int i=0; i<sizea;i++){
//   crr.push_back(arr[i]);
  
// }
// for(int i=0; i<sizeb;i++){
//   crr.push_back(brr[i]);
   
// }
 
// vector<int> drr;                  //vodiuo n0-arrya class-3;
                                          //1:05:08:
                                          //soluson baci;

// for(int i=0;i<crr.size();i++){ 
// //cout<<crr[i]<<" ";
// int ans=INT_MIN;                   
// for(int i=0;i<crr.size();i++){
// if(crr[i] !=ans){
// cout<<drr[i]<<" ";
// }

// }
// }
//ans~~1 2 3 4 5 6 7 8 9 0 ---;;
/*
//=================================
// find the incorsecoin in arrys --=====
int arr[]={1,2,3,4,5,6};

int brr[]={7,8,3,5,2,6};
int size=6;
vector<int> crr;

for(int i=0;i<size; i++){
  int element=arr[i];

  for(int i=0; i<size; i++){
    if(element==brr[i]){
    brr[i]=-1;
    crr.push_back(element);
    }
  }
}
// for(int i=0;i<crr.size();i++){
// cout<<crr[i]<<" ";
// }
//==~~~~print another type=====:
for(auto value :crr){
  cout<<value<<" ";
}

//===find the sum is 9 of tow lements===
vector<int> arr{1,2,3,4,3,5,6,8,7};


for(int i=0;i<arr.size(); i++){
   int a=arr[i];
   {
    for(int j=i+1;j<arr.size();j++){
       if(a+arr[j]==9){
        cout<<"("<<a<<","<<arr[j]<<")"<<endl;
       }
       
    }
   }
}
//~~~~~~~~~~ans~~~~~~~~~~~~~~~~~
//(1,8) (2,7) (3,6) (4,5) (3,6)

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
vector<int> arr{10,20,30,40};

int sum=80;

 for(int i=0; i<arr.size(); i++){
  int a1=arr[i];

     for(int j=i+1; j<arr.size(); j++){
     int a2=arr[j]; 
   
          for(int k=j+1; k<arr.size(); k++){
          int a3=arr[k];  

          if(a1+a2+a3==sum){
          cout<<"("<<a1<<","<<a2<<","<<a3<<")"<<endl;      
          }

          }
    }
 }
 //~~~~out put~~~~~~~>>>(10,30,40)

vector<int> arr{1,0,1,1,1,0,0,1,0,0,1,1,1,1,1};  

int s = 0;
int end = arr.size() - 1;
int i=0;


while (i != end)
{
  if(arr[i]==0){
    swap(arr[s], arr[i]);
     s++;
    i++;
    }
  else{
    swap(arr[end],arr[i]);
    end--;
  }
}
  for(auto val:arr){
    cout<<val<<" ";
  }
  //``out put ~~~>>>0 0 0 0 0 1 1 1 1 1 1 1 1 1 1 


//=================&&&&&&&&===========================
//#====lec=45---2D-ARRAY--===~~~~&&&&&&&&&&&;;


int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};


//ptint 2d-array                     //--output----
//~~~row wise print~~~~~~~~~~~        //  1 2 3
for(int i=0;i<3; i++){                 // 4 5 6
  for(int j=0; j<3; j++){             //  7 8 9
    cout<<arr[i][j]<<" ";
  }
  cout<<endl;
}

//colum wise print~~~~~~~~~~~~
for(int i=0;i<3; i++){              //---output---
  for(int j=0; j<3; j++){          //  1 4 7
    cout<<arr[j][i]<<" ";          //  2 5 6 
  }                                //  3 6 9 
  cout<<endl;
}


//---input in 2D array~~~~~~

int arr[3][4];
int row=3;
int col=4;
 
cout<<"enter your 3row,and 4col"<<endl;
for(int i=0;i<row;i++){
  for(int j=0;j<col; j++){
    cin>>arr[i][j];
  }
  cout<<endl;
}

//~~~row wise print~~~~~~~~~~~
for(int i=0;i<row; i++){
  for(int j=0; j<col; j++){
    cout<<arr[i][j]<<" ";
  }
  cout<<endl;
}

// --~~~~~~~OUTPUT~~~~~~
// enter your 3row,and 4col
// 1 3 9
// 4 5 8
// 6 4 8
// 4 3 7
// ===>>>

// 1 4 6 4 
// 3 5 4 3 
// 9 8 8 7       
//------------------------------------------------------------
//~~~~~~sum of 2d array~~~~

// int arr[3][3]={{2,3,4},{5,6,4},{6,8,6}};
// int brr[3][3]={{5,8,4},{3,8,6},{3,5,4}};
// int crr[3][3];

// int row=3;
// int col=3;



//~~sum of row wais int 2d array-->>
//printrowsum(arr,row,col) ;
//-----------------------------

//  sumofEachElements(arr,brr,crr,row,col);

//~~~find the max value in array~~~

 int arr[3][3]={{2,3,4},{5,6,4},{6,8,6}};
int row=3;
int col=3;

cout<<"min no is:"<<getMiniElement(arr,row,col)<<endl;
cout<<"max no is:"<<getMaxiElement(arr,row,col);
//~~~~output~~~~min no is:2
//              max no is:8


//~~~~swaping array~~~~~~~~
// int arr[3][3]={{2,3,4},{5,6,4},{6,8,6}};
// int trans[3][3];    


// for(int i=0;i<3;i++){
//   for(int j=0;j<3;j++){
//     cout<<arr[i][j]<<"  ";
//   }

//   cout<<endl;
// }
// cout<<"after swaping araay:"<<endl;

// for(int i=0;i<3;i++){
//   for(int j=0;j<3;j++){
//      trans[j][i]=arr[i][j];
//   }
//   cout<<endl;
// }

// for(int i=0;i<3; i++){
//   for(int j=0; j<3; j++){
//     cout<<trans[i][j]<<"  ";
//   }
//   cout<<endl;
// }
 //----output~~~~~~
// 2  3  4  
// 5  6  4  
// 6  8  6  
// after swaping araay:

// 2  5  6  
// 3  6  8  
// 4  4  6  

//~~~~~~~swapnt 3*4 to 4*3 metrix~~~~~~
  
    // Original 3x4 matrix
    // int original[3][4] = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 11, 12}
    // };

    // // New 4x3 matrix
    // int transposed[4][3];

    // // Transpose the matrix
    // for (int i = 0; i < 3; ++i) {
    //     for (int j = 0; j < 4; ++j) {
    //         transposed[j][i] = original[i][j];
    //     }
    // }

    // // Display the transposed matrix
    // cout << "Transposed 4x3 matrix:" << endl;
    // for (int i = 0; i < 4; ++i) {
    //     for (int j = 0; j < 3; ++j) {
    //         cout << transposed[i][j] << " ";
    //     }
    //     cout << endl;
    // }
 //============================================================
 //~~~~~~~VECTOR IN 2D ARRAY~~~~~~~~~~~~~~~~~~
vector<vector<int>> arr;

vector<int>a {1,2,3};
vector<int>b{3,7,3,5,6};
vector<int>c {6,5};

arr.push_back(a);
arr.push_back(b);
arr.push_back(c);

//~~~print the vector~~~
for(int i=0;i<arr.size();i++){
  for(int j=0;j<arr[i].size();j++){
    cout<<arr[i][j]<<" ";
  }
  cout<<endl;
}
//~~~~output~~~~
// 1 2 3 
// 3 7 3 5 6 
// 6 5 
 


//-----------vector aecond types of declearesons~~~
int row=4;
int col=6;
vector<vector<int>> arr(row,vector<int>(col,2));

for(int i=0;i<arr.size();i++){
  for(int j=0;j<arr[i].size();j++){
    cout<<arr[i][j]<<"   ";
  }
  cout<<endl;
}
//~~~output~~
// 2   2   2   2   2   2   
// 2   2   2   2   2   2   
// 2   2   2   2   2   2   
// 2   2   2   2   2   2  
 */
 
int arr1[] ={1,2,3};
int arr2[]= {4,5};
int sum[5];
 
  for(int i=0;i<2;i++){
    sum[i]=arr1[i];
  } 


  for(int i=3;i<6;i++){
    int j=0;
    sum[i]=arr2[j];
    j++;
  } 


  for(int i=0;i<6;i++){
   cout<<sum[i];
  }



}





























