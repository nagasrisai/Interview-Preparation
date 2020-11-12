#include<bits/stdc++.h>
using namespace std;

 
void 
insert_at_beginning (int arr[], int n, int ele) 
{
  
 
 
for (int i = n; i > 0; i--)
    
    {
      
 
arr[i] = arr[i - 1];
    
 
} 
arr[0] = ele;
  
 
for (int i = 0; i <= n; i++)
    
    {
      
 
cout << arr[i] << " ";
    
 
} 
cout << "\n";

 
} 
void 


insert_at_end (int arr[], int n, int ele) 
{
  
 
n++;
  
 
int i;
  
 
 
arr[n] = ele;
  
 
for (i = 0; i <= n; i++)
    
    {
      
 
cout << arr[i] << " ";
    
 
}
  
 
cout << "\n";

 
}


 
 
void 
insert_at_middle (int arr[], int n, int ele, int pos) 
{
  
 
int i;
  
 
n++;
  
try
  {
    
if (pos > n)
      {
	
throw pos;
      
}
  
}
  
catch (int pos)
  {
    
cout << "the given position in which your trying to insert " << pos <<
      "greater than" << n << "size of array" << "\n";
  
} 
 
for (i = n; i >= pos; i--)
    
    {
      
 
arr[i] = arr[i - 1];
    
 
}
  
 
 
arr[i] = ele;
  
 
for (int i = 0; i <= n; i++)
    
    {
      
 
cout << arr[i] << " ";
    
 
} 
cout << "\n";

 
} 
void 


delete_at_first (int arr[], int n) 
{
  
 
 
for (int i = 0; i <= n; i++)
    
    {
      
 
arr[i] = arr[i + 1];
  
 
} 
for (int i = 0; i <= n; i++)
    
    {
      
 
cout << arr[i] << " ";
    
 
} 
cout << "\n";

 
} 
void 


delete_at_middle (int arr[], int n, int pos) 
{
  
try
  {
    
if (pos > n)
      {
	
throw pos;
      
}
  
}
  
catch (int pos)
  {
    
cout << "the given position in which your trying to delete " << pos <<
      "greater than" << n << "size of array" << "\n";
  
} 
 
for (int i = pos - 1; i < n; i++)
    
    {
      
 
arr[i] = arr[i + 1];
  
 
} 
for (int i = 0; i < n; i++)
    
    {
      
 
cout << arr[i] << " ";
    
 
} 
cout << "\n";

 
} 
void 


delete_at_end (int arr[], int n) 
{
  
 
n--;
  
 
for (int i = 0; i < n; i++)
    
    {
      
 
cout << arr[i] << " ";
    
 
} 
cout << "\n";

 
} 
void 


searching (int arr[], int n, int ele) 
{
  
 
int i;
  
 
for (i = 0; i < n; i++)
    
    {
      
 
if (arr[i] == ele)
	
	{
	  
 
 
break;
	
 
}
    
 
}
  
 
cout << i << endl;

 
}


 
 
void 
getindex (int arr[], int n, int index) 
{
  
try
  {
    
if (index > n)
      
      {
	
 
throw index;
      
 
}
  
 
}
  
catch (int index)
  {
    
cout << "The index is out of bond" << "\n";
  
} 
 
if (index < n)
    
    {
      
 
cout << arr[index] << endl;
    
 
}

 
}


 
//Driver Code
int 
main () 
{
  
 
int arr[] = { 1, 2, 3, 4, 5 };
  
 
int n = 5;
  
 
insert_at_beginning (arr, n, 0);
  
 
insert_at_end (arr, n, 6);
  
 
insert_at_middle (arr, n, 20, 3);
  
insert_at_middle (arr, n, 20, 8);
  
delete_at_first (arr, n);
  
 
delete_at_middle (arr, n, 2);
  
delete_at_middle (arr, n, 7);
  
delete_at_end (arr, n);
  
 
searching (arr, n, 2);
  
 
searching (arr, n, 1);
  
 
getindex (arr, n, 3);
  
getindex (arr, n, 10);
  
 
 
 
return 0;

 
}


