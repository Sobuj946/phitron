#include<stdio.h>

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int s[n];
      for(int i=0;i<n;i++){
        int cnt=0;
          for(int j=0;j<m;j++){
            if(arr[i][j]==1){
                cnt++;
            }

        }
      
    
        s[i]=cnt;
    
    }
int max=s[0];int ind=0;
 for(int i=0;i<n;i++){
    if(s[i]>max){
        max=s[i];
        ind=i;
    }
        
    }
     printf("%d ",ind);
}