#include <iostream>
using namespace std;


void insertsort(int arr[], int n) {
    for (int i = 0; i <n-1 ; ++i) {
        int end=i;
        int tmp=arr[end+1];
        while (end>=0)
        {
            if (tmp>arr[end])
            {
                arr[end+1]=arr[end];
                --end;
            }
            else
            {
                break;
            }
        }

        arr[end+1]=tmp;
    }

}

void shellsort(int a[],int n)
{
    int gap=n;
    while(gap>1)
    {
        gap=gap/3+1;

        for (int i = 0; i <n-gap ; ++i) {
            int end=i;
            int tmp=a[end+gap];
            while(end>=0){
                if (tmp<a[end])
                {
                    a[end+gap]=a[end];
                    end-=gap;
                } else{
                    break;
                }
            }
            a[end+gap]=tmp;
        }
    }

}

void selectsort(int a[],int n)
{
    int begin=0,end=n-1;
    while(begin<end)
    {//选择排序优化空间不大，不像插入排序  且时间复杂度为O(n^2)
        int mini,maxi;
        mini=maxi=begin;
        for (int i = begin+1; i <= end; ++i) {
            if (a[i]>a[maxi])
            {maxi=i;}
            if (a[i]<a[mini])
            { mini=i;}
        }
        swap(a[begin],a[mini]);
        if(begin==maxi)
        {
            maxi=mini;
        }
        swap(a[end],a[maxi]);
        ++begin;--end;
    }

}

void Bubblesort(int a[],int n)
{
    for (int i=0;i<n-1;i++) {
        for (int j = 0; j <n-i-1 ; ++j) {
            if(a[j]<a[j+1])
                swap(a[j],a[j+1]);
        }

    }
}





int partsort(int a[],int left,int right)
{
    int key=right;
    while (left<right)
    {
        while(left<right && a[left]<=a[key])left++;
        while(left<right && a[right]>=a[key]) right--;
        swap(a[left],a[right]);
    }
    swap(a[left],a[key]);
   return left;

}


void quicksort(int a[],int l,int r)
{
    if(l<r)
    {
        int div= partsort(a,l,r);
        quicksort(a,l,div-1);
        quicksort(a,div+1, r);
    }
}



int main() {
    int b[7]={23,4,1,3,97,5,32};
    int sz=sizeof(b)/sizeof (b[0]);
//    insertsort(b,sz);

//    shellsort(b,sz);
    //selectsort(b,sz);
//    quicksort(b,0,sz-1);
    for (int m=0;m<sz;m++) {
        cout<<b[m]<<endl;

    }
    return 0;
}
