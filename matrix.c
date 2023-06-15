#include <stdio.h>

int main(){
    
    
    
    int a[3][3];
    int b[3][3];
    int i;
    int j;
    int n;
    int z;
    int sum=0;
    printf("enter the number of rows of first matrix which are n=");
    scanf("%d",&n);
    int m;
    printf("enter the number of coloumns which  of first matrix are m=");
    scanf("%d",&m);
    int k;
    printf("enter the number of rows of second matrix which are k=");
    scanf("%d",&k);
    int l;
    printf("enter the number of coloumns of second matrix which are l=");
    scanf("%d",&l);
    
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
        
        
        
        
        
    }
    
    printf("the first matirx\n");
    
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\t",a[i][j]);
        }
        
        printf("\n");
    }
    
    
    
    
    for(i=0;i<k;i++){
        for(j=0;j<l;j++){
            scanf("%d",&b[i][j]);
        }
        
        
        
        
        
    }
    
    printf("the second matrix\n");
    
    
    for(i=0;i<k;i++){
        for(j=0;j<l;j++){
            printf("%d\t",b[i][j]);
        }
        
        printf("\n");
    }
    
    printf("the final is\n ");
    
    for(i=0;i<k;i++){
        for(j=0;j<l;j++){
            sum=0;
            for(z=0;z<3;z++){
                
               sum=sum+a[i][z]+b[z][j];
            //   printf("%d\t",sum);
            }
            
            
            printf("%d\t",sum);
            
        }
        
        printf("\n");
    }
    
    
    
    
    
    
    
    
    
    
    
}




