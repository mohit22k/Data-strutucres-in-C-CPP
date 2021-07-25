#include<stdio.h>

struct Array
{
    int A[10];
    int size;
    int length;
} ;

int BinSearch(struct Array arr,int key) 
{
    int l;
    int h;
    int mid;
    l=0;
    h=arr.length-1;
    
    while (l<=h)
    {
        mid=(l+h)/2;
        if (key==arr.A[mid])
            return mid;
        else if (key<arr.A[mid])
            h=mid-1;
        else
            l=mid+1;
    }
    return -1;
    
}

int RBinSearch(int a[],int l,int h, int key)
{
    
    int mid;

    if (l<=h)
    {
        mid =(l+h)/2;
        if (key==a[mid])
            return mid;
        else if (key<a[mid])
            return RBinSearch(a,l,mid-1,key);
        else
            return RBinSearch(a,mid+1,h,key);

    }
    return -1;
}

int main()
{
    struct Array arr={{2,22,25,32,45,65,78},10,7};
    /*printf("%d\n",BinSearch(arr,32));*/
    printf("%d\n",RBinSearch(arr.A,0,arr.length,45));
    
    return 0;

} 
