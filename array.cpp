#include<bits/stdc++.h>

using namespace  std;

void insert_at_beginning(int arr[], int *n, int ele) {
    *n++;
    int i;

    for(i=*n; i>=0; i--) {
        arr[i]=arr[i-1];

    }
    arr[i]=ele;
}

void insert_at_middle (int arr[], int *n, int ele, int pos ) {
    *n++;
    int i;
    for(i=*n; i>=pos; i--) {
        arr[i]=arr[i-1];
    }
    arr[i]=ele;
}

void insert_at_end (int arr[], int *n, int ele) {
    arr[*n++]=ele;
}

void delete_at_beginning (int arr[],int *n) {
    int i;
    for(int i=0; i<*n; i++) {
        arr[i]=arr[i-1];
    }
    *n--;

}

void delete_at_middle (int arr[], int *n,  int pos) {

    if(pos>*n) {
        try {
            throw "Index out of bound range error";
        }
        catch (const char* error) {
            cout<<error<<" ";
        }
    }

    else {

        for(int i=pos-1; i<*n; i++) {
            arr[i]=arr[i+1];
        }

    }

}

void delete_at_end (int arr[], int *n) {

    *n--;

}

void search_for_element (int arr[], int n, int ele) {
    for(int i=0; i<n; i++) {
        if(arr[i]==ele) {
            cout<<i<<" ";
        }
    }
}
int main(){
    int n=3;
    int arr[n]={8,9,10};

    insert_at_beginning(arr, &n, 1);


    insert_at_beginning(arr, &n, 2);


    insert_at_beginning(arr, &n, 3);


    insert_at_beginning(arr, &n, 4);


    insert_at_middle(arr, &n,5,3);
    assert(3<n);

    insert_at_end(arr, &n,11);

    delete_at_beginning(arr,&n);

    delete_at_end(arr,&n);

    delete_at_middle(arr,&n,2);

    search_for_element(arr,n,8);

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}
