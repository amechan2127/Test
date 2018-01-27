#include <stdio.h>
#include <math.h>

int findmax(int a[], int left, int right) {
    int u,v;
    int mid;
    mid=(left+right)/2;
    if(left==right-1){
        return a[left];
    }
    u=findmax(a,left,mid);
        printf("%d\n",u);
    v=findmax(a,mid,right);
    printf("%d\n",v);

    if(u<v){
        return u;
    }else{
        return v;
    }
}

int main(void) {
    int a[1000];
    int i,n,result;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    result=findmax(a,0,n);
    printf("%d\n", result);
}