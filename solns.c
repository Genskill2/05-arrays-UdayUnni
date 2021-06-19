/* Enter your solutions in this file */
#include <stdio.h>
int max(int arr[],int a)
{int M= arr[0];
 for(int i=0;i<a;i++)
 {if(arr[i]>=M)
   M=arr[i];}
 return M;
}
  
int min(int arr[],int a)
  {int m= arr[0];
 for(int i=0;i<a;i++)
 {if(arr[i]<=m)
   m=arr[i];}
 return m;
}

int average(int arr[],int a)
{float sum=0,avg;
for(int i=0;i<a;i++)
    {sum=sum+arr[i];}
    avg=sum/a;
    return avg;
}
    
int mode(int arr[],int a)
{ int max_ele = max(arr,a);
  int ab[max_ele+1];
  
  for(int i=0; i<= max_ele; i++){
    arr[i]=0;
    for(int j = 0; j < a; j++){
         if(arr[j] == i){
            ab[i]++;
    }
    }
  }
  
  int l = ab[0], position=0;
  for(int i = 1; i <= max_ele; i++){
   if(ab[i]>l){
     l = ab[i];
     position=i;
   }

  }
  return position;
}

int factors(int b,int re[]){
  int ct=-1;
  while (b%2 == 0)
    {   ct++;
        re[ct]=2;
        b = b/2;
        
    }
 
for (int i = 3; i <= sqrt(b); i = i+2)
    { while (b%i == 0)
        {   ct++;
            re[ct] = i;   
            b = b/i;}
    }
  if (b > 2)
  {  ct++;
     re[ct]=b;} 
  return (ct+1);
}
